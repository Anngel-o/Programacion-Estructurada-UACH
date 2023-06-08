#include <iostream>
#include <conio.h>

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

int main()
{
  char vocal;

  cout << "Ingresa una vocal en minuscula" << endl;
  cin >> vocal;

  switch (vocal)
  {
    case 'a' : cout << "En mayuscula es: " << "A" << endl;
    break;
    case 'e' : cout << "En mayuscula es: " << "E" << endl;
    break;
    case 'i' : cout << "En mayuscula es: " << "I" << endl;
    break;
    case 'o' : cout << "En mayuscula es: " << "O" << endl;
    break;
    case 'u' : cout << "En mayuscula es: " << "U" << endl;
    break;
    default : cout << "ERROR: " << vocal << " No es una vocal minuscula"<< endl;
    break;
  }

  getch();
  return 0;
}
