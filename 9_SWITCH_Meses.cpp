#include <iostream>
#include <stdlib.h>
#include <conio.h>

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

int main()
{
  int numero;
  cout << "Escribe un numero" << endl;
  cin >> numero;

  switch (numero)
  {
    case 1: cout << "Corresponde al mes de enero" << endl;
    break;
    case 2: cout << "Corresponde al mes de febrero" << endl;
    break;
    case 3: cout << "Corresponde al mes de marzo" << endl;
    break;
    case 4: cout << "Corresponde al mes de abril" << endl;
    break;
    case 5: cout << "Corresponde al mes de mayo" << endl;
    break;
    case 6: cout << "Corresponde al mes de junio" << endl;
    break;
    case 7: cout << "Corresponde al mes de julio" << endl;
    break;
    case 8: cout << "Corresponde al mes de agosto" << endl;
    break;
    case 9: cout << "Corresponde al mes de septiembre" << endl;
    break;
    case 10: cout << "Corresponde al mes de octubre" << endl;
    break;
    case 11: cout << "Corresponde al mes de noviembre" << endl;
    break;
    case 12: cout << "Corresponde al mes de diciembre" << endl;
    break;

    default: cout << "Solo tenemos 12 meses en el calendario, ingresa un numero del 1 al 12 :)" << endl;
    break;
  }

  getch();
  return 0;
}
