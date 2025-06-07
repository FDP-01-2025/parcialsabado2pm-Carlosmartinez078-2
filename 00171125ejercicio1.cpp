#include <iostream>
using namespace std;

int main (){

    int edad;

    cout << "Ingrese su edad \n";
    cin >> edad;
    
    if (edad <18){
        cout << "Eres menor de edad \n";
    } else if (edad >=18 && edad <=59){
        cout << "Eres una persona adulta \n";
    } else if (edad >=60){
        cout << "Eres un adulto mayor \n";
    }


    return 0;
}