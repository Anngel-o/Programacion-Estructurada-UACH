#include <iostream>
#include <math.h>
#include <conio.h>//No saldrá el texto de "presione tecla para finalizar"

using namespace std;

int main()
{
  float precio_verde = 10;
  float precio_rojo = 5.5;
  float precio_chicharron = 10.5;

  int texto_rojo;
  int texto_verde;
  int texto_chicharron;
  float total;
  int redondeo;

  cout << "BURRITOS EL PROGRAMADOR, BIENVENIDO" << endl;
  cout << "Cuantos burritos de rojo va a llevar?, joven" << endl;
  cin >> texto_rojo;
  cout << "Cuantos burritos de verde va a llevar?, joven" << endl;
  cin >> texto_verde;
  cout << "Cuantos burritos de chicharron va a llevar?, joven" << endl;
  cin >> texto_chicharron;

  total = (texto_rojo * precio_rojo) +
  (texto_verde * precio_verde) +
  (texto_chicharron * precio_chicharron);

  int suma_burros = texto_rojo + texto_verde + texto_chicharron;
  float descuento;

  if (suma_burros > 10 && suma_burros < 20)
  {
    descuento = total * 0.05;
    total = total * 0.95;
    cout << "Le di un descuento del 5% por comprar mas de 10 burritos :) " << endl;
    cout << "Se ahorro " <<descuento << " pesos" <<endl;
  }
  else if(suma_burros > 20)
  {
    descuento = total * 0.10;
    total = total * 0.90;
    cout << "Le di un descuento del 10% por comprar mas de 20 burritos :) " << endl;
    cout << "Se ahorro " <<descuento << " pesos" <<endl;
  }
  else
  {
    total = total;
  }

  cout << "Gusta redondear para la despensa del prgramador foraneo? (1 es si, 2 es no)"  <<endl;
  cin >> redondeo;
  if(redondeo == 1)
  {
    total= ceil(total);
  }

  cout << "Me debe un total de " <<total<< " pesos" <<endl;
  cout << "Gracias por su compra " << endl;

  getch();//se invoca la librería conio.h

  return 0;
}
