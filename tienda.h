#ifndef TIENDA_H
#define TIENDA_H

#include "carrito.h"

class Tienda
{
private:
    Carrito carrito;
public:
    Tienda();
    void verProductos();
    void seleccionarProducto();
    void verCarrito();
    void terminarCompra();
    void getTicket();
};
#endif
