// Rectangulo.hpp
#include <iostream>
class Punto
{
    // No se especifico un constructor, se utilizara el default
    public:
        void setX(int nuevoX) { x = nuevoX; }
        void setY(int nuevoY) { y = nuevoY; }

        int getX() const { return x;}
        int getY() const { return y;}

    private:
        int x;
        int y;
         
};

class Rectangulo
{
    public:
        Rectangulo (int nuevoArriba, int nuevoIzquierda, int nuevoAbajo, int nuevoDerecha);
        ~Rectangulo() {}

        int getArriba() const { return arriba; }
        int getIzquierda() const { return izquierda; }
        int getAbajo() const { return abajo; }
        int getDerecha() const { return derecha; }

        Punto getArribaIzquierda() const
            { return arribaIzquierda; }
        Punto getAbajoIzquierda() const
            { return abajoIzquierda; }
        Punto getArribaDerecha() const
            { return arribaDerecha; }
        Punto getAbajoDerecha() const
            { return abajoDerecha; }

        void setArribaIzquierda(Punto lugar);
        void setAbajoIzquierda(Punto lugar);
        void setArribaDerecha(Punto lugar);
        void setAbajoDerecha(Punto lugar);
        
        void setArriba(int nuevoArriba);
        void setIzquierda(int nuevoIzquierda);
        void setAbajo(int nuevoAbajo);
        void setDerecha(int nuevoDerecha);

        int getArea() const;
    
    private:

        Punto arribaIzquierda;
        Punto arribaDerecha;
        Punto abajoIzquierda;
        Punto abajoDerecha;

        int arriba;
        int izquierda;
        int abajo;
        int derecha;
};
