#include "carrito.h"
#include "producto.h"
#include <vector>


Carrito::Carrito()
{
		//ctor
}

float Carrito::getTotal() {
	// iterate over carrito and sum up the producto->getPrecio()
	// return the sum
	float precio = 0;
	for (int i = 0; i < carrito.size(); i++) {
		producto p = carrito[i];
		precio += p.getPrecio();
	}

	return precio;
}

void Carrito::agregarProducto(producto p) {
	carrito.push_back(p);
}

vector<producto> Carrito::listaProductosSeleccionados() {
	return carrito;
}
