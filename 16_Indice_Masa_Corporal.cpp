#include <iostream>
#include <conio.h>
#include <iomanip>

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

int main()
{
  float peso;
  float estatura;
  float imc;
  int count_pbajo = 0;
  int count_pideal = 0;
  int count_sobrepeso = 0;
  int count_obesidad = 0;
  int count_obesidadmor = 0;
  char registro = 's';

  cout << "***INDICE DE MASA CORPORAL***" << endl;

  do
  {
    cout << "***Digite su peso (en kg)" << endl;
    cin >> peso;
    cout << "***Digite su estatura (en metros)" << endl;
    cin >> estatura;
    if (peso <= 0 || estatura <= 0)
    {
      cout << "Por favor ingrese los datos correctamente" << endl;
    }

    else
    {
      imc = (peso) / (estatura * estatura);
      cout << "Su Indice de Masa Corporal es: " << imc << endl;

      if (imc <= 20)
      {
        cout << "Peligro, estas bajo de peso" << endl << endl;
        count_pbajo++;
      }
      else if (imc > 20 && imc <= 25)
      {
        cout << "Felicidades estas en tu peso" << endl << endl;
        count_pideal++;
      }
      else if (imc > 25 && imc < 30)
      {
        cout << "Tienes sobrepeso" << endl << endl;
        count_sobrepeso++;
      }
      else if (imc >= 30 && imc < 35)
      {
        cout << "Tienes obesidad" << endl << endl;
        count_obesidad++;
      }
      else if (imc >= 35)
      {
        cout << "Tienes obesidad morbida" << endl << endl;
      }

    }

    cout << "Desea agregar otro registro? (DIGITE 'S' PARA CONFIRMAR)" << endl;
    cin >> registro;

  }
  while (registro == 's');

  cout << "Hubo un total de: " << count_pbajo << " personas con peso bajo" << endl;
  cout << "Hubo un total de: " << count_pideal << " personas con peso ideal" << endl;
  cout << "Hubo un total de: " << count_sobrepeso << " personas con sobre peso" << endl;
  cout << "Hubo un total de: " << count_obesidad << " personas con obesidad" << endl;
  cout << "Hubo un total de: " << count_obesidadmor << " personas con obesidad morbida" << endl;

  getch();
  return 0;
}
