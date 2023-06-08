#include <iostream>
#include <conio.h>

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

int main()
{
  int a;
  int b;
  int suma_usuario;

  cout << "Introduce un numero" << endl;
  cin >> a;

  cout << "Introduce otro numero" << endl;
  cin >> b;

  cout << "Introduce la suma de los numeros" << endl;
  cin >> suma_usuario;

  int suma_numeros = a + b;

  if (suma_numeros == suma_usuario)
  {
    cout << "Tu suma es igual al del programa, bien hecho!" <<endl;
  }
  else
  {
    cout << "Tu suma NO es igual al del programa :(" <<endl;

  }

  getch();
  return 0;
}
