#include <iostream>
#include <conio.h>
#include <math.h> //librería con funcones matemáticas
#include <ctype.h>// para usar isalpha e isdigit

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

void Saludo()
{
  cout << "***** SALUDO *****" << endl;
  cout << "Hola aprendiz :)" << endl;
  cout << " " << endl;
}

float Cuadrado(float numero)
{
  return pow(numero, 2);//pow eleva una variable a una potencia, parte de librería math.h
}

void Numeros()
{
  cout << "***** NUMEROS <1 - 100> *****" << endl;
  for (int i = 1; i <= 100; i++)
  {
    cout << i << " ";
  }
  cout << " " << endl;
  cout << " " << endl;
}

float Media(float n, float m)
{
  return ( (n + m) / 2 );
}

void Historia()
{
  char nombre[25];
  char apellido[25];
  char lugar[25];
  cout << "***** HISTORIA NO FAKE *****" << endl;
  cout << "Ingrese un nombre: ";
  cin.getline(nombre, 25, '\n');// para arrays es mejor usar cin.getline
  cout << "Ingrese un apellido: ";
  cin.getline(apellido, 25, '\n');
  cout << "Ingrese un lugar: ";
  cin.getline(lugar, 25, '\n');
  cout << " " << endl;
  cout << "Un dia " << nombre << " fue a " << lugar << " a tirar un free " << endl;
  cout << "Aquella persona de apellido " << apellido << " creia mucho en si" << endl;
  cout << nombre << " gano la copa Venom y queria ser como Messi" << endl;
  cout << "Su sueno se cumplio y fue mas irracional que el numero PI" << endl;
  cout << " " << endl;
}

void NumeroLetra()
{
  int numero;
  cout << "***** NUMEROS A LETRAS *****" << endl;
  cout << "Ingrese un numero entre <1-10>: ";
  cin >> numero;
  if (numero >= 1 && numero <=10)
  {
    switch (numero)
    {
      case 1: cout << "En letras es: UNO" << endl;
      break;
      case 2: cout << "En letras es: DOS" << endl;
      break;
      case 3: cout << "En letras es: TRES" << endl;
      break;
      case 4: cout << "En letras es: CUATRO" << endl;
      break;
      case 5: cout << "En letras es: CINCO" << endl;
      break;
      case 6: cout << "En letras es: SEIS" << endl;
      break;
      case 7: cout << "En letras es: SIETE" << endl;
      break;
      case 8: cout << "En letras es: OCHO" << endl;
      break;
      case 9: cout << "En letras es: NUEVE" << endl;
      break;
      case 10: cout << "En letras es: DIEZ" << endl;
      break;
    }
  }
  else
  {
    cout << "Ingrese un numero entre el 1 y el 10" << endl;
  }
  cout << " " << endl;
}

void Temperatura(float celsius)
{
  char resp;
  cout << "Seleccione f para convertir a Fahrenheit o k para convertir a Kelvin: ";
  cin >> resp;
  if (resp == 'f')
  {
    cout << celsius << " grados Celsius a grados Fahrenheit son: " << ((celsius * 1.8) + 32);
  }
  else if (resp == 'k')
  {
    cout << celsius << " grados Celsius a grados Kelvin son: " << (celsius + 273.15);
  }
  cout << " " << endl << endl;
}

bool ParImpar(int n)
{
  if (n % 2 == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
  cout << " " << endl;
}

void Array()
{
  cout << "***** ARRAY DE NUMEROS <1 - 20> *****" << endl;
  int k[20];
  for (int i = 1; i <= 20; i++)
  {
    k[i] ++;
    cout << i << " ";
  }
  cout << " " << endl;
}

void TablaM(int numero)
{
  for (int i = 1; i <= 10; i++)
  {
    cout << i << " x " << numero << " = " << (numero * i) << endl;
  }
  cout << " " << endl;
}

void Ascendente(int k[], int s)//Selection Sort
{
  for (int i = 0; i < s; i++)
  {
    int minimo = i;
    for (int j = i + 1; j < s; j++)
    {
      if (k[minimo] > k[j])
      {
        minimo = j;
      }
    }
    int temp = k[i];
    k[i] = k[minimo];
    k[minimo] = temp;
  }
}
void Descendiente(int k[], int s)
{
  for (int i = 0; i < s; i++)
  {
    int max = i;
    for (int j = i + 1; j < s; j++)
    {
      if (k[max] < k[j])
      {
        max = j;
      }
    }
    int temp = k[i];
    k[i] = k[max];
    k[max] = temp;
  }
}
void printk(int k[], int s)
{
  for (int i = 0; i < s; i++)
  {
    cout << k[i] << " ";
  }
}

void Caracter(char caracter)
{
  if (isalpha(caracter)) //isalpha detecta si se presiona una letra
  {
    cout << caracter << " es una letra" << endl << endl;
  } else if (isdigit(caracter)) //isdigit detecta si se presiona un numero
  {
    cout << caracter << " es un numero" << endl << endl;
  }
  else
  {
    cout << caracter << " es un caracter especial" << endl << endl;
  }
}

void NumerosRom(int numero)
{
  while (numero >= 1000) { cout << "M"; numero -= 1000;}
  if(numero >= 900) { cout << "CM"; numero -= 900;}
  if(numero >= 500) { cout << "D"; numero -= 500;}
  if(numero >= 400) { cout << "CD"; numero -= 400;}
  while (numero >= 100) { cout << "C"; numero -= 100;}
  if(numero >= 90) { cout << "XC"; numero -= 90;}
  if(numero >= 50) { cout << "L"; numero -= 50;}
  if(numero >= 40) { cout << "XL"; numero -= 40;}
  while (numero >= 10) { cout << "X"; numero -= 10;}
  if(numero >= 9) { cout << "IX"; numero -= 9;}
  if(numero >= 5) { cout << "V"; numero -= 5;}
  if(numero >= 4) { cout << "IV"; numero -= 4;}
  while (numero >= 1) { cout << "I"; numero -= 1;}
}

int main()
{
  float n;
  float m;

  Saludo();
  Historia();

  cout << "***** ELEVAR UN NUMERO AL CUADRADO *****" << endl;
  cout << "Ingrese un numero: ";
  cin >> n;
  cout << "El cuadrado de " << n << " es: " << Cuadrado(n) << endl << endl;

  Numeros();

  cout << "***** MEDIA DE DOS NUMEROS *****" << endl;
  cout << "Ingrese un numero: ";
  cin >> n;
  cout << "Ingrese otro numero: ";
  cin >> m;
  cout << "La media o promedio de " << n << " + " << m << " es: " << Media(n,m) << endl << endl;

  NumeroLetra();

  cout << "***** TEMPERATURA *****" << endl;
  float celsius;
  cout << "Ingrese la temperatura (C): ";
  cin >> celsius;
  Temperatura(celsius);

  cout << "***** PAR O IMPAR *****" << endl;
  cout << "Ingrese un numero: ";
  cin >> n;
  if ( ParImpar(n) )
  {
    cout << n << " Es un numero PAR" << endl;
  }
  else
  {
    cout << n << " Es un numero IMPAR" << endl;
  }
  cout << " " << endl;

  Array();
  cout << " " << endl;

  cout << "***** TABLAS DE MULTIPICAR *****" << endl;
  cout << "Ingrese un numero para calcular sus tablas de multiplicar: ";
  cin >> n;
  TablaM(n);

  cout << "***** ORDENAR NUMEROS *****" << endl;
  int size = 3;
  int k[size];
  cout << "Debe digitar 3 numeros" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << "Ingrese un numero: ";
    cin >> k[i];
  }
  Ascendente(k, size);
  cout << "En forma ascendente: ";
  printk(k, size);
  cout << endl;
  cout << "En forma descendiente: ";
  Descendiente(k, size);
  printk(k, size);
  cout << endl << endl;

  cout << "***** LETRA O NUMERO *****" << endl;
  char tecla;
  cout << "Presione una tecla: ";
  cin >> tecla;
  Caracter(tecla);

  cout << "***** NUMEROS ROMANOS *****" << endl;
  cout << "Ingrese un numero: ";
  cin >> n;
  NumerosRom(n);
  cout << endl;

  getch();
  return 0;
}
