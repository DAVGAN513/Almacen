#include <iostream>
#include "Producto.h"
#include "Camion.h"
using namespace std;

int main() {
    string numero_serie;
    string ciudad;
    string placa;
    float tiempo_movsinReposo;
    float consumo_combustible;
    int puerta_llegada;

    
    cout << "Ingresa el numero de serie del camion: ";
    cin >> numero_serie;

    

    cout << "La placa del camion: ";
    cin >> placa;

    cout << "Tiempo en movimiento del vehiculo sin reposo es de (horas): ";
    cin >> tiempo_movsinReposo;

    cout << "Consumo de combustible del vehiculo es (litros por hora): ";
    cin >> consumo_combustible;

    cout << "La puerta de llegada del camion es: ";
    cin >> puerta_llegada;

    
    Camion camion(ciudad, puerta_llegada, placa, numero_serie, tiempo_movsinReposo, consumo_combustible);

    
    string product;
    float cantidad;

    cout << "Ingresa el nombre del producto: ";
    cin >> product;

    cout << "Ingresa la cantidad que esta ingresando: ";
    cin >> cantidad;

    
    Producto producto(product, cantidad, &camion);

    
    producto.imprime_datos();

    return 0;
}