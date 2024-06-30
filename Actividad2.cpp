#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int cantidad, maximo;
    cout<<"Introduce la cantidad de numeros aleatorios a generar: ";
    cin>>cantidad;
    cout<<"Introduce el valor maximo permitido: ";
    cin>>maximo;
    cout<<"Numeros aleatorios generados:"<<endl;
    for (int i = 0; i < cantidad; ++i) {
        int numeroAleatorio = rand() % (maximo + 1);
        cout<<numeroAleatorio << " ";
    }
    cout<<endl;
    return 0;
}