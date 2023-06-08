#include <iostream>
#include <conio.h>
#include <iomanip>

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

int main()
{
  int maximo;
  int minimo;
  float prom;
  int total;

  cout << "Cuantos numeros desea ingresar" << endl;
  cin >> total;

  int num[total];
  for (int i = 0; i < total; i++)
  {
    cout << "Digite un numero: " << endl;
    cin >> num[i];

    if (i == 0)
    {
      maximo = num[i];
      minimo = num[i];
    }

    if (num[i] > maximo)
    {
      maximo  = num[i];
    }
    if (num[i] < minimo)
    {
      minimo = num[i];
    }

    prom = prom + (num[i]/ total);
  }

  cout << "El numero mayor es: " << maximo << endl;
  cout << "El numero menor es: " << minimo << endl;
  cout << "El promedio es: " << prom << endl;

  getch();
  return 0;
}
