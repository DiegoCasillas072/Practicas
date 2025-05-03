#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
    ifstream archivoEntrada;
    ofstream archivoSalida;



    //abrir archivo de salida
    archivoSalida.open("archivo_salida.txt");
    if (!archivoSalida){
        cerr << "Error al abrir un archivo de salida." << endl;
        return 1;
    }
    //Escribir archivo de salida
    archivoSalida <<"Hola este es un archivo de salida." <<endl;
    
    //Cerrar el archivo de salida 
    archivoSalida.close();




    ifstream archivoEntrada;
    string linea;
    //abrir el archivo de entrada
    if (!archivoEntrada){
        cerr << "Error al abrir un archivo de entrada." << endl;
        return 1;
    }
    //leer un archivo de entrada
    while(getline(archivoEntrada, linea)) {
        cout << linea << endl;

    }
    //cerrar archivo de entrada
    archivoEntrada.close();

    return 0;
}