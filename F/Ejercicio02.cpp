#include<iostream>
using namespace std;

void porValor (int a) {
    a = 10;
    cout<< "El valor de a es: "<<a<<endl;
}
void porReferencia (int &a) {
    a = 10;
    cout<< "El valor de a es: "<<a<<endl;
}
int main () {
    int num = 5;
    cout<< "Antes de pasar por valor, num es: "<<num<<endl;
    porValor(num);
    cout<< "Despues de pasar por valor, num es: "<<num<<endl;
    cout<< "Antes de pasar por referencia, num es: "<<num<<endl;
    porReferencia(num);
    cout<< "Despues de pasar por referencia, num es: "<<num<<endl;

    return 0;
}