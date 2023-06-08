#include <iostream>
#include <conio.h>
#include <iomanip>

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

int main()
{
  int n, punt;

  cout << "***TRIANGULO DE PUNTOS***" << endl;

  cout << "Ingrese el tamano del triangulo " << endl;
  cin >> n;

  for (int ren = 1; ren <= n; ren++) //Ciclo para dar saltos de renglones y modificar la variable punt (puntos)
  {
    for (int i = 1; i <= punt; i++) //Imprime los puntos en cada renglón
    {
      cout << ".";
    }
    cout << " " << endl;
    punt = punt + 1;
  }

  for (int ren = 1; ren <= n; ren++)
  {
    for (int i = 1; i <= punt; i++)
    {
      cout << ".";
    }
    cout << " " << endl;
    punt = punt - 1;
  }

  getch();
  return 0;
}
