#include <iostream>
#include <vector>
using namespace std;

void imprime(vector<int> v)
{
    for (auto elemento : v)
    {
        cout << elemento << " , ";
    }
    cout << endl;
}

int main()
{
  
    // Operador
    /*
     "." Operador de acceso de una clase a sus funciones
     ":" Operador de referencia 
     "[i]" Operador indice, donde i representa el indice, recuerda los indices inician en cero
    */

    vector<int> v1={ 1,2,3,4,5 };
    cout << "Elementos del vector v1 : "<< v1.size() << endl;
    v1.push_back(6); // ingresa el elmento al final del vector/lista/arreglo
    for (int elemento : v1) 
    {
        cout << elemento << " ,";
    }
    cout << endl;

    for (int i = 0; i < v1.size(); i++) 
    {
        cout << v1[i] << " ,";
    }
    cout << endl;
    // Funciones
    // ASSIGN
    vector<int> v2; //contenedor vacio
    //llenar el vector con 0, cinco veces
    v2.assign(5, 10);
    imprime(v2);
    // uso practica transferir un arreglo con valores 10 posiciones
    vector<int> v3;
    //llenar el vector con el arreglo abajo declarado
    int arreglo[10]{ 45,32,23,79,12,4,67,22,54,10 };
    v3.assign(arreglo, arreglo + 10);
    imprime(v3);
    // vectores
// formato nombre_vector.push_back(elemento_a_añadir);
    vector<int> v4;
    v4.push_back(45);
    v4.push_back(32);
    v4.push_back(23);
    v4.push_back(79);
    v4.push_back(12);
    v4.push_back(4);
    v4.push_back(67);
    v4.push_back(22);
    v4.push_back(54);
    v4.push_back(10);
    imprime(v4);
    v4.pop_back();
    v4.pop_back();
    imprime(v4);

    // Funcion Insert 
    imprime(v3);
    v3.insert(v3.begin() + 7, 33);
    imprime(v3);

    // El mayor de todos
    vector<int> v5{ 34,23,94,53,16,27,5,25,42,82 };
    // por politica voy a tomar el primer elemento mayor o puedo asignar un valor negativo
    int mayor = v5[0];
    for (int i = 1; i < v5.size(); i++) 
    {
        if (mayor < v5[i]) 
        {
            mayor = v5[i];
        }
    }
    cout << "El mayor de v5 es : " << mayor << endl;
    srand(time(0)); // semilla
    vector<int> v6;
    int aleatorio = 0;
    for (int i = 0; i <= 1000; i++) 
    {
        aleatorio = rand() % 501;
        v6.push_back(aleatorio);
    }
    imprime(v6);
}