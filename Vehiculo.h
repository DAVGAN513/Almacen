#ifndef Vehiculo_h
#define Vehiculo_h
#include <iostream>
using namespace std;

class Vehiculo{
    protected:
        string numero_serie;
        float tiempo_movsinReposo;
        float consumo_combustible;

    public:
        Vehiculo(){
            numero_serie = "000000";
            tiempo_movsinReposo = 0;
            consumo_combustible = 0;
        }
        Vehiculo (string _numero_serie,float _tiempo_movsinReposo, float _consumo_combustible){
            numero_serie = _numero_serie;
            tiempo_movsinReposo = _tiempo_movsinReposo;
            consumo_combustible = _consumo_combustible;
        }
        string get_numero_serie(){
            return numero_serie;
        }
        float get_tiempo_movsinReposo(){
            return tiempo_movsinReposo;
        }
        float get_consumo_combustible(){
            return consumo_combustible ;
        }

        void set_numero_serie(string _numero_serie){
            numero_serie = _numero_serie;
        }
        void  set_tiempo_movsinReposo(float _tiempo_movsinReposo){
            tiempo_movsinReposo = _tiempo_movsinReposo;
        }
        void set_consumo_combustible(float _consumo_combustible){
            consumo_combustible = _consumo_combustible;
        }
        void imprime_datos(){
            cout <<"El número de serie del vehiculo es: " <<numero_serie <<endl;
            cout <<"Tiempo en movimiento del vehiculo sin reposo es de: " <<tiempo_movsinReposo  <<"horas" <<endl;
            cout <<"Consumo de combustible del vehiculo es de: " <<consumo_combustible <<"litros" <<endl;
        } 

};
#endif