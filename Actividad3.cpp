#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double cat1, cat2, hipotenusa;
    cout<<"Introduce el valor del primer cateto: ";
    cin>>cat1;
    cout<<"Introduce el valor del segundo cateto: ";
    cin>>cat2;
    hipotenusa = sqrt(pow (cat1, 2) + pow(cat2, 2));
    cout<<"La hipotenusa del triangulo es: "<<hipotenusa<<endl;
    return 0;
}