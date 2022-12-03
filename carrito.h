#ifndef CARRITO_H
#define CARRITO_H

#include "producto.h"
#include <vector>

class Carrito {
	private:
	 int numeroDeObjetos;
	 string idCompra;
	 vector<producto> carrito;
	public:
		Carrito();
		void getTotal(producto p);
		vector<producto> listaProductosSeleccionados();
};

#endif


