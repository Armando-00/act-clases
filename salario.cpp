#include <iostream>
#include <cmath>
using namespace std;

int main (){
    float salario, resultado, isss, afp, renta, salarioTotal;
    char opcion;
    
    //Pedimos al usuario que ingrese su salario en bruto para calcular sus descuentos
    cout << "Ingrese su salario mensual bruto" << endl;
    cin >> salario;

    //pedimos al usuario que seleccione las opciones para calcular sus descuentos
    cout << "Descuentos de su salario" <<endl;
        cout << "a. ISSS" << endl;
        cout << "b. AFP" << endl;
        cout << "c. Renta" << endl;
        cout << "d. Todos" << endl; 
        cout << "e. Salir" << endl;
        cin >> opcion;
    
    switch (opcion){    
            case 'a':
                isss = salario*0.03;
                cout << "Su descuento del seguro social es: " << isss << endl;
                break;
            case 'b':
                afp = salario*0.0725;
                cout << "Su descuento de AFP es: " << afp << endl;
                break;
            case 'c':
             if (salario <= 472.99) {
                    cout << "Excento de descuento de renta" << endl;
               }
               else if (salario >= 473 <= 895.24) {
                    renta = salario*0.1;
                    cout << "Su descuento de renta es: " << renta <<endl;
               }
                else if (salario >= 895.25 <= 2038.10) {
                    renta = salario*0.2;
                    cout << "Su descuento de renta es: " << renta << endl;
                }
                else if (salario > 2038.10) {
                    renta = salario*0.3;
                    cout << "Su descuento de la renta es: " << renta <<endl;
                }
                else 
                {
                    cout << "no se puede calcular su descuento" << endl;
                }
                break;
            case 'd':
                isss = salario * 0.03;
                cout << "Su descuento del seguro social es: " << isss << endl;
                afp = salario * 0.0720;
                cout << "Su descuento de AFP es: " << afp << endl;

                resultado = (salario - isss - afp);
                cout << "Su salario restanto descuento de ISSS y AFP es: " << resultado << endl;

                if (resultado <= 472.99) {
                    cout << "Excento de descuento de renta" << endl;
               }
               else if (resultado >= 473 <= 895.24) {
                    renta = resultado*0.1;
                    cout << "Su descuento de renta es: " << renta <<endl;
               }
                else if (resultado >= 895.25 <= 2038.10) {
                    renta = resultado*0.2;
                    cout << "Su descuento de renta es: " << renta << endl;
                }
                else if (resultado > 2038.10) {
                    renta = resultado*0.3;
                    cout << "Su descuento de la renta es: " << renta <<endl;
                }
                else 
                {
                    cout << "no se puede calcular su descuento" << endl;
                }
                
                salarioTotal = salario - isss - afp - renta;
                cout << "Su salario total es: " <<salarioTotal << endl;
                break;


            } 
    return 0;
}