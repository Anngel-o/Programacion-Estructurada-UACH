#include <iostream>
#include <string.h>
#include <fstream> //usar ofstream
#include <windows.h> //usar cls

//JOSE ANGEL ORTIZ MERAZ  353195

using namespace std;

struct Direccion
{
  char calle[40];
  int numero;
  char colonia[40];
  char ciudad[40];
};

struct Fecha
{
  int dia;
  int mes;
  int anio;
};

struct Hora
{
  int hora;
  int minuto;
  int segundo;
};

struct Cliente
{
  char nombre[20];
  char apellido_paterno[20];
  char apellido_materno[20];
};

struct Factura
{
  struct Direccion direccion;
  struct Cliente cliente;
  struct Fecha fecha;
  struct Hora hora;
  int numero_factura;
};

int menu()
{
  int resp;
  system("cls");
  cout << "<------- BIENVENIDO A SISTEMAS ANNGELO ------->" << endl << endl;
  cout << "***** 1.Capturar Factura *****" << endl;
  cout << "***** 2.Editar Factura   *****" << endl;
  cout << "***** 3.Eliminar Factura *****" << endl;
  cout << "***** 4.Mostrar Facturas *****" << endl;
  cout << "***** 5.Buscar Factura   *****" << endl;
  cout << "***** 6.Salir            *****" << endl;
  cout << "Opcion: ";
  cin >> resp;
  return resp;
}

void agregar(ofstream &es)
{
  system("cls"); //Limpia la consola
  es.open("29_Facturas.txt", ios::out | ios::app);

  struct Factura factura1;
  cout << "Ingrese el numero de factura: ";
  cin >> factura1.numero_factura;

  cout << "***** DATOS DEL CLIENTE *****" << endl;
  cout << "Nombre del cliente: ";
  cin >> factura1.cliente.nombre;
  cout << "Apellido paterno del cliente: ";
  cin >> factura1.cliente.apellido_paterno;
  cout << "Apellido materno del cliente: ";
  cin >> factura1.cliente.apellido_materno;
  cout << endl;

  cout << "-----HORA-----" << endl;
  cout << "Ingrese la hora (solo la hora, sin minutos, ni segundos): ";
  cin >> factura1.hora.hora;
  cout << "Ingrese los minutos: ";
  cin >> factura1.hora.minuto;
  cout << "Ingrese los segundos: ";
  cin >> factura1.hora.segundo;
  cout << endl;

  cout << "-----FECHA-----" << endl;
  cout << "Ingrese el dia: (1-7): ";
  cin >> factura1.fecha.dia;
  cout << "Ingrese el mes (1-12): ";
  cin >> factura1.fecha.mes;
  cout << "Ingrese el anio: ";
  cin >> factura1.fecha.anio;
  cout << endl;

  cout << "-----DIRECCION-----" << endl;
  cout << "Calle o Avenida: ";
  cin >> factura1.direccion.calle;
  cout << "Numero: ";
  cin >> factura1.direccion.numero;
  cout << "Colonia o Fraccionamiento: ";
  cin >> factura1.direccion.colonia;
  cout << "Ciudad: ";
  cin >> factura1.direccion.ciudad;

  es << factura1.numero_factura << " " << factura1.cliente.nombre << " " << factura1.cliente.apellido_paterno << " " << factura1.cliente.apellido_materno << " "
  << factura1.hora.hora << ":" << factura1.hora.minuto << ":" << factura1.hora.segundo << " " << factura1.fecha.dia << "/" << factura1.fecha.mes << "/"
  << factura1.fecha.anio << " " << factura1.direccion.calle << "," << factura1.direccion.numero << "," << factura1.direccion.colonia << "," << factura1.direccion.ciudad << "." << "\n";

  es.close();
}

void mostrar(ifstream &Lec)
{
  system("cls");
  struct Factura factura1;
  Lec.open("29_Facturas.txt", ios::in);
  if (Lec.is_open())
  {
    cout << "----- FACTURAS REGISTRADAS -----" << endl << endl;
    Lec >> factura1.numero_factura;

    while (!Lec.eof()) //ejecutar hasta llegar al final del archivo
    {
      Lec >> factura1.cliente.nombre;
      Lec >> factura1.cliente.apellido_paterno;
      cout << "Nombre del Cliente: " << factura1.cliente.nombre << endl;
      cout << "Apellido paterno del ciente: " << factura1.cliente.apellido_paterno << endl;
      cout << "Numero de Factura: " << factura1.numero_factura << endl;
      cout << "------------" << endl;
      Lec >> factura1.numero_factura;
    }
    Lec.close();
  }
  else
  {
    cout << "Error al abrir archivo" << endl;
  }
  system("pause");
}


void buscar(ifstream &Lec)
{
   system("cls");
   Lec.open("29_Facturas.txt", ios::in);
   struct Factura factura1;
   int n_fact;
   bool encontrado = false;

   cout << "----- BUSCAR REGISTROS -----" << endl << endl;
   cout << "Ingrese el numero de factura: ";
   cin >> n_fact;

   Lec >> factura1.numero_factura;

   while (!Lec.eof() && !encontrado)
   {
     Lec >> factura1.numero_factura;
     Lec >> factura1.cliente.nombre;
     Lec >> factura1.cliente.apellido_paterno;
     Lec >> factura1.cliente.apellido_materno;
     Lec >> factura1.hora.hora;
     Lec >> factura1.hora.minuto;
     Lec >> factura1.hora.segundo;
     Lec >> factura1.fecha.dia;
     Lec >> factura1.fecha.mes;
     Lec >> factura1.fecha.anio;
     Lec >> factura1.direccion.calle;
     Lec >> factura1.direccion.numero;
     Lec >> factura1.direccion.colonia;
     Lec >> factura1.direccion.ciudad;

     if (factura1.numero_factura == n_fact)
     {
       cout << factura1.numero_factura << endl;
       cout << factura1.cliente.nombre << " " << factura1.cliente.apellido_paterno << " " << factura1.cliente.apellido_materno << endl;
       cout << factura1.hora.hora << ":" << factura1.hora.minuto << ":" << factura1.hora.segundo << endl;
       cout << factura1.fecha.dia << "/" << factura1.fecha.mes << "/" << factura1.fecha.anio << endl;
       cout << factura1.direccion.calle << "," << factura1.direccion.numero << "," << factura1.direccion.colonia << "," << factura1.direccion.ciudad << endl << endl;
       encontrado = true;
     }
     Lec >> factura1.numero_factura;
   }
   Lec.close();
   if (!encontrado)
   {
     cout << "No se encontro el registro" << endl;
   }
   system("pause");
}

void modificar(ifstream &Lec)
{
  system("cls");
  struct Factura factura1;
  int nombre;
  string apellidop;
  string apellidom;
  int num_fact;
  Lec.open("29_Facturas.txt", ios::in);
  ofstream aux("auxiliar.txt", ios::out);//escribir en el
  if (Lec.is_open())
  {
    cout << "Numero de factura ";
    cin >> num_fact;
    Lec >> factura1.numero_factura;
    while (!Lec.eof())
    {
      Lec >> factura1.cliente.nombre;
      Lec >> factura1.cliente.apellido_paterno;
      Lec >> factura1.cliente.apellido_materno;
      if (factura1.numero_factura == num_fact)
      {
        cout << "Ingrese el nuevo nombre: ";
        cin >> nombre;
        aux << nombre << " " << factura1.cliente.apellido_paterno << " " << factura1.cliente.apellido_materno << "\n";
      }
      else
      {
        aux << factura1.cliente.nombre << " " << factura1.cliente.apellido_paterno << " " << factura1.cliente.apellido_materno << "\n";
      }
      Lec >> factura1.numero_factura;
    }
    Lec.close();
    aux.close();
  }
  else
  {
    cout << "Error " << endl;
  }
  remove("29_Facturas.txt");
  rename("auxiliar.txt", "29_Facturas.txt");
}

void eliminar(ifstream &Lec)
{
  system("cls");
  struct Factura factura1;
  int nombre;
  string apellidop;
  string apellidom;
  int num_fact;
  Lec.open("29_Facturas.txt", ios::in);
  ofstream aux("auxiliar.txt", ios::out);//escribir en el
  if (Lec.is_open())
  {
    cout << "Numero de factura ";
    cin >> num_fact;
    Lec >> factura1.numero_factura;
    while (!Lec.eof())
    {
      Lec >> factura1.cliente.nombre;
      Lec >> factura1.cliente.apellido_paterno;
      Lec >> factura1.cliente.apellido_materno;
      if (factura1.numero_factura == num_fact)
      {
        cout << "*** ELIMINADO CORRECTAMENTE ***";
        Sleep(1500);
      }
      else
      {
        aux << factura1.cliente.nombre << " " << factura1.cliente.apellido_paterno << " " << factura1.cliente.apellido_materno << "\n";
      }
      Lec >> factura1.numero_factura;
    }
    Lec.close();
    aux.close();
  }
  else
  {
    cout << "Error " << endl;
  }
  remove("29_Facturas.txt");
  rename("auxiliar.txt", "29_Facturas.txt");
}

void bye()
{
  system("cls");
  cout << "Gracias por usar ***Sistemas Anngelo*** " << endl;
  cout << "Hasta pronto! " << endl;
}

int main()
{
  ofstream Esc;
  ifstream Lec;
  int op;
  do
  {
    system("cls");
    op = menu();
    switch (op)
    {
      case 1: agregar(Esc);
      break;
      case 2: modificar(Lec);
      break;
      case 3: eliminar(Lec);
      break;
      case 4: mostrar(Lec);
      break;
      case 5: buscar(Lec);
      break;
    }
  } while(op != 6);

  bye();
  getch();
  return 0;
}
