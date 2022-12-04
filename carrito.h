#ifndef CARRITO_H
#define CARRITO_H

#include "producto.h"
#include <vector>

using namespace std;

class Carrito {
	private:
	  int numeroDeObjetos;
	  string idCompra;
	  vector<producto> carrito;
	public:
		Carrito();
		void agregarProducto(producto p);
		float getTotal();
		vector<producto> listaProductosSeleccionados();
};

#endif
