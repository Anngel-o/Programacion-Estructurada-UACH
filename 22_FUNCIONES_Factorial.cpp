#include <iostream>
#include <conio.h>
#include <iomanip>

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

long Factorial(int numero)
{
  int fact = 1;

  for (int i = 1; i <= numero; i++)
  {
    fact *= i;
  }

  return fact;
}

long FactorialRecursivo(int numero)
{
  if (numero == 1)
  {
    return 1;
  }
  else
  {
    return ( numero * FactorialRecursivo(numero-1) );
  }
}

int main()
{
  int n;
  cout << "CALCULAR FACTORIAL" << endl << endl;

  cout << "Introduce un numero de factorial para calcular: ";
  cin >> n;
  cout << "El factorial es: " << Factorial(n) << endl;
  cout << "El factorial con Recursividad es: " << FactorialRecursivo(n) << endl;

  getch();
  return 0;
}
