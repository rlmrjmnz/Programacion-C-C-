/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Capacitacion
 *
 * Created on 25 de enero de 2018, 17:09
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Temas del dia de hoy:
 * 
 * Conversion de datos -> cambiar el tipo de dato en tiempo 
 *                        de ejecucion
 *                        entre tipos numericos y char <-> int
 * 
 * Arreglos            -> conjunto de datos del mismo tipo
 *  Vectores -> 1 Dimension (Fila)
 *  Matrices -> 2 Dimensiones (Tabla)
 *           -> n Dimensiones
 * 
 * Enum      -> coleccion de valores, solo se puede usar uno a la vez
 *              internamente -> numeros
 *              pueden ser necesarias funciones utilitarias
 * 
 * Structs   -> conjunto de datos de diferentes tipos
 *              . -> puedo acceder a cada dato
 *              puede ser combinado con arreglos
 * 
 */

// #define permite definir valores constantes
// #define nombre valor
#define TAMANNO 2
#define CANT_ESTUDIANTES 2

// Enum -> valor ennumerados
// dia - lunes, martes, miercoles, jueves, viernes
// enum nombre {dato, dato, ..., dato};
//             0       1       2          3       4
enum semana {lunes, martes, miercoles, jueves, viernes};

/*
 * Convierte de un String a su valor respectivo en
 * el enum
 */
enum semana convertirADia(char* nombre){
    enum semana resultado;
    
    if(strcasecmp(nombre, "lunes") == 0){
        resultado = lunes;
    }
    else{
        resultado = miercoles;
    }
    
    return resultado;
}

/*
 * Funcion principal
 */
int main(int argc, char** argv) {
    double valor1 = 9;
    double valor2 = 15;
    int resultado;
    int contador;
    int contador2;
    
    /*
     * Conversion de datos
     */
    // Cast -> (tipoFinal) (valorAConvertir)
    // Funciona entre tipos numericos - enteros y flotantes
    // Tambien entre char e int - Codigo ASCII
    char letra;
    int ascii = 97;
    letra = (char) (ascii);
    printf("%c\n", letra);
    
    char caracter = '/';
    int codigo = (int) (caracter);
    printf("%d\n", codigo);

    /*
     * Vectores
     */    
    // 4 cursos
    // tipo nombre[tamanno];
    // tipo nombre[tamanno] = {dato, dato, dato, dato};
    // tipo nombre[] = {dato, dato, dato, dato};
    
    //          pos 0   1   2   3
    int notas[TAMANNO];  // tambien llamado vector
   
    for(contador = 0; contador < TAMANNO; contador++){
        printf("Por favor digite una nota\n");
        scanf("%d", &notas[contador]);
    }
    
    for(contador = 0; contador < TAMANNO; contador++){
        printf("Nota %d: %d\n", contador+1, notas[contador]);
    }
    
    /*
     * Matrices
     */
    /*        0  1  2
     *     0 [] [] []
     *     1 [] [] [] 
     *     2 [] [] []
     * 
     * 
     *  tipo nombre[][] = {{dato, dato, dato},
     *                     {dato, dato, dato},
     *                     {dato, dato, dato}
     *                      };
     * 
     */
    int notasTotales[CANT_ESTUDIANTES][TAMANNO]; // matriz
    
    for(contador = 0; contador < CANT_ESTUDIANTES; contador++){
        for(contador2 = 0; contador2 < TAMANNO; contador2++){
            printf("Digite la nota %d del estudiante %d", contador2+1, contador+1);
            scanf("%d", &notasTotales[contador][contador2]);
        }
    }
    
    for(contador = 0; contador < CANT_ESTUDIANTES; contador++){
        for(contador2 = 0; contador2 < TAMANNO; contador2++){
            printf("%d ", notasTotales[contador][contador2]);
        }
        printf("\n");
    }
    
    /*
     * Enums
     */
    enum codigo {exitoso = 0, fallido = 1, errorLectura = 1};
    
    enum semana dia;
    char palabra[20];
    
    printf("Por favor escriba el dia en minuscula\n");
    scanf("%s", palabra);
    dia = convertirADia(palabra);
    
    // enum tambien se puede utilizar en switch
    switch(dia){
        case lunes:
            printf("Voy a comer\n");
            break;
        case martes:
        case jueves:
            printf("Voy a clases\n");
            break;
        case miercoles:
            printf("Voy al gimnasio\n");
            break;
        case viernes:
            printf("Voy al cine\n");
            break;
    }
    
    /*
     * Structs
     */
    struct persona{
        char nombre[20];
        char apellido[25];
        int edad;
        int salario;  
    };
    
    struct persona profesor;
    profesor.edad = 27;
    profesor.salario = 200;
    strcpy(profesor.nombre, "Ariel"); //string copy
    strcpy(profesor.apellido, "Mora");
    
    printf("Nombre: %s\n", profesor.nombre);
    printf("Edad: %d\n", profesor.edad);
    printf("Salario: %d\n", profesor.salario);
    
    struct persona estudiantes[8];
    
    char id[20];
    int edad;
    
    for(contador = 0; contador < 8; contador++){
        printf("Digite el nombre del estudiante\n");
        scanf("%s", id);
        strcpy(estudiantes[contador].nombre, id);
        
        printf("Digite el apellido del estudiante\n");
        scanf("%s", id);
        strcpy(estudiantes[contador].apellido, id);
        
        printf("Digite la edad del estudiante\n");
        scanf("%d", &edad);
        strcpy(estudiantes[contador].edad, edad);
    }
    
    for(contador = 0; contador < 8; contador++){
        printf("Estudiante: %s %s\n", estudiantes[contador].nombre, estudiantes[contador].apellido);
        printf("Edad: %d\n", estudiantes[contador].edad);
    }
    
    return (EXIT_SUCCESS);
}

