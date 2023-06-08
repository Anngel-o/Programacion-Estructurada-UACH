#include <iostream>
#include <conio.h>
#include <iomanip>

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

int main()
{
  float n = 1;
  int cont = 0;

  while (n != 0)
  {
    cout << "Introduce un numero" << endl;
    cin >> n;
    if (n != 0)
    {
      cont++;
    }
    float mitad = n/2;
    cout << "La mitad es: " << mitad << endl << endl;
  }
  cout << "Solicito un total de: " << cont << " numeros" << endl;

  getch();
  return 0;
}
