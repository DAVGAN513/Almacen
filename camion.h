#ifndef camion_h
#define camion_h
#include <iostream>
using namespace std;

class Camion{
    private:
        string ciudad;
        int puerta;
        string placa;
    public:
        Camion(string _ciudad, string _placa,int _puerta){
            ciudad= _ciudad;
            placa= _placa;
            puerta= _puerta;
        }
        string get_ciudad(){
            return ciudad;
        }
        string get_placa(){
            return placa;
        }
        void set_puerta(int _puerta){
            puerta= _puerta;
        }
        void imprimeDatos(){
            cout <<"La ciudad procedente del camion es: " <<ciudad <<endl;
            cout <<"La placa del camion es: " <<placa <<endl;
            cout <<"Puerta por la que va a ingresar: " <<puerta <<endl;
        }
};
#endif