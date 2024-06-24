#include<iostream>
using namespace std;

int saldo= 0;
    void depositar() {
        saldo += 100;
        cout<< "Se han depositado 100 unidades"<<endl;
        cout<< "Deposito exitoso "<<saldo<<endl;
    }
    void retirar() {
        if (saldo >= 100) {
            saldo -= 100;
            cout<< "Se han retirado 100 unidades"<<endl;
            cout<< "Retiro exitoso"<<saldo<<endl;
        } else {
            cout<< "Saldo insuficiente"<<endl;
        }
    }
    void consultar() {
        cout<< "Su saldo es: "<<saldo<<endl;
    }

    void menu() {
    int opcion;
    do {
        cout<< "/n--- Cajero Automatico ---"<<endl;
        cout<< "1. Ingresar dinero"<<endl;
        cout<< "2. Retirar dinero"<<endl;
        cout<< "3. Consultar saldo"<<endl;
        cout<< "4. Salir"<<endl;
        cout<< "Ingrese una opcion: ";
        cin>>opcion;
        
        switch (opcion) {
            case 1:
                depositar();
                break;
            case 2:
                retirar();
                break;
            case 3:
                consultar();
                break; 
            case 4:
                cout<< "Gracias por usar el cajero"<<endl;
                break;
            default:
                cout<< "Opcion incorrecta"<<endl;
        }
    } while (opcion != 4);
}
    int main () {
        menu();
        return 0;
    }
