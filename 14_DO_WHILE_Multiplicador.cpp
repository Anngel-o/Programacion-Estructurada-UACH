#include <iostream>
#include <conio.h>
#include <iomanip>

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

int main()
{
  int n1;
  int n2;
  int multi;
  char resp = 's';

  do
  {
    cout << "Introduce dos numeros entre el 10 y 20" << endl;
    cin >> n1 >> n2;
    if ( (n1 >= 10 && n1 <= 20) && (n2 >= 10 && n2 <= 20) )
    {
      multi = n1 * n2;
      cout << "Su multiplicacion es: " << multi << endl;
    }
    else
    {
      cout << "***AVISO*** Por favor ingresa dos numeros comprendidos entre el 10 y el 20" << endl;
    }

    cout << "Desea ingresar nuevos numeros?" << endl;
    cin >> resp;

  }
  while(resp == 's');

  getch();
  return 0;
}
