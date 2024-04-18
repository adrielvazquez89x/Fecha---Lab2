#include <iostream>
#include "Fecha.h"

using namespace std;

int main()
{
    Fecha prueba(1,2,2024);
    int dias;
   


   /*
   while (true)
   {
       system("cls");
       prueba.RestarDia();
       cout << prueba.getDia() << "/" << prueba.getMes() << "/" << prueba.getAnio();
       cout << endl << endl;
       system("pause");
   }
   */
   
   cout << "AGREGAR DIAS: ";
   cin >> dias;
   cout << prueba.getDia() << "/" << prueba.getMes() << "/" << prueba.getAnio() << endl;
   prueba.AgregarDias(dias);
   cout << prueba.getDia() << "/" << prueba.getMes() << "/" << prueba.getAnio() << endl;

   cout << "FECHA: " << prueba.toString();

}

