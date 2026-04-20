#include <iostream>
#include <vector>
using namespace std;

int main() 
{
   int cantidad;
   cout << "Cuantas calificaciones quiere promediar? " << endl;
   cin >> cantidad;
   vector<float> calificaciones;
   float suma = 0;
   for (int i = 0; i < cantidad; i++) {
        float nota;
        cout << "ingrese la calificacion" << i + 1 << " :";
        cin >> nota;
        calificaciones.push_back(nota);
        suma += nota;
   }
      float promedio = suma / cantidad;
      
      if (promedio < 6){
      cout << " el grupo reprobo con una calificacion de : " << promedio << endl;}
      else{
        cout << " el grupo reprobo con una calificacion de : " << promedio << endl;}
      
    }
