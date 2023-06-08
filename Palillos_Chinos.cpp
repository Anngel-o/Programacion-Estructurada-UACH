#include <iostream>

using namespace std;

#define MIN_PALILLOS 5

void mostrarTituloDelJuego();
void solicitarNumeroDePalillos();
void solicitarNumeroMaximoDePalillosPorTurno();
void turnoDelJugador();
void turnoDeLaComputadora();
void mostrarTotalRestanteDePalillos();
void jugar();
void despedida();
void ppal();

int totalDePalillos;
int maximoDePalillosPorTurno;
int jugada;

int main() {

  mostrarTituloDelJuego();
  ppal();

  // TODO solicitar al jugador que si desea iniciar una nueva partida,
  // si el jugador contesta que si inicia un nueva partida
  // si el jugador contesta que no encontes termina el programa y muestra una despedida

  return 0;
}

void ppal()
{
    char start;
    cout << "Desea iniciar una nueva partida(s/n): ";
    cin >> start;

    if (start == 's')
    {
        solicitarNumeroDePalillos();
        solicitarNumeroMaximoDePalillosPorTurno();
        jugar();
    }
    else
    {
        despedida();
    }
}


void mostrarTituloDelJuego(){
  cout << "********************************************************" << endl;
  cout << "**** YOU HAVE ONE MORE PROGRAM TO SAVE THE SEMESTER ****" << endl;
  cout << "********************************************************" << endl;
  cout << "****             LET THE GAME BEGIN                 ****" << endl;
  cout << "********************************************************" << endl;
  cout << endl;
}

void solicitarNumeroDePalillos(){

    do
    {
        cout << "Ingresa el numero de palillos: ";
        cin >> totalDePalillos;
    } while (totalDePalillos < MIN_PALILLOS);


  /*
  * TODO solicitar el numero de palillos por turno
  * y guardarlo en la variable global totalDePalillos
  *
  * Nota. el numero de palillos debera ser mayor al minimo
  * dado por la constante MIN_PALILLOS
  */

}

void solicitarNumeroMaximoDePalillosPorTurno(){

    do
    {
        cout << "Ingresa el numero maximo de palillos por turno: ";
        cin >> maximoDePalillosPorTurno;
    } while (maximoDePalillosPorTurno <= 1 || maximoDePalillosPorTurno >= totalDePalillos);



  /*
  * TODO solicitar el numero de palillos maximo que podra seleccionar un jugador por turno
  * y guardarlo en la variable global maximoDePalillosPorTurno
  *
  * Nota. el numero de palillos debera estar entre 1 y el totalDePalillos
  */
}

void turnoDelJugador(){

    do
    {
        cout << "Ingresa el numero de palillos a retirar: ";
        cin >> jugada;

    } while (jugada <= 0 || jugada > maximoDePalillosPorTurno);

    totalDePalillos = totalDePalillos - jugada;


  /*
  * TODO solicitar el numero de palillos que desea retirar
  * y guardarlo en la variable global "jugada"
  *
  * Nota. el numero de palillos a retirnar debero ser mayor a cero
  * y menor al maximoDePalillosPorTurno
  */

  // TODO Restar al totalDePalillos el nuero de palillos que retiro el jugador

}

void turnoDeLaComputadora(){

    jugada = totalDePalillos % ( maximoDePalillosPorTurno + 1);

    if (jugada == 0)
    {
        jugada = maximoDePalillosPorTurno;
    }
    else if (jugada > 1)
    {
        jugada = jugada - 1;
    }

    cout << "Palillos retirados por PC: " << jugada << endl;

    totalDePalillos = totalDePalillos - jugada;

  // TODO para calcular el numero de palillos que retirara la computadora es:
  // totalDePalillos % ( maximoDePalillosPorTurno mas 1) y guardarlo en la variable (jugada)


  // TODO si la jugada es igual a cero entonces jugada = maximoDePalillosPorTurno
  // si no y si jugada es mayor a 1 entonces a jugada le restamos 1


  // TODO mostrar cuantos palillos retira la camputadora


  // TODO Restar al totalDePalillos los palillos que retiro la computadora


}

void mostrarTotalRestanteDePalillos(){
    cout << "Total de palillos: " << totalDePalillos << endl;
  //TODO mostrar el restante de palillos totalDePalillos

}

void despedida(){
    system("cls");
    cout << "Gracias por jugar en ***Sistemas Anngelo*** " << endl;
    cout << "Hasta pronto! " << endl;
}

void jugar(){

  mostrarTotalRestanteDePalillos();

  while(totalDePalillos > 1){

    turnoDelJugador();
    mostrarTotalRestanteDePalillos();
    if (totalDePalillos < 1)
    {
        cout << "Jugada incorrecta " << endl;
    }
    else if (totalDePalillos == 1)
    {
        cout << "*** HAS GANADO *** FELICIDADES!!!" << endl;
    }
    else
    {
        turnoDeLaComputadora();
        mostrarTotalRestanteDePalillos();
        if (totalDePalillos == 1)
        {
            cout << "*** HAS PERDIDO :( ) *** SUERTE LA PROXIMA!!!" << endl;
        }
    }

    // TODO validar si hay ganador
    // Si totalDePalillos es igual a 1 entonces mostrar en pantalla que has ganado la partida
    // Si No


    // TODO Validar si la computadora gano la partida
    // si totalDePalillos = 1 entonces mostrar en pantalla que la computadora ha ganado la partida
  }
}
