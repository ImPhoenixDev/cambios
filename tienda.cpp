#include <iostream>
#include "tienda.h"
#include "producto.h"

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
    cout << "Se guardo en el carrito: " << p.getNombre() << endl;
    }
    else
    {
        cout << "Producto agotado." << endl;
    }
    p.getStock();

}

void Tienda::verCarrito()
{

    cout << endl;
    cout << "Hola buenas terricola" << endl;
    cout << "Este es tu carrito:" << endl;
    cout << "                             " << endl;
    cout << "-----------------------------" << endl;
    cout << "---------Productos-----------" << endl;
    cout << "-----------------------------" << endl;
    cout << "                             " << endl;
    cout << "-----------------------------" << endl;
    cout << "Total: $" << endl;
    cout << "-----------------------------" << endl;
}

void Tienda::terminarCompra()
{
    getTicket();
}

void Tienda::getTicket()
{
    cout << "Hola soy un ticket" << endl;
}
