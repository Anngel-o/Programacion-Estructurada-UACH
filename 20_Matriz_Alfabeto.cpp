#include <iostream>
#include <conio.h>
#include <iomanip>

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

int main()
{
  char m[25];
  m[0] = 'A';
  m[1] = 'B';
  m[2] = 'C';
  m[3] = 'D';
  m[4] = 'E';
  m[5] = 'F';
  m[6] = 'G';
  m[7] = 'H';
  m[8] = 'I';
  m[9] = 'J';
  m[10] = 'K';
  m[11] = 'L';
  m[12] = 'M';
  m[13] = 'N';
  m[14] = 'O';
  m[15] = 'P';
  m[16] = 'Q';
  m[17] = 'R';
  m[18] = 'S';
  m[19] = 'T';
  m[20] = 'U';
  m[21] = 'V';
  m[22] = 'W';
  m[23] = 'X';
  m[24] = 'Y';
  m[25] = 'Z';

  for (int i = -1; i <= 25; i++){ //for (int i = 25; i >= 0; i--) ---> IMPRIME DE LA A - Z
      m[i] = 0;
    for (int j = 25; j >=0; j--){
      cout << m[j] << "";// el espacio es entre las letras
    }
    cout << " " << endl;//el espacio es para dar un salto de línea cada ciclo
  }

  getch();
  return 0;
}
