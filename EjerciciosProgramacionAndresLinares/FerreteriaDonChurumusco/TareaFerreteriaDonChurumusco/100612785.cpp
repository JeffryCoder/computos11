#include <iostream>
#include <fstream>
#include "esconu.h"
using namespace std;

int main ()
{
    BorraPantalla(); // Limpiador de consola
    char opcionElegida = ' ';

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
            cout << "     Cod.  Articulo                     Marca                      Precio       " << endl;
            cout << "--------------------------------------------------------------------------------" << endl;
            // CONTENIDO
            cout << endl << endl << endl;
                    //1.    Martillo                     Trupper                    240.00
                    //2.    Lámpara Led 8” Techo         General Electric           675.50
                    //        …	                            …                        …	
                    //     …	                            …                        …	
                    //   …	                            …                        …	
                    //25.   Sierra Caladora 3/4          Black & Decker           3,832.00
            // FIN CONTENIDO
            cout << "--------------------------------------------------------------------------------" << endl;
  // Final de lo introducido para leer archivo
            TeclaPresionada("Pulse una tecla para continuar...");
            break;
        case '2':
            BorraPantalla();
            cout << " --- --- --- --- ---" << endl;
            cout << "Agregando articulos..." << endl;
            cout << " --- --- --- --- ---" << endl;
            TeclaPresionada("Pulse una tecla para continuar...");
            break;
        case '3':
            BorraPantalla();
            cout << " --- --- --- --- ---" << endl;
            cout << "Eliminando articulos..." << endl;
            cout << " --- --- --- --- ---" << endl;
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
            cout << "Elia una opcion valida..." << endl;
            cout << " --- --- --- --- ---" << endl;
            TeclaPresionada("Pulse una tecla para continuar...");
            break;
            
        }
    // FINAL FLUJO DE SALIDA

    } while (opcionElegida != '4');

    
    


    return 0;
}