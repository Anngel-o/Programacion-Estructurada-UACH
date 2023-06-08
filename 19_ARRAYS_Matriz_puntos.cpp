#include <iostream>
#include <conio.h>
#include <iomanip>

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

int main()
{
  char m[10][10];
  cout << "***MATRIZ DE PUNTOS***" << endl;
  for ( int i = 0; i < 10; i++ ){
    for (int j = 0; j < 10; j++ ){
      m[i][j] = '.';
    }
  }
  for ( int i = 0; i < 10; i++ ){
    for (int j = 0; j < 10; j++ ){
      cout << m[i][j];
    }
    cout << " " << endl;
  }

  getch();
  return 0;
}
