/*Implementar uma classe Ponto que represente pontos em
três dimensões (x, y e z). Incluir um construtor por default,
um construtor alternativo, uma função oposto(), que
transforme o ponto em seu oposto, uma função distância
que devolve a distância do ponto a origem (0,0,0) e uma
função visualizar().*/


#include <iostream>
#include <cmath>
using namespace std;

class Ponto{
    float x, y, z;
public:
    Ponto();
    Ponto(float x, float y, float z);
    void oposto();
    float distancia(Ponto p);
    void vizualizar();
    void setX(float px){x=px;}
    void setY(float py){y=py;}
    void setZ(float pz){z=pz;}
    float getX(){return x;}
    float getY(){return y;}
    float getZ(){return z;}

};

Ponto::Ponto():x(0),y(0),z(0){}

Ponto::Ponto(float x, float y, float z):x(x),y(y),z(z){}

void Ponto::vizualizar(){
    cout << "(" << x << "," << y << "," << z << ")\n";
}

void Ponto::oposto(){
    cout << "(" << -x << "," << -y << "," << -z << ")\n";
}

float Ponto::distancia(Ponto p = Ponto()){
    return sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y)+(z-p.x)*(z-p.x));
}

int main(){
    Ponto p1, p2(10,20,30);
    Ponto p3(p1);
    p1.vizualizar();
    p2.vizualizar();
    p3.vizualizar();
    p2.oposto();
    p1.setX(10);
    p1.vizualizar();
}
