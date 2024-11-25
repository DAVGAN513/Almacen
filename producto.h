#ifndef Producto_h
#define Producto_h
#include "Camion.h"
#include <iostream>
using namespace std;

class Producto{
    private:
        string product; 
        float cantidad;
        Camion* camion_asociado;

    public:
        Producto(){
            product = "xxxxx";
            cantidad = 1;
            camion_asociado = nullptr; 
        }
        Producto(string _product,float _cantidad,Camion* _camion_asociado){
            product= _product;
            cantidad= _cantidad;
            camion_asociado = _camion_asociado;
        }
        string get_product (){
            return product;
        }
        float get_cantidad (){
            return cantidad;
        }
        Camion* get_camion_asociado(){
             return camion_asociado;
        }

        void set_product (string _product){
            product= _product;
        }
        void set_cantidad (float _cantidad){
             cantidad= _cantidad;
        }
        void set_camion_asociado(Camion* _camion_asociado){
            camion_asociado = _camion_asociado;
        }

        void imprime_datos(){
            cout << "El tipo de producto que ingresa es: " << product << endl;
            cout << "La cantidad del producto es de: " << cantidad << " unidades" << endl;

            if (camion_asociado != nullptr){
               cout << "Camión asociado: " << endl;
               camion_asociado->imprime_datos();  
            } else {
                cout << "No hay camión asociado a este producto." << endl;
            }
        }

};
#endif