/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Ari Mora
 *
 * Created on 17 de enero de 2018, 01:47 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int numeroEntero = 15;
    short numeroPequenno = 1;
    long numeroGrande = 489151352;
    unsigned int numeroSinSigno = -89;
    
    printf("Numero entero %d\n", numeroEntero);
    printf("Numero pequenno %hd\n", numeroPequenno);
    printf("Numero grande %ld\n", numeroGrande);
    printf("Numero sin signo %u\n", numeroSinSigno);
    
    float numeroFlotante = 56.26;
    double numeroPreciso = 3.1459789;
    
    printf("Numero flotante %f\n", numeroFlotante);
    printf("Numero preciso %f\n", numeroPreciso);
    printf("Numero preciso con dos decimales %.2f\n", numeroPreciso);
    
    char letra = 'a';
    char* palabra = "hola";
    char* oracion = "hola mundo";
    
    printf("Letra %c\n", letra);
    printf("Palabra %s\n", palabra);
    printf("Oracion %s\n", oracion);
    
    int valor1 = 15;
    int valor2 = 9;
    
    int suma = valor1 + valor2;
    int resta = valor1 - valor2;
    int multiplicacion = valor1 * valor2;
    int division = valor1 / valor2;
    int modulo = valor1 % valor2;
    
    printf("Suma de %d y %d es %d\n", valor1, valor2, suma);
    printf("Resta de %d y %d es %d\n", valor1, valor2, resta);
    printf("Multiplicacion de %d y %d es %d\n", valor1, valor2, multiplicacion);
    printf("Division de %d y %d es %d\n", valor1, valor2, division);
    printf("Resto de %d y %d es %d\n", valor1, valor2, modulo);
    
    return (EXIT_SUCCESS);
}

