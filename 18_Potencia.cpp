#include <iostream>
#include <conio.h>
#include <iomanip>

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

int main()
{
  int n;
  float res;
  float total;

  cout << "CALCULAR POTENCIA" << endl << endl;

  cout << "Introduce un numero para calcular" << endl;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    float n1 = (i + 1);
    float n2 = 2 * (i + 1);
    res = (n1/n2);
    total += res;
    //Es igual que total = total + res;
  }

  cout << "Resultado: " << total << endl;

  getch();
  return 0;
}
