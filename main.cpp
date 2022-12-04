//Moisés Jonathan García Zorza. 
//A07094763

#include "iostream"
#include "menuPrincipal.h"
#include "tienda.h"
#include "producto.h"

using namespace std; 

int main(){
	Tienda t;

	MenuPrincipal menu(t);

	while (menu.ultimaSeleccion != 4) {
		menu.mostrarOpciones();
		menu.seleccionarOpcion();
	}

}
