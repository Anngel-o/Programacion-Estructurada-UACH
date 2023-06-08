#include <iostream>
#include <conio.h>
#include <iomanip>

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

int Fibonacci(int numero)
{
  if (numero == 0 || numero == 1)
  {
    return numero;
  }
  else
  {
    return ( Fibonacci(numero-1) + Fibonacci(numero-2) );
  }
}

int main()
{
  int n ;
  cout << "SERIE FIBONACCI" << endl << endl;

  cout << "Introduce un numero para calcular la serie de Fibonacci: ";
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cout << Fibonacci(i) << " ";
  }

  getch();
  return 0;
}
