#include <iostream>
#include "tienda.h"
#include "producto.h"

#include <vector>

using namespace std;

Tienda::Tienda()
{
}

void Tienda::verProductos()
{
    cout << endl;
    cout << "Opciones:                        " << endl;
    cout << "-----------------------------" << endl;
    cout << "1. Agua en botellada." << endl;
    cout << "-----------------------------" << endl;
    cout << "2. Bote de palomitas."<< endl;
    cout << "-----------------------------" << endl;
    cout << "3. Ice Cereza."<< endl;
    cout << "-----------------------------" << endl;
}

void Tienda::seleccionarProducto()
{
    cout << endl;
    cout << "Ingrese el numero del producto que desea comprar: " << endl;
    int seleccionDelCliente;
    cin >> seleccionDelCliente;

    string idProducto;
    switch (seleccionDelCliente)
    {
    case 1:
        idProducto = "ID0001";
        break;
    case 2:
        idProducto = "ID0002";
        break;
    case 3:
        idProducto = "ID0003";   
        break;

    default:
        cout << "Producto no existente."<<endl; 
        break;
   
    }
    producto p(idProducto);
    if (p.getStock() > 0)
    {
        this->carrito.agregarProducto(p);
        cout << "Se guardo en el carrito: " << p.getNombre() << endl;
    }
    else
    {
        cout << "Producto agotado." << endl;
    }

}

void Tienda::verCarrito()
{
    cout << endl;
    cout << "Hola buenas terricola" << endl;
    cout << "Este es tu carrito:" << endl;
    cout << "                             " << endl;
    cout << "-----------------------------" << endl;

    for (int i = 0; i < this->carrito.listaProductosSeleccionados().size(); i++)
    {
        producto p = this->carrito.listaProductosSeleccionados()[i];
        cout << "-----------------------------" << endl;
        cout << p.getNombre() << endl;
        cout << "-----------------------------" << endl;
    }
    cout << "-----------------------------" << endl;
    cout << "                             " << endl;
    cout << "-----------------------------" << endl;
    cout << "Total: $"<<this->carrito.getTotal()<< endl;
    cout << "-----------------------------" << endl;
}

void Tienda::terminarCompra()
{
    getTicket();
}

void Tienda::getTicket()
{
    cout << endl;
    cout << "Tu compra fué éxitosa" << endl;
    cout << "Lista de productos comprados:" << endl;
    cout << "                             " << endl;

    for (int i = 0; i < this->carrito.listaProductosSeleccionados().size(); i++)
    {
        producto p = this->carrito.listaProductosSeleccionados()[i];
        cout << "-----------------------------" << endl;
        cout << p.getNombre() << endl;
        cout << "-----------------------------" << endl;
    }
    cout << endl;
    cout << "-----------------------------" << endl;
    cout << "Total: $"<< this->carrito.getTotal() << endl;
    cout << "-----------------------------" << endl;
}
