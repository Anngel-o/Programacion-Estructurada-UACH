#include <iostream>
#include <math.h>
#include <conio.h>

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

int main()
{
  float precio_rojo = 1;
  float precio_verde = 2;
  float precio_chicharron = 3;
  float precio_mole = 4;
  float precio_discada = 5;
  float precio_relleno = 6;

  int texto_rojo;
  int texto_verde;
  int texto_chicharron;
  int texto_mole;
  int texto_discada;
  int texto_relleno;

  float total;
  int redondeo;

  cout << "***** MENU BURRITOS EL PROGRAMADOR FORANEO *****" << endl << endl;
  cout << "Deshebrada Rojo              1 pesos" << endl;
  cout << "Deshebrada Verde             2 pesos" << endl;
  cout << "Chicharron                   3 pesos" << endl;
  cout << "Mole                         4 pesos" << endl;
  cout << "Discada                      5 pesos" << endl;
  cout << "Chile Relleno                6 pesos" << endl << endl;

  cout << "Cuantos burritos de deshebrada rojo va a llevar?, joven: ";
  cin >> texto_rojo;
  cout << "Cuantos burritos de deshebrada verde va a llevar?, joven: ";
  cin >> texto_verde;
  cout << "Cuantos burritos de chicharron va a llevar?, joven: ";
  cin >> texto_chicharron;
  cout << "Cuantos burritos de mole va a llevar?, joven: ";
  cin >> texto_mole;
  cout << "Cuantos burritos de discada va a llevar?, joven: ";
  cin >> texto_discada;
  cout << "Cuantos burritos de chile relleno va a llevar?, joven: ";
  cin >> texto_relleno;
  cout << "" << endl;

  total = (texto_rojo * precio_rojo) +
  (texto_verde * precio_verde) +
  (texto_chicharron * precio_chicharron) +
  (texto_mole * precio_mole) +
  (texto_discada * precio_discada) +
  (texto_relleno * precio_relleno);

  int suma_burros = texto_rojo + texto_verde + texto_chicharron + texto_mole + texto_discada + texto_relleno;
  float descuento;

  cout << "Fueron " << texto_rojo << " burritos de deshebrada rojo" << endl;
  cout << texto_verde << " burritos de deshebrada verde" << endl;
  cout  << texto_chicharron << " burritos de chicharron" << endl;
  cout  << texto_mole << " burritos de mole" << endl;
  cout  << texto_discada << " burritos de discada" << endl;
  cout  << texto_relleno << " burritos de chile relleno" << endl << endl;

  cout << "En total serian " << total << " pesos" << endl;

  if (suma_burros > 10 && suma_burros < 20)
  {
    descuento = total * 0.05;
    total = total * 0.95;
    cout << "Le di un descuento del 5% por comprar mas de 10 burritos :) " << endl;
    cout << "Se ahorro " << descuento << " pesos" << endl;
    cout << "En total serian " << total << " pesos" << endl;
  }
  else if(suma_burros > 20)
  {
    descuento = total * 0.10;
    total = total * 0.90;
    cout << "Le di un descuento del 10% por comprar mas de 20 burritos :) " << endl;
    cout << "Se ahorro " << descuento << " pesos" << endl;
    cout << "En total serian " << total << " pesos" << endl;
  }
  else
  {
    total = total;
  }

  cout << "Gusta redondear para la despensa del programador foraneo? (1 es si, 2 es no)"  << endl;
  cin >> redondeo;
  if(redondeo == 1)
  {
    total = ceil(total);
  }

  cout << "Me debe un total de " << total << " pesos" << endl;
  cout << "Gracias por su compra, pase buen dia :) " << endl;

  getch();
  return 0;
}
