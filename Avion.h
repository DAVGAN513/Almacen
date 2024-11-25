#ifndef Avion_h
#define Avion_h
#include "Vehiculo.h"
#include <iostream>
using namespace std;

class Avion:public Vehiculo{
    private:
        float horas_vuelo;
        float capacidad_bodega;
    
    public:
        Avion():Vehiculo(){
            horas_vuelo= 1;
            capacidad_bodega=1;
        }
        Avion(float _horas_vuelo,float _capacidad_bodega,string _numero_serie,float _tiempo_movsinReposo, float _consumo_combustible)
        : Vehiculo( _numero_serie, _tiempo_movsinReposo,  _consumo_combustible){
            horas_vuelo= _horas_vuelo;
            capacidad_bodega= _capacidad_bodega;
        }
        float get_horas_vuelo(){
            return horas_vuelo;
        }
        float get_capacidad_bodega(){
            return capacidad_bodega;
        }
        void set_horas_vuelo(float _horas_vuelo){
            horas_vuelo= _horas_vuelo;
        }
        void set_capacidad_bodega(float _capacidad_bodega){
            capacidad_bodega= _capacidad_bodega;
        }
        void imprime_datos(){
            cout <<"Las horas de vuelo que soporta el avion son: " <<horas_vuelo <<endl;
            cout <<"Espacio disponible de carga es de: " <<capacidad_bodega <<endl;
        }
};
#endif