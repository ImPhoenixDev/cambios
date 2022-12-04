#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

using namespace std;

class producto 
{
	private:
		string id;
		string descripcion;
		float precio;
		int stock;
	public:
		producto(string id);
		int getStock();
		float getPrecio();
		string getNombre();
};

#endif
