#include<iostream>
#include<cmath>
using namespace std;

int main (){
    double num;
    cout<<  "Ingrese un numero: ";
    cin>>num;

    cout<< "Valor absoluto: "<<abs(num) <<endl;
    cout<< "Raiz cuadrada: "<<sqrt(num) <<endl;
    cout<< "Potencia al cuadrado: "<<pow(num,2) <<endl;
    cout<< "Redondeo: "<<round(num) <<endl;
    cout<< "Redondeo hacia arriba: "<<ceil(num) <<endl;
    cout<< "Redondeo hacia abajo: "<<floor(num) <<endl;
    cout<< "Seno: "<<sin(num) <<endl;
    cout<< "Coseno: "<<cos(num) <<endl;
    cout<< "Tangente: "<<tan(num) <<endl;
    
    return 0;
}