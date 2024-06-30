#include<iostream>
#include<ctime>
using namespace std;

int main() {
    srand(time(0));
    int usuario, computadora;
    int puntajeUsuario = 0, puntajeComputadora = 0;

    cout<<"¡Bienvenido al juego de Piedra, Papel y Tijeras!"<<endl;

    while (puntajeUsuario < 3 && puntajeComputadora < 3) {
        cout<<"\nElige tu jugada: (1) Piedra, (2) Papel, (3) Tijeras: ";
        cin>>usuario;
        computadora = rand() % 3 + 1;

        if (usuario == computadora) {
            cout<<"Empate. Ambos eligieron lo mismo."<<endl;
        } else if ((usuario == 1 && computadora == 3) ||
                   (usuario == 2 && computadora == 1) ||
                   (usuario == 3 && computadora == 2)) {
            cout<<"¡Ganaste esta ronda!"<<endl;
            puntajeUsuario++;
        } else {
            cout<<"La computadora gana esta ronda."<<endl;
            puntajeComputadora++;
        }
    }

    if (puntajeUsuario > puntajeComputadora) {
        cout<<"\n¡Felicidades! ¡Ganaste el juego!"<<endl;
    } else {
        cout<<"\nLa computadora gana el juego. ¡Inténtalo de nuevo!"<<endl;
    }
    return 0;
}