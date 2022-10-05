// Apuntes 3 de octubre

//Implementacion.cpp

#include "Rectangulo.hpp"

Rectangulo::Rectangulo(int nuevoArriba, int nuevoIzquierda, int nuevoAbajo, int nuevoDerecha)
{
    arriba = nuevoArriba;
    izquierda = nuevoIzquierda;
    abajo = nuevoAbajo;
    derecha = nuevoDerecha;

    arribaIzquierda.setX(izquierda);
    arribaIzquierda.setY(arriba);
    
    arribaDerecha.setX(derecha);
    arribaDerecha.setY(arriba);

    abajoIzquierda.setX(izquierda);
    abajoIzquierda.setY(abajo);

    abajoDerecha.setX(derecha);
    abajoDerecha.setY(abajo);
}

void Rectangulo::setArribaIzquierda(Punto lugar)
{
    arribaIzquierda = lugar;
    arribaDerecha.setY(lugar.getY());
    abajoIzquierda.setX(lugar.getX());
    arriba = lugar.getY();
    izquierda = lugar.getX();
}
void Rectangulo::setAbajoIzquierda(Punto lugar)
{
    abajoIzquierda = lugar;
    abajoDerecha.setY(lugar.getY());
    arribaIzquierda.setX(lugar.getX());
    abajo = lugar.getY();
    izquierda = lugar.getX();
}
void Rectangulo::setAbajoDerecha(Punto lugar)
{
    abajoDerecha = lugar;
    abajoIzquierda.setY(lugar.getY());
    arribaDerecha.setX(lugar.getX());
    abajo = lugar.getY();
    derecha = lugar.getX();
}
// Segunda parte
void Rectangulo::setArribaDerecha(Punto lugar)
{
    arribaDerecha = lugar;
    arribaIzquierda.setY(lugar.getY());
    abajoDerecha.setX(lugar.getX());
    arriba = lugar.getY();
    derecha = lugar.getX();
}
void Rectangulo::setArriba(int nuevoArriba)
{
    arriba = nuevoArriba;
    arribaIzquierda.setY(arriba);
    arribaDerecha.setY(arriba);
}
void Rectangulo::setIzquierda(int nuevoIzquierda)
{
    izquierda = nuevoIzquierda;
    arribaIzquierda.setX(izquierda);
    abajoIzquierda.setX(izquierda);
}

//Tercera parte

void Rectangulo::setAbajo(int nuevoAbajo)
{
    abajo = nuevoAbajo;
    abajoIzquierda.setY(abajo);
    abajoDerecha.setY(abajo);
}
void Rectangulo::setDerecha(int nuevoDerecha)
{
    derecha = nuevoDerecha;
    arribaDerecha.setX(derecha);
    abajoDerecha.setX(derecha);
}
void Rectangulo::getArea() const
{
    int ancho = derecha - izquierda;
    int alto = arriba - abajo;
    return (ancho * alto);
}

// Apuntes 5 de octubre del 2022
// Calcular el area de un rectangulo al 
// encontrar sus esquinas y determinar
// sus coordenadas
using namespace std;

int main()
{
    // Instanciar e inicializar un objetio local de tipo
    // rectangulo.

    Rectangulo miRectangulo(3, 4, 20, 55 );

    int area = miRectangulo.getArea();

    cout << "Area: " << area << endl;
    cout << "Coordenada X Arriba Izquierda: ";
    cout << miRectangulo.getArribaIzquierda().getX()
        << endl;

    return 0;
}