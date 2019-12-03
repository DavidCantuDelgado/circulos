#ifndef Circulos_h
#define Circulos_h

#include "Coordenada.h"


class Circulos {
private: 
    Coordenada coordenada;
    int radio;
public:
    Circulos();
    Circulos(Coordenada coordenada, int radio);
    void setCoordenada(Coordenada coordenada);
    void setRadio(int radio);
    Coordenada getCoordenada();
    int getRadio();
    void draw();
};

Circulos::Circulos() {
    //Coordenada coord;
    //this->coordenada = coord;
    this->coordenada = Coordenada();
    this->radio = 1; 
}
Circulos::Circulos(Coordenada coordenada, int radio) {
    this->coordenada = coordenada;
    this->radio = radio;
}
void Circulos::setCoordenada(Coordenada coordenada) {
    this->coordenada = coordenada;
}
void Circulos::setRadio(int radio) {
    this->radio = radio;
}
Coordenada Circulos::getCoordenada() {
    return coordenada;
}
int Circulos::getRadio() {
    return radio;
}
void Circulos::draw() {
    coordenada.display();
    cout << "Radio: " << radio << endl;
}
#endif