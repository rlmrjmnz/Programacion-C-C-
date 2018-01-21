/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Capacitacion
 *
 * Created on 18 de enero de 2018, 17:20
 */

#include <stdio.h>
#include <stdlib.h>

/*valor nombreFuncion(valores de entrada*){
 *    codigo;
 * }
 */
int cuadrado(int numero){
    int resultado;
    
    resultado = numero*numero;
    return resultado;
}

/*
 * Calcular el cuadrado de un numero
 * y lo imprime
 */
void imprimirCuadrado(int numero){
    int resultado;
    
    resultado = cuadrado(numero);
    printf("El valor de cuadrado de %d es %d\n", numero, resultado);
}

/*
 * Si la nota es mayor a 70, indica que pasa el curso
 * Si no, que lo repita
 */
void evaluarNota(double nota){
    if(nota >= 70){ // > mayor, < menor, == igual, >= mayor igual,
                   // <= menor igual
        if(nota >= 90){
            printf("Paso el curso con honores. Felicidades\n");
        }
        else{
            printf("Paso el curso. Felicidades\n");
        }
    }
    else if(nota >= 60){
        printf("Tiene que ir a ampliacion. Suerte\n");
    }
    else{
        printf("No paso el curso.\n");
    }
}

int main() {
    double nota;
    char palabra[25];

    printf("Escriba una nota por favor\n");
    scanf("%s", palabra);
    nota = atof(palabra);
    evaluarNota(nota);
    
    return (EXIT_SUCCESS); 
}

/* IF -> tomar decisiones
 * 
 * si es martes o jueves
 *  voy a clases de programacion
 * si no
 *  me quedo en la casa
 * 
 * si el texto es una oracion
 *  imprimalo
 * si no
 *  no haga nada
 * 
 * si es mayor a 70
 *  pasa el curso
 * si no
 *  repita el curso
 * 
 */
