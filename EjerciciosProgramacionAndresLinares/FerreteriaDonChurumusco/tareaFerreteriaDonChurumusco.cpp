#include <iostream>
#include <fstream>
#include "esconu.h"
using namespace std;

const int MAX = 3; 
//Organizador de articulo
int main ()
{
    BorraPantalla(); // Limpiador de consola
    char opcionElegida = ' ';
<<<<<<< HEAD
    const int MAX = 20;
=======
    char confirmacionDeEliminacion = ' ';
    int CodigoArticuloAEliminar = NULL;
    int contadorDeArticulos = 0;
    string arregloCodigoArticulo[MAX];
    string arregloNombreArticulos[MAX];
    string arregloMarcaArticulo[MAX];
    string arregloPrecioArticulo[MAX];

    
>>>>>>> d25587c7d42f608ec85125927fe2b2d1e60df5e3

    string FilasArregloArticulos[][]
    do {
        BorraPantalla();
        cout << endl; // Salto de linea
        

        // Inicio menu de opciones
        
        cout << " ------------------------------- " << endl;
        cout << " -- Ferreteria Don Churumusco -- " << endl;
        cout << " ------------------------------- " << endl << endl;
        cout << " ------- Menu de opciones ------ " << endl << endl;

        cout << "    1.- Lista articulos" << endl;
        cout << "    2.- Agregar articulos" << endl;
        cout << "    3.- Eliminar articulos" << endl;
        cout << "    ----------------------" << endl;
        cout << "    4.- Salir" << endl << endl;

        cout << "Elija una opcion: ";
        cin >> opcionElegida; 
        cout << endl; // Salto de linea
        //Final menu de opciones
        // INICIO FLUJO DE SALIDA
        switch (opcionElegida)
        {
        case '1':
            BorraPantalla();
            cout << " --- --- --- --- ---" << endl;
            cout << "Listando articulos..." << endl;
            cout << " --- --- --- --- ---" << endl;

            // Inicio de lo introducido para leer archivo
            cout << " Ferreteria Don Churumusco" << endl << endl;
            cout << "Listado de articulos en existencia:" << endl << endl;
            cout << "--------------------------------------------------------------------------------" << endl;
            cout << "Cod.      Articulo                     Marca                      Precio       " << endl;
            cout << "--------------------------------------------------------------------------------" << endl;
            // -------- ------ ----- CONTENIDO ---- ---- ---- /

            // Arreglo para imprimir las posiciones guardadas

            if (contadorDeArticulos != 0)
            {
                for (int i = 0; i < contadorDeArticulos; i++)
                {
                    cout << i + 1 << ".         " << arregloNombreArticulos[i] << "                      " << arregloMarcaArticulo[i] << "                        " << arregloPrecioArticulo[i] << endl;
                }
            }
            else
            {
                cout << "La ferreteria no tiene articulos registrados..." << endl;
            }
            // FIN CONTENIDO
            cout << "--------------------------------------------------------------------------------" << endl;
            // Final de lo introducido para leer archivo

            // Llenador de arreglos           
            TeclaPresionada("Pulse una tecla para continuar...");
            break;
        case '2':
            BorraPantalla();
            
            cout << " Ferreteria Don Churumusco" << endl << endl;
            cout << " --- --- --- --- ---" << endl;
            cout << "Agregando articulos..." << endl;
            cout << " --- --- --- --- ---" << endl;
            cout << "--------------------------------------------------------------------------------" << endl;
            cout << "     Cod.  Articulo                     Marca                      Precio       " << endl;
            cout << "--------------------------------------------------------------------------------" << endl;
            // Imprimir arreglo

            for (int i = 0; i < 1; i++)
            {
                cout << "Ingrese nombre del articulo...: ";
                cin >> arregloNombreArticulos[i + contadorDeArticulos];
                cout << endl;

                cout << "Ingrese la marca del articulo...: ";
                cin >> arregloMarcaArticulo[i + contadorDeArticulos];
                cout << endl;

                cout << "Ingrese el precio del articulo...: ";
                cin >> arregloPrecioArticulo[i + contadorDeArticulos];
                cout << endl;



            }
            contadorDeArticulos = contadorDeArticulos + 1;
            TeclaPresionada("Pulse una tecla para continuar...");
            break;
        case '3':
            BorraPantalla();
            cout << " --- --- --- --- ---" << endl;
            cout << "Eliminando articulos..." << endl;
            cout << " --- --- --- --- ---" << endl;


            cout << "Ingrese el codigo del articulo a eliminar...: ";
            cin >> CodigoArticuloAEliminar;

            // Haciendo compatible para trabajar con indices de arreglos

            if (CodigoArticuloAEliminar > 0)
            {
                CodigoArticuloAEliminar = CodigoArticuloAEliminar - 1;
            }


            cout << "Haz elegido el siguiente articulo para eliminar...: " << endl;
            for (int i = 0; i < 1; i++)
                {
                    cout << CodigoArticuloAEliminar + 1 << ".         " << arregloNombreArticulos[CodigoArticuloAEliminar] << "                      " << arregloMarcaArticulo[CodigoArticuloAEliminar] << "                        " << arregloPrecioArticulo[CodigoArticuloAEliminar] << endl;
                }
            cout << "Pulse (S) para confirmar la eliminacion, o pulse (N), para cancelarla";
            cin >> confirmacionDeEliminacion;

            if (confirmacionDeEliminacion == 'S')
            {
                for 
            }
            else if (confirmacionDeEliminacion == 'N')
            {

            }

            else 
            {
                cout << "Introduzca una opcion valida";
            }


            TeclaPresionada("Pulse una tecla para continuar...");
            break;
        case '4':
            BorraPantalla();
            cout << " --- --- --- --- ---" << endl;
            cout << "Saliendo del programa..." << endl;
            cout << " --- --- --- --- ---" << endl;
            TeclaPresionada("Pulse una tecla para continuar...");
            break;
        default:
            BorraPantalla();
            cout << " --- --- --- --- ---" << endl;
            cout << "Elija una opcion valida..." << endl;
            cout << " --- --- --- --- ---" << endl;
            TeclaPresionada("Pulse una tecla para continuar...");
            break;
            
        }
    // FINAL FLUJO DE SALIDA

    } while (opcionElegida != '4');
    return 0;
}