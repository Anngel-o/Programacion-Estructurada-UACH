#include <iostream>
#include <conio.h>
#include <iomanip>

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

void Array(int *k, int longitud) //el arreglo k es un apuntador
{
  for (int i = 0; i < longitud; i++)
  {
    cout << "Introduzca valor del indice " << i << ": ";
    cin >> k[i];
  }
  cout << endl;
}

void printArray(int *k, int longitud)
{
  for (int i = 0; i < longitud; i++)
  {
    cout << "Los valores han sido k[" << i << "] = " << k[i];
    cout << endl;
  }
  cout << endl;
}

void DireccionMemoria(int *k, int longitud)
{
  for (int i = 0; i < longitud; i++)
  {
    cout << "La direccion de memoria de k[" << i << "] es: " << &k[i]; //el & arroja la direccion de memoria
    cout << endl;
  }
  cout << endl;
}

void ValoresArreglos(int *k, int longitud)
{
  cout << "Los valores del arreglo incrementado en 1 son: " << endl;
  for (int i = 0; i < longitud; i++)
  {
    k[i]++;
  }
}

int main()
{
  cout << "PROCEDIMIENTOS" << endl << endl;

  int n;
  cout << "Ingrese la cantidad de numeros: ";
  cin >> n;
  int k[n];
  Array(k, n);
  printArray(k, n);
  DireccionMemoria(k, n);
  ValoresArreglos(k, n);
  printArray(k, n);

  getch();
  return 0;
}
