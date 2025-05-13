#include <iostream>
using namespace std;

int main (){
    
    float Puntaje;
    char opcion;


    cout << "a) 1 estrella" << endl;
    cout << "b) 2 estrellas" << endl;
    cout << "c) 3 estrellas" << endl;
    cout << "d) 4 estrellas" << endl;
    cin >> opcion;

    switch (opcion){
        case 'a': 
        cout << "Puede mejorar, buen intento" << endl;
        break;
        case 'b':
        cout << "Bien pero aun puede mejorar" << endl;
        break;
        case 'c':
        cout << "Felicidades, muy buen intento, vamos por mas" << endl;
        break;
        case 'd':
        cout << "Perfecto, muy bien, excelente" << endl;
        break;
    }


    return 0;
}