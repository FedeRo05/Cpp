#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class gorra {
    private:
    string marca;
    string equipo;
    bool esPlana;

    public:
    gorra(string _marca, string _equipo, bool _esPlana) {
        marca = _marca;
        equipo = _equipo;
        esPlana = _esPlana;
    };


    // leer los datos privados y guardarlos en el archivo.
    string darMarca() { return marca; }
    string darEquipo() { return equipo; }
    bool darEsPlana() { return esPlana; }

    void mostrarGorra() {
        cout << "Marca : " << marca << " | Equipo : " << equipo << endl;
        cout << " Forma : " << (esPlana ? "Plana" : "Curva") << endl;
    }
};


void guardarEnArchivo(vector<gorra>& lista) {
    ofstream archivo("coleccion.txt");
    for (int i = 0; i < lista.size(); i++) {
        archivo << lista[i].darMarca() << " "
                << lista[i].darEquipo() << " "
                << lista[i].darEsPlana() << endl;
    }
    archivo.close();
}


void cargarDesdeArchivo(vector<gorra>& lista) {
    ifstream archivo("coleccion.txt"); // Abre el archivo coleccion.txt
    string m, e;
    bool p;
    // Crea la "gorra" si estan los 3 elementos
    while (archivo >> m >> e >> p) {
        gorra temp(m, e, p);
        lista.push_back(temp);
    }
    archivo.close();
}

int main() {
    vector<gorra> gorras;

    //  Carga lo que haya guardado apenas inicia el programa
    cargarDesdeArchivo(gorras);

    int opcion;

    do {
        cout << "GESTOR DE GORRAS" << endl;
        cout << "1. Agregar gorra" << endl;
        cout << "2. Ver coleccion" << endl;
        cout << "3. Salir" << endl;
        cin >> opcion;

        if (opcion == 1) {
            string n; string e; int i;

            cout << "Marca : "; getline(cin >> ws, n);
            cout << "Equipo : "; cin >> e;
            cout << "La gorra es plana? (1=si /0=no)"; cin >> i;

            gorra nuevaGorra(n, e, i==1);
            gorras.push_back(nuevaGorra);
        } else if (opcion == 2) {
            cout << "Gorras guardadas" << endl;
            for (int i = 0; i < gorras.size(); i++) {
                gorras[i].mostrarGorra();
            }
        }

    } while (opcion != 3);

    //  guarda todo lo que hay en el vector en el archivo txt
    guardarEnArchivo(gorras);
    cout << "Coleccion guardada en coleccion.txt" << endl;

    return 0;
}