#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H
#include "tienda.h"

class MenuPrincipal {
		private:
			Tienda t;
		public:
			int ultimaSeleccion;
			MenuPrincipal(Tienda tienda);
			void mostrarOpciones();
			void seleccionarOpcion(); 
			void salir();
};

#endif
