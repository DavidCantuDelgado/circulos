#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#include "Coordenada.h"
#include "Circulos.h"

int main() {

    int x,y,radio;
    Circulos circulos[20];
    char opc = 's';
    int num_Circulos = 0;
// Leer circulos en consola
/*
    while (opc == 's' && num_Circulos<20) {
        cout << "Coordenada x: " << endl;
        cin >> x;
        cout << "Coordenada y: " << endl;
        cin >> y;
        //Coordenada xy(x,y);
        cout << "Radio: " << endl;
        cin >> radio;
        Circulos circ(Coordenada(x,y),radio);
        //circulos[num_Circulos] = circ;
        circulos[num_Circulos] = Circulos(Coordena(x,y),radio);
        num_Circulos++;
        if (num_Circulos < 20) {
            cout << "Quieres agregar más circulos" << endl;
            cin >> opc;
        }
    }
*/
// Leer circulos de archivo
    ifstream archivo;
    archivo.open("circulos.txt");
    while (archivo >> x >> y >> radio) {
        circulos[num_Circulos] = Circulos(Coordenada(x,y),radio);
        num_Circulos++;
    }
    archivo.close();

    for (int i=0;i<num_Circulos;i++){
        cout << "Circulo #" << i << endl;
        circulos[i].draw();
    }


    return 0;

}