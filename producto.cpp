#include <iostream>
#include <sstream>
#include <fstream>
#include "producto.h"

#include <string>

#define NOMBRE_ARCHIVO "stock.csv"

using namespace std;

producto::producto(string idbuscar)
{
    ifstream archivo(NOMBRE_ARCHIVO);
    string linea;
    char delimitador = ',';

    // Leemos la primer línea para descartarla, pues es el encabezado
    getline(archivo, linea);

    string id, descripcion, precio, stock;
    // Leemos todas las líneas
    while (getline(archivo, linea))
    {

        stringstream stream(linea); // Convertir la cadena a un stream
        // Extraer todos los valores de esa fila
        getline(stream, id, delimitador);
        getline(stream, descripcion, delimitador);
        getline(stream, precio, delimitador);
        getline(stream, stock, delimitador);

        // Imprimir
        int numero = stoi(stock);
        float dinero = stof(precio);
        if (id == idbuscar)
        {
            this->id = id;
            this->descripcion = descripcion;
            this->precio = dinero;
            this->stock = numero;
        }
    }

    archivo.close();
}

int producto::getStock(){
    return this->stock; 
}; 

float producto::getPrecio(){
    return this->precio;
};

string producto::getNombre(){
    return this->descripcion;
};


