#include <iostream>
#include <conio.h>
#include <iomanip>

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

int Producto(int n, int m)
{
  if (m == 1)
  {
    return n;
  }
  else
  {
    return n + Producto(n, m-1);
  }
}

int main()
{
  int n1;
  int n2;

  cout << "PRODUCTO DE DOS NUMEROS" << endl << endl;

  cout << "Escriba el primer numero: ";
  cin >> n1;
  cout << "Escriba el segundo numero: ";
  cin >> n2;

  cout<< "Resultado: " << Producto(n1,n2);

  getch();
  return 0;
}
