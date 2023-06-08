#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  int n;
  cout << "Introduce un numero" << endl;
  cin >> n;

  if(n%2 ==0)
  {
    cout << n << " es un numero par" << endl;
  }
  else
  {
    cout << n << " es un numero impar" << endl;
  }

  getch();
  return 0;
}
