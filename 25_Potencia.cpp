#include <iostream>
#include <conio.h>
#include <iomanip>

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

int Potencia(int n, int m)
{
  if (m == 0)
  {
    return 1;
  }
  else
  {
    return n * Potencia(n, m-1);
  }
}

int main()
{
  int n;
  int p;

  cout << "CALCULO DE POTENCIA CON RECURSIVIDAD" << endl << endl;

  cout << "Introduce un numero: ";
  cin >> n;
  cout << "Escriba su potencia: ";
  cin >> p;

  cout<< "Resultado: " << Potencia(n,p);

  getch();
  return 0;
}
