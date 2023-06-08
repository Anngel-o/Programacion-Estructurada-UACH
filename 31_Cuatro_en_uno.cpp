#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdio.h>
#include <math.h>

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

struct Seasons
{
  char primavera[20];
  char verano[20];
  char otono[20];
  char invierno[20];
};

struct Matter
{
  float note;
  char name[20];
};

struct Home
{
  char street[40];
  int number;
  char colony[40];
  char city[40];
};

struct Student
{
  char name[20];
  int age;
  struct Home home;
  struct Matter matter;
};

struct Date
{
  int day;
  int month;
  int year;
};

void knowSeasons()
{
  system("cls");
  cout << "<----- Estaciones del anio ----->" << endl;
  cout << "*** primavera ***" << endl;
  cout << "*** verano    ***" << endl;
  cout << "*** otono     ***" << endl;
  cout << "*** invierno  ***" << endl;
  cout << "Introduce una estacion del anio: " << endl;
  system("pause");
}

int n;

void readStudent()
{
  Student student;

  system("cls");
  cout << "<----- Calcular notas de alumno ----->" << endl << endl;
  cout << "Introduce el nombre del alumno: ";
  cin >> student.name;
  cout << "Introduce la edad del alumno: ";
  cin >> student.age;
  cout << "DOMICILIO DEL ALUMNO " << endl;
  cout << "Introduce la calle o avenida: ";
  cin >> student.home.street;
  cout << "Introduce el numero de casa: ";
  cin >> student.home.number;
  cout << "Introduce la colonia: ";
  cin >> student.home.colony;
  cout << "Introduce la ciudad: ";
  cin >> student.home.street;
  cout << "Introduce el numero de materias a evaluar: ";
  cin >> n;
  for (int i = 0; i < n; ++i)
  {
      cout << "Introduce el nombre de la materia " << i + 1 << " :";
      cin >> student.matter.name;
      cout << "Introduce la calificacion de " << student.matter.name << " :";
      cin >> student.matter.note;
  }

  system("cls");
  cout << "Se guardo correctamente a " << student.name << endl;
  cout << "Edad: ";
  cout << student.age;
  cout << endl;
  cout << "DOMICILIO DEL ALUMNO " << endl;
  cout << "Calle o avenida: ";
  cout << student.home.street;
  cout << endl;
  cout << "Numero de casa: ";
  cout << student.home.number;
  cout << endl;
  cout << "Colonia: ";
  cout << student.home.colony;
  cout << endl;
  cout << "Ciudad: ";
  cout << student.home.street;
  cout << endl;
  for (int i = 0; i < n; ++i)
  {
      cout << "Nombre de la materia " << i + 1 << " :";
      cout << student.matter.name;
      cout << endl;
      cout << "Calificacion de " << student.matter.name << " :";
      cout << student.matter.note;
  }
  system("pause");
}

void requestDates()
{
    system("cls");
    cout << "<----- Calcular dias entre dos fechas ----->" << endl << endl;
    Date date1;
    Date date2;
    cout << "Ingrese la primera fecha en el siguiente formato: " << endl;
    cout << "dd:";
    cin >> date1.day;
    cout << "mm:";
    cin >> date1.month;
    cout << "yy:";
    cin >> date1.year;

    cout << "Ingrese la segunda fecha en el siguiente formato: " << endl;
    cout << "dd:";
    cin >> date2.day;
    cout << "mm:";
    cin >> date2.month;
    cout << "yy:";
    cin >> date2.year;
    //calcDate(date1, date2);
    
}


void menu()
{
  cout << "<----- MENU DE OPCIONES ----->" << endl << endl;
  cout << "*** 1.Estaciones        ***" << endl;
  cout << "*** 2.Notas de alumno   ***" << endl;
  cout << "*** 3.Dias entre fechas ***" << endl;
  cout << "*** 4.Salir             ***" << endl;
}

void bye()
{
  system("cls");
  cout << "Gracias por usar ***Sistemas Anngelo*** " << endl;
  cout << "Hasta pronto! " << endl;
}


int main()
{
  int option;

  do
  {
    system("cls");
    menu();
    cout << "Opcion: ";
    cin >> option;
    switch (option)
    {
    case 1: knowSeasons();
    break;
    case 2: readStudent();
    break;
    case 3: requestDates();
    break;
    }
  } while(option != 4);

  bye();
  return 0;
}
