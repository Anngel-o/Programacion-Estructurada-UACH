#include <iostream>
#include <conio.h>
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

Factura facturas[10];
int numero_facturas = 0;
int n;

Factura capturar()
{
  system("cls"); //Limpia la consola

  Factura factura1;
  cout << "<----- Capturar nueva Factura ----->" << endl << endl;
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

  return factura1;
}

Factura editar(Factura factura1)
{
  system("cls"); //Limpia la consola

  cout << "<----- Editar Factura ----->" << endl << endl;

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

  return factura1;
}

void imprimirFactura(Factura factura1)
{
  system("cls"); //Limpia la consola

  cout << "Numero de factura: ";
  cout << factura1.numero_factura;

  cout << "***** DATOS DEL CLIENTE *****" << endl;
  cout << "Nombre del cliente: " << endl;
  cout << factura1.cliente.nombre << endl;
  cout << "Apellido paterno del cliente: " << endl;
  cout << factura1.cliente.apellido_paterno << endl;
  cout << "Apellido materno del cliente: " << endl;
  cout << factura1.cliente.apellido_materno << endl;
  cout << endl;

  cout << "-----HORA-----" << endl;
  cout << "Hora: " << endl;
  cout << factura1.hora.hora << endl;
  cout << "Minutos: " << endl;
  cout << factura1.hora.minuto << endl;
  cout << "Segundos: " << endl;
  cout << factura1.hora.segundo << endl;
  cout << endl;

  cout << "-----FECHA-----" << endl;
  cout << "Dia: (1-7): " << endl;
  cout <<factura1.fecha.dia << endl;
  cout << "Mes (1-12): " << endl;
  cout << factura1.fecha.mes << endl;
  cout << "Anio: " << endl;
  cout << factura1.fecha.anio << endl;
  cout << endl;

  cout << "-----DIRECCION-----" << endl;
  cout << "Calle o Avenida: " << endl;
  cout << factura1.direccion.calle << endl;
  cout << "Numero: " << endl;
  cout << factura1.direccion.numero << endl;
  cout << "Colonia o Fraccionamiento: " << endl;
  cout << factura1.direccion.colonia << endl;
  cout << "Ciudad: " << endl;
  cout << factura1.direccion.ciudad<< endl ;
  //system("pause");
}

void imprimirListaFacturas()
{
    system("cls");
    int n = 0;
    cout << "<----- Lista de Facturas ----->" << endl << endl;
    for (int i = 0; i< numero_facturas; i++)
    {
        cout << "[" << i << "]"<< "Factura Numero: " << facturas[i].numero_factura << endl;
    }
    //system("pause");
}

Factura eliminar(Factura factura1)
{
    system("cls");
    //struct Factura factura1;
    cout << "<----- Eliminar Factura ------>"<< endl << endl;

    system("cls");
    //facturas[factura1.numero_factura] = 0;
    //fill(facturas[factura1.numero_factura = 0]);

    cout << "Se elimino la factura numero: ["<< n << "]" << endl;

    cout << "Numero de Factura: ";
    factura1.numero_factura = 0;
    cout << factura1.numero_factura << endl;

    cout << "***** DATOS DEL CLIENTE *****" << endl;
    cout << "Nombre del cliente: " << endl;
    cout << strncpy(factura1.cliente.nombre, "Sin registro", 20) << endl;
    cout << "Apellido paterno del cliente: " << endl;
    cout << strncpy(factura1.cliente.apellido_paterno, "Sin registro", 20) << endl;
    cout << "Apellido materno del cliente: " << endl;
    cout << strncpy(factura1.cliente.apellido_materno, "Sin registro", 20) << endl;
    cout << endl;

    cout << "-----HORA-----" << endl;
    cout << "Hora: " << endl;
    factura1.hora.hora = 0;
    cout << factura1.hora.hora << endl;
    cout << "Minutos: " << endl;
    factura1.hora.minuto = 0;
    cout << factura1.hora.minuto << endl;
    cout << "Segundos: " << endl;
    factura1.hora.segundo = 0;
    cout << factura1.hora.segundo << endl;
    cout << endl;

    cout << "-----FECHA-----" << endl;
    cout << "Dia: (1-7): " << endl;
    factura1.fecha.dia = 0;
    cout << factura1.fecha.dia<< endl;
    cout << "Mes (1-12): " << endl;
    factura1.fecha.mes = 0;
    cout << factura1.fecha.mes << endl;
    cout << "Anio: " << endl;
    factura1.fecha.anio = 0;
    cout << factura1.fecha.anio << endl;
    cout << endl;

    cout << "-----DIRECCION-----" << endl;
    cout << "Calle o Avenida: " << endl;
    cout << strncpy(factura1.direccion.calle, "Sin registro", 40) << endl;
    cout << "Numero: " << endl;
    factura1.direccion.numero = 0;
    cout << factura1.direccion.numero << endl;
    cout << "Colonia o Fraccionamiento: " << endl;
    cout << strncpy(factura1.direccion.colonia, "Sin registro", 40) << endl;
    cout << "Ciudad: " << endl;
    cout << strncpy(factura1.direccion.ciudad, "Sin registro", 40) << endl;

    return factura1;
}


int menu()
{
  int resp;
  system("cls");
  cout << "<------- BIENVENIDO A SISTEMAS ANNGELO ------->" << endl << endl;
  cout << "***** 1.Capturar Factura *****" << endl;
  cout << "***** 2.Editar Factura   *****" << endl;
  cout << "***** 3.Eliminar Factura *****" << endl;
  cout << "***** 4.Mostrar Lista De Facturas *****" << endl;
  cout << "***** 5.Buscar Factura   *****" << endl;
  cout << "***** 6.Salir            *****" << endl;
  cout << "Opcion: ";
  cin >> resp;
  return resp;
}

void bye()
{
  system("cls");
  cout << "Gracias por usar ***Sistemas Anngelo*** " << endl;
  cout << "Hasta pronto! " << endl;
}

int main()
{
  Factura factura1;
  int op;

  do
  {
    system("cls");
    op = menu();
    switch (op)
    {
      case 1: factura1 = capturar();
        facturas[numero_facturas] = factura1;
        numero_facturas++;
        break;
      case 2:
        imprimirListaFacturas();
        cout << "Seleccione una factura a editar: ";
        cin >> n;
        factura1 = editar(facturas[n]);
        facturas[n] = factura1;
        break;
      case 3:
        imprimirListaFacturas();
        //eliminar(n);
        cout << "Seleccione una factura a eliminar: ";
        cin >> n;
        factura1 = eliminar(facturas[n]);
        facturas[n] = factura1;
      break;
      case 4: imprimirListaFacturas();
        system("pause");
      break;
      case 5:
        imprimirListaFacturas();
        cout << "Seleccione una factura para imprimir: ";
        cin >> n;
        imprimirFactura(facturas[n]);
        system("pause");
      break;
    }
  } while(op != 6);
  bye();
  getch();
  return 0;
}
