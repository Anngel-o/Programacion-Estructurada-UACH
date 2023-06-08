#include <iostream>
#include <conio.h>
#include <iomanip>

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

int main()
{
  int i = 0;
  int countpar;
  int countimpar;
  int n1;
  int n2;

  while (i <= 100)
  {
    cout << i << endl;
    i++;

    if (i % 2 == 0)
    {
      cout << "Par ";
      countpar++;
    }

    else
    {
      cout << "Impar ";
      countimpar++;
    }

  }
  cout << "Hay un total de " << countimpar << " numeros impares" << endl << endl;

  //NUMEROS DE POR MEDIO

  cout << "Ingresa dos numeros" << endl;
  cin >> n1 >> n2;

  int minimo;
  int cont = 0;

  if (n1 == n2)
  {
    cout << "***Numeros iguales***, por favor ingresa numeros distintos" << endl;
  }
  else if(n1 > n2)
  {
    minimo = n1;
    n1 = n2;
    n2 = minimo; //cambiamos variables para que n1 siempre sea el valor más pequeño
    //n2 siempre es el valor más grande
  }
  cout << " " << endl;
  while (n1 < n2)
  {
    cout << n1 << endl;
    cont++;
    n1++;
  }
  cout << "Hay un total de " << cont << " numeros de por medio" << endl << endl;

  //TABLAS DE MULTIPLICAR

  int numero_tabla;
  int intervalo = 0;

  cout << "Ingresa un numero" << endl;
  cin >> numero_tabla;

  while (intervalo < 10)
  {
    intervalo++;
    cout << numero_tabla << " x " << intervalo << " = " << numero_tabla * intervalo << endl;
  }

  getch();
  return 0;
}
