#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double a, b, c;
    cout<<"Introduce el coeficiente a: ";
    cin>>a;
    cout<<"Introduce el coeficiente b: ";
    cin>>b;
    cout<<"Introduce el coeficiente c: ";
    cin>>c;
    double discriminante = pow(b, 2) - 4 * a * c;
    if (discriminante > 0) {
        double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        cout<<"Las raices son reales y diferentes."<<endl;
        cout<<"raiz 1: "<<raiz1<<endl;
        cout<<"raiz 2: "<<raiz2<<endl;
    } else if (discriminante == 0) {
        double raiz = -b / (2 * a);
        cout<<"Las raices son reales y iguales."<<endl;
        cout<<"raiz: "<<raiz<<endl;
    } else {
        cout<<"Las raices son complejas y no reales."<<endl;
    }

    return 0;
}
