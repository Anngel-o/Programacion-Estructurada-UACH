#include <iostream>
#include <conio.h>
#include <iomanip>

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

int main()
{
  cout << "***NUMEROS DEL 0 AL 100***" << endl;
  for (int i = 0; i <= 100; i++)
  {
    cout << i << endl;
  }
  cout << " " << endl;

  cout << "***CUADRADOS DE LOS DIEZ PRIMEROS NUMEROS NATURALES***" << endl;

  for (int i = 1; i <= 10; i++)
  {
    cout << i * i << endl;
  }
  cout << " " << endl;

  cout << "***NUMEROS DE 10 EN 10***" << endl;

  for (int i = 0; i <= 10000; i+=10)
  {
    cout << i << endl;
  }

  getch();
  return 0;
}
