#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct structAlumno
{
    char nombre[20];
    int edad;
    float creditos;
    int matricula;
    char genero[20];
};

int main(){
    int ix = 0, tamAlum;
    struct structAlumno josue;
    struct structAlumno alumnos[5];
    struct structAlumno *arrAlumnos;
    //apuntador = (int*)malloc(totCal*sizeof(int));
    tamAlum = 3;
    arrAlumnos = (struct structAlumno*)malloc(tamAlum*sizeof(struct structAlumno));
    /*strcpy(josue.nombre,"JOSUE");
    josue.edad = 10;
    josue.creditos = 145.5;
    strcpy(josue.genero,"Masculino");
    josue.matricula = 202212345;
    printf("%s, \n",josue.nombre);
    */
    for(ix = 0; ix < tamAlum; ix++){
        printf("Ingresa el nombre del alumno: ");
        scanf("%s",&arrAlumnos[ix].nombre);
        printf("Ingresa el genero del alumno: ");
        scanf("%s",&arrAlumnos[ix].genero);
        printf("Ingresa la edad del alumno: ");
        scanf("%d",&arrAlumnos[ix].edad);
        printf("Ingresa los creditos del alumno: ");
        scanf("%f",&arrAlumnos[ix].creditos);
        printf("Ingresa la matricula del alumno: ");
        scanf("%d",&arrAlumnos[ix].matricula);

        //printf("%s - \n",alumnos[ix].nombre);    
    }
    printf("Los alumnos almacenados son: \n");
    for(ix = 0; ix < tamAlum; ix++){
        printf("Nombre: %s Genero: %s Edad: %d Creditos:%f Matricula:%d \n", arrAlumnos[ix].nombre, arrAlumnos[ix].genero, arrAlumnos[ix].edad, arrAlumnos[ix].creditos,arrAlumnos[ix].matricula); 
        //printf("%d",ix);
    }
    return 0;
}
