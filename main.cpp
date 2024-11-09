#include <iostream>
#include "producto.h"
#include "camion.h"
#include "inventario.h"
using namespace std;

int main(){
    cout <<endl;
    Producto producto("Televisiones", 50);
    producto.mostrarDatos();
    cout <<endl;
    Camion camion ("Monterrey", "741-AH-6", 3);
    camion.imprimeDatos();
    cout <<endl;
    Inventario inventario("Telefonos",64,"Durango",38);
    inventario.datos();
    cout <<endl;
    return 0;   
}