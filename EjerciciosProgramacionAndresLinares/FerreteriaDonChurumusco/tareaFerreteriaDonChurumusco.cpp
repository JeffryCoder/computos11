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