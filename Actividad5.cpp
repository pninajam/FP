#include<iostream>
#include<cmath>
using namespace std;

void calcularRaices(double a, double b, double c, double &raiz1, double &raiz2, bool &Real) {
    double discriminante = pow(b, 2) - 4 * a * c;
    if (discriminante >= 0) {
        Real = true;
        if (discriminante > 0) {
            raiz1 = (-b + sqrt(discriminante)) / (2 * a);
            raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        } else {
            raiz1 = raiz2 = -b / (2 * a);
        }
    } else {
        Real = false;
    }
}

int main() {
    double a, b, c;
    double raiz1, raiz2;
    bool Real;
    cout<<"Introduce el coeficiente a: ";
    cin>>a;
    cout<<"Introduce el coeficiente b: ";
    cin>>b;
    cout<<"Introduce el coeficiente c: ";
    cin >> c;
    calcularRaices(a, b, c, raiz1, raiz2, Real);
    if (Real) {
        if (raiz1 == raiz2) {
            cout<<"Las raices son reales e iguales."<<endl;
            cout<<"raiz: " << raiz1 << endl;
        } else {
            cout<<"Las raices son reales y diferentes."<<endl;
            cout<<"raiz 1: " << raiz1 << endl;
            cout<<"raiz 2: " << raiz2 << endl;
        }
    } else {
        cout<<"Las raices son complejas y no reales."<<endl;
    }
    return 0;
}