#ifndef producto_h
#define  producto_h
#include <iostream>
using namespace std;

class Producto{
    private:
        string producto; 
        int cantidad;
    public:
        Producto(string _producto,int _cantidad){
            producto= _producto;
            cantidad= _cantidad;
        }
        string get_producto(){
            return producto;
        }

        void set_cantidad (int _cantidad){
            cantidad= _cantidad;
        } 
        void mostrarDatos(){
            cout <<"El tipo de producto que ingreso son: " <<producto <<endl;
            cout <<"La cantidad de cajas que ingresaron fueron: " <<cantidad <<endl;
        }
};
#endif