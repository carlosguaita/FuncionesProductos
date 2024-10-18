#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    char productosNombres[10][50];
    float productosPrecios[10];
    leerNombrePrecio(productosNombres,productosPrecios,1,0);
    imprimirProducto(productosNombres,productosPrecios,1,0);
    char productoABuscar[50]="Arroz";
    buscarProducto(productosNombres,productosPrecios,productoABuscar);

    return 0;
}