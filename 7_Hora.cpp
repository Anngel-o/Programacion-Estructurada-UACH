#include <iostream>
#include <conio.h>
#include <iomanip>

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

int main()
{
  int h;
  int m;
  int s;

  cout << "Introduce la hora" << endl;
  cin >> h;

  cout << "Introduce los minutos" << endl;
  cin >> m;

  cout << "Introduce los segundos" << endl;
  cin >> s;

  if( (h >= 0 && h <=23) && (m >= 0 && m <= 59) && (s>= 0 && s<= 59) )
  {
    cout << "La hora es: ";
    cout << setfill('0') << setw(2); //Formatea a formato de hora 00:00:00
    cout << h;
    cout << ":";
    cout << setfill('0') << setw(2);
    cout << m;
    cout << ":";
    cout << setfill('0') << setw(2);
    cout << s;
  }
  else
  {
    cout<< "Introduce la hora en el formato correspondiente" << endl;
  }

  getch();
  return 0;
}
