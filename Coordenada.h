#ifndef Coordenada_h
#define Coordenada_h

class Coordenada{
private:
    int x;
    int y;
public:
    Coordenada();
    Coordenada(int x, int y);
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();
    void display();
};
Coordenada::Coordenada() {
    x = 0;
    y = 0;
};
Coordenada::Coordenada(int x, int y) {
    this->x = x;
    this->y = y;
}
void Coordenada::setX(int x) {
    this->x = x;
}
void Coordenada::setY(int y) {
    this->y = y;
}
int Coordenada::getX() {
    return x;
}
int Coordenada::getY() {
    return y;
}
void Coordenada::display() {
    cout << "x: " << x << " y: " << y << endl;
}
#endif