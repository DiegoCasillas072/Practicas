#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

enum Columnas{
    INDICE,
    NOMBNRE,
    TIPO,
    ETAPA,
    ANTECESOR,
    ANTECESOR_NO
};

enum TipoPokemon{
    FUEGO,
    AGUA,
    PLANTA,
    ELECTRICIDAD,
    VENENO
};

class Pokemon{
    private:
        string nombre;
        set<TipoPokemon> tipo;
        int nivel;

    public:
        Pokemon(string nombre, set<TipoPokemon> tipo, int nnivel){
            this->nombre = nombre;
            this->tipo = tipo;
            this->nivel = nivel;
        }
        string GetNombre(){
            return this->nombre;
        }

};

int main(int argc, char const *argv[]){

//arreglos clasicos
    string frases[10];
    frases[0] = "frase 1";
    frases[1] = "frase 2";

// vector de libreria estandar
    vector <string> vFrases; // <--- se pueden agregar mas en tiempo de ejecucion
    vFrases.push_back("Primera frase");
    vFrases.push_back("Segunda frase");
    vFrases.push_back("Tercera frase");
    vFrases.push_back("Cuarta frase");

    vector<int> vEnteros; // remplazar tipo entre <> para cambiar el valor del vector
    vEnteros.push_back(3);
    vEnteros.push_back(5);
    vEnteros.push_back(1);
    vEnteros.push_back(9);

    vector<Pokemon> pokedex;
    pokedex.push_back(
        Pokemon(
            "Bulbasaur", {
                TipoPokemon::PLANTA,1,

                TipoPokemon::AGUA,1
            },
        )
    );
   

    fstream pokeCSV("assets/pokedex.csv");
    if(!pokeCSV){
        cerr << "Error leyendo archivo del pokedex"<<endl
        return EXIT_FAILURE;
    }

    string linea;
    while(getline(pokeCSV,linea)){
        stringstream ss(linea);
        cout<< linea <<endl;

        string valor;

        vector<string> fila;
        while(getline(ss,columna,',')){
            fila.push_back(valor);
        }

        Pokemon p(
            columnas.at(Columnas::NOMBRE),
            {TipoPokemon::AGUA}

        );


        pokedex.push_back(p);

        
    }

    cout<<"pokemons cargados al pokedex = "<<pokedex.size()<<endl;

    cout<<"El ppokemon 5 es: "<<pokedex.at(5).GetNombre()<<endl;


    return EXIT_SUCCESS;

}