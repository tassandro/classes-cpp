/*Implemente em C++:

a) Uma classe que trate de polígonos regulares, com:

- dois atributos privados que representem o número de lados do
polígono e o comprimento do lado (em cm);

- um construtor para classe que inicialize os dois atributos;

- dois métodos públicos que calculem a soma dos ângulos internos e o
perímetro do polígono.

b) Duas classes que representem um quadrado e um triângulo
equilátero, derivadas da classe do polígono regular, com um construtor
que utilize o construtor da classe base. Implemente também para cada
classe um método público que calcule a área do quadrado ou triângulo.

Obs: Não implemente o método de cálculo da área na classe base*/

#include <iostream>
#include <cmath>

using namespace std;

class Poligono {
    double lado, comprimento;
public:
    Poligono(double lado, double comprimento);
    double SomaDosAngulos();
    double Perimetro();
    double getComprimento(){return comprimento;}
};

Poligono::Poligono(double lado, double comprimento):lado(lado), comprimento(comprimento){
    if (lado<3 || comprimento<0) cout << "Erro!";
};

double Poligono:: SomaDosAngulos(){
    return 180*(lado-2);
}

double Poligono:: Perimetro(){
    return lado*comprimento;
}

class Quadrado:public Poligono{
public:
    Quadrado(double comprimento):Poligono(4, comprimento){}
    float Area();
};


class Triangulo:public Poligono{
public:
    Triangulo(double comprimento):Poligono(3, comprimento){}
    float Area();
};


float Quadrado:: Area(){
    return getComprimento()*getComprimento();
}

float Triangulo:: Area(){
    return getComprimento()*getComprimento()*sqrt(3)/4;
}


int main(){
    Poligono p(3,2);
    cout << p.SomaDosAngulos() << endl;
    cout << p.Perimetro() << endl;
    Quadrado q(3);
    cout << q.Perimetro() << endl;
}
