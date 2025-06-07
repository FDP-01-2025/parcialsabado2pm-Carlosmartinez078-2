#include <iostream>
using namespace std;

int main(){

    string usuario;
    int carnet, opciones,devolver;
    int libro [3];

    do{

    cout << "ingresa tu nombre de usuario \n";
    cin >> usuario;

    cout << "Ingresa tu numero de carnet \n";
    cin >> carnet;

    if (carnet <8) {
        cout << "Carnet valido \n";
    } else {
        cout << "Carnet invalido \n";
    }
    
    cout << "Que opcion deseas seleccionar \n";
    cout << "1. prestar libro \n";
    cout << "2. Devolver libro \n";
    cout << "3. salir \n";
    cin >> opciones;

    switch (opciones){
    case 1:
        cout << "Has seleccionado prestar un libro \n";
        cout << "Libro 1 \n";
        cout << "Libro 2 \n";
        cout << "Libro 3 \n";
        cin >> libro[3];

        cout << "Pestamo exitoso \n";
        break;
    
    case 2:
        cout << "Has seleccionado devolver libro \n";
        cout << "lista de libros pestados: 3 \n";
        cout << "Selecciona un libro para devolver \n";
        cout << "Libro 1 \n";
        cout << "Libro 2 \n";
        cout << "Libro 3 \n";
        cin >> devolver;

        switch (devolver){
        case 1:
            cout << "Devolviendo libro 1 \n";
            cout << "Hecho con exito \n";
            break;
        case 2:
            cout << "Devolviendo libro 2 \n";
            cout << "Hecho con exito \n";
            break;
        case 3:
            cout << "Devolviendo libro 3 \n";
            cout << "Hecho con exito \n";
            break;
        default:
            cout << "Selecciona un libro \n";
            break;
        }
        break;


    case 3:
        cout << "Saliendo del programa \n";
        }
    }    

    while (opciones !=3);
    

    return 0;
}