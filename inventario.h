#ifndef inventario_h
#define inventario_h
#include <iostream>
using namespace std;

class Inventario{
    private:
        string producto;
        int cantidad;
        string destino;
        int cantidadFinal;
    public:
        Inventario(string _producto,int _cantidad,string _destino,int _cantidadFinal){
            producto= _producto;
            cantidad= _cantidad;
            destino= _destino;
            cantidadFinal= _cantidadFinal;
        }
        string get_producto(){
            return producto;
        }
        void set_cantidad(int _cantidad){
            cantidad= _cantidad;
        }
        string get_destino(){
            return destino;
        }
        void set_cantidadFinal(int _cantidadFinal){
            cantidadFinal= _cantidadFinal;
        }
        void datos(){
            cout <<"El producto que salio fueron: " <<producto <<endl;
            cout <<"Las cantidad (cajas) que salieron fueron: " <<cantidad <<endl;
            cout <<"El destino de la entrega es: " <<destino <<endl;
            cout <<"El total restante de productos en alamcen es de: " <<cantidadFinal <<endl;
        }

};






#endif