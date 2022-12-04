#include "tienda.h"
#include "menuPrincipal.h"
#include <iostream>
using namespace std;

MenuPrincipal::MenuPrincipal(Tienda tienda)
{
    this->t = tienda;
    ultimaSeleccion = 0;
}

void MenuPrincipal::salir()
{
    cout << "Gracias por su visita :)" << endl;
}
void MenuPrincipal::mostrarOpciones()
{

    cout << "-------------------" << endl;
    cout << "   Bienvenido a    " << endl;
    cout << "    la tienda      " << endl;
    cout << "-------------------" << endl;
    cout << "1. Seleccionar productos." << endl;
    cout << "2. Ver carrito de compras." << endl;
    cout << "3. Finalizar compra." << endl;
    cout << "4. Salir." << endl;
}

void MenuPrincipal::seleccionarOpcion(){

    cout << "Ingrese una opcion: ";
    int opcion;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        t.verProductos();
        t.seleccionarProducto();
        ultimaSeleccion = 1;
        break;
    case 2:
        t.verCarrito();
        ultimaSeleccion = 2;
        break;
    case 3:
        t.terminarCompra();
        ultimaSeleccion = 3;
        break;
    case 4:
        ultimaSeleccion = 4;
        this->MenuPrincipal::salir();
        break;
    }

}
