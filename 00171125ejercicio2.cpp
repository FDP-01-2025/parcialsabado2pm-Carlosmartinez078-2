#include <iostream>
using namespace std;

int main(){

    int numero[10];

    cout << "Ingrese 10 numeros \n";

    for (int i = 0; i < 10; i++){
        cin >> numero[i];
    }

    for (int i = 0; i < 10; i++){
        if (numero [i] %2 == 0) {
            cout << "Es un numero par \n";
        } else {
            cout << "Es un numero impar \n";
        }
        
    }
    
    
    return 0;
}