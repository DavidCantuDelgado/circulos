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

    while (opc == 's' && num_Circulos<20) {
        cout << "Coordenada x: " << endl;
        cin >> x;
        cout << "Coordenada y: " << endl;
        cin >> y;
        Coordenada xy(x,y);
        cout << "Radio: " << endl;
        cin >> radio;
        Circulos circ(xy,radio);
        circulos[num_Circulos] = circ;
        num_Circulos++;
        if (num_Circulos < 20) {
            cout << "Quieres agregar más circulos" << endl;
            cin >> opc;
        }
    }

    for (int i=0;i<num_Circulos;i++){
        cout << "Circulo #" << i << endl;
        circulos[i].draw();
    }


    return 0;

}