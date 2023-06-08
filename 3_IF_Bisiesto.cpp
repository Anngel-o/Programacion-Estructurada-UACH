#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
  int a;
  cout << "Introduce un año" << endl;
  cin >> a;

  if(a%4 ==0 && (a%100!=0 || a%400==0))
  {
    cout << a << " es bisiesto" << endl;
  }
  else
  {
    cout << a << " no es bisiesto" << endl;
  }

  getch();
  return 0;
}
