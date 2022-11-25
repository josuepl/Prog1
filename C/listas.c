#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct structAlumno
{
    char nombre[20];
    struct structAlumno *apSA;
};
typedef struct structAlumno *Alumnos;
