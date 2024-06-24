#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));
    int numeroMagico = rand() % 100 + 1;
    int intento;

    cout<< "Adivina el numero Magico (Entre el 1 y 100): ";
    while(true){
        cin>>intento;
        if (intento == numeroMagico){
            cout<< "Felicidades, adivinaste el numero magico"<<endl;
            break;
        } else if (intento > numeroMagico){
            cout<< "El numero magico es menor"<<endl;
        } else {
            cout<< "El numero magico es mayor"<<endl;
        }
    }
    return 0;
}