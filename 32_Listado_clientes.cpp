#include <iostream>
#include <conio.h>
#include <string.h>
#include <fstream> //usar ofstream
#include <windows.h> //usar cls

using namespace std;

struct Customer
{
  char name[20];
  float balance;
  int condition;
};

Customer customers[10];
int countCustomer = 0;

Customer capture()
{
  system("cls");
  Customer customer;
  int conditionC;
  char resp = 's';
  system("cls");
  cout << "Nombre del cliente: ";
  cin >> customer.name;
  cout << "Saldo del cliente: ";
  cin >> customer.balance;
  cout << "Estado del cliente (0 - puntual | 1 - moroso): ";
  cin >> customer.condition;

  return customer;
}

void show()
{
  Customer customer;
  system("cls");

  cout << "<----- LISTA DE CLIENTES ----->" << endl << endl;
  cout << "-------------------------" << endl;
  for (int i = 0; i < countCustomer; i++)
  {
      //cout << "[" << i << "]"<< "Factura Numero: " << facturas[i].numero_factura << endl;
      cout << "Nombre del cliente: ";
      cout << customer.name << endl;
      cout << "Saldo del cliente: ";
      cout << customer.balance << endl;
      cout << "Estado del cliente: ";
      cout << customer.condition << endl;
      cout << "-------------------------" << endl;
  }

  system("pause");
}

void showSlow()
{
  Customer customer;
  system("cls");
  cout << "<----- LISTA DE CLIENTES MOROSOS ----->" << endl << endl;
  for (int i = 0; i < countCustomer; i++)
  {
    if (customer.condition == 1)
    {
      cout << customer.name << endl;
      cout << "-------------------------" << endl;
    }
  }
  system("pause");
}

void showPunctual()
{
  Customer customer;
  system("cls");
  cout << "<----- LISTA DE CLIENTES PUNTUALES ----->" << endl << endl;

  for (int i = 0; i < countCustomer; i++)
  {
    if (customer.condition == 0)
    {
      cout << customer.name << endl;
      cout << "-------------------------" << endl;
    }
  }

  system("pause");
}

void menu ()
{
  cout << "<----- BIENVENIDO A CLIENTES.NET -----> "  << endl << endl;
  cout << "*****  1.Capturar nuevo cliente      ***** " << endl;
  cout << "*****  2.Mostrar lista de clientes   ***** " << endl;
  cout << "*****  3.Mostrar clientes morosos    ***** " << endl;
  cout << "*****  4.Mostrar clientes puntuales  ***** " << endl;
  cout << "*****  5.Salir                       ***** " << endl;
}

void bye()
{
  system("cls");
  cout << "Gracias por usar ***Sistemas Anngelo*** " << endl;
  cout << "Hasta pronto! " << endl;
}


int main()
{
  Customer customer;
  int option;

  do
  {
    system("cls");
    menu();
    cout << "Opcion: ";
    cin >> option;
    switch (option)
    {
      case 1: customer = capture();
      customers[countCustomer] = customer;
      countCustomer ++;
      break;
      case 2: show();
      break;
      case 3: showSlow();
      break;
      case 4: showPunctual();
      break;
    }
  } while(option != 5);

  bye();
  return 0;
}
