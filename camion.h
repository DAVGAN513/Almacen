#ifndef Camion_h
#define Camion_h 
#include "Vehiculo.h"
#include <iostream>
using namespace std; 

class Camion:public Vehiculo{
    private:
        string ciudad;
        int puerta_llegada;
        string placa;
    public:
        Camion():Vehiculo(){
            ciudad= "xxxxx";
            puerta_llegada= 0;
            placa= "xxxxxx";
        }
        Camion(string _ciudad,int _puerta_llegada,string _placa,string _numero_serie,float _tiempo_movsinReposo, float _consumo_combustible)
        :Vehiculo( _numero_serie, _tiempo_movsinReposo,  _consumo_combustible){
            ciudad= _ciudad;
            puerta_llegada= _puerta_llegada;
            placa= _placa;
        }
        string get_ciudad(){
            return ciudad;
        }
        int get_puerta_llegada(){
            return puerta_llegada;
        }
        string get_placa(){
            return placa;
        }

        void set_ciudad(string _ciudad){
            ciudad = _ciudad;
        }
        void set_puerta_llegada(int _puerta_llegada){
            puerta_llegada= _puerta_llegada;
        }
        void set_placa(string _placa){
            placa= _placa;
        }
        
};
#endif