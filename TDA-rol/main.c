#include "personaje.h"
#include "personaje.c"
#include <stdio.h>
#include <stdlib.h>


int main()
{
    Personaje p = crearPersonaje();
    mostrarPersonaje(p);
    return 0;
}
