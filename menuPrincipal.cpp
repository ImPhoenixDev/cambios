#include "tienda.h"
#include "menuPrincipal.h"
#include <iostream>
using namespace std;

MenuPrincipal::MenuPrincipal(Tienda tienda)
{
    this->t = tienda;
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
        break;
    case 2:
        t.verCarrito();
        break;
    case 3:
        t.terminarCompra();
    
    case 4:
        this->MenuPrincipal::salir();

    }

}
