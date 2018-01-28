/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Capacitacion
 *
 * Created on 23 de enero de 2018, 17:09
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Ejemplos de Switch
 */
void numeroAPalabra(int numero){
    switch(numero){ // funciona con int y chars
        case 1:
            printf("Uno\n");
            break;
        case 2:
            printf("Dos\n");
            break;
        case 3:
            printf("Tres\n");
            break;
        default:
            printf("No reconozco el numero\n");
    }
}

void esPar(int numero){
    switch(numero){
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
            printf("El numero es par\n");
            break;
        default:
            printf("El numero es impar\n");
    }
}

int diasPorMes(int mes){
    int dias;
    
    switch(mes){
        case 2:
            dias = 28;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            dias = 31;
            break;
        default:
            dias = 30;
    }
    
    return dias;
}

/*
 * Ejemplos de for
 */
void imprimirLinea(int tamanno){
    int contador;
    
    //for (inicializacion, condicion, incremento o decremento)
    for(contador = 0; contador < tamanno; contador++){ //++ = postincremento
        printf("*");
    }
    
    printf("\n");
}

void imprimirNumeros(int numeroMaximo){
    int contador;
    
    for(contador = 1; contador <= numeroMaximo; contador++){
        printf("%d\n", contador);
    }
}

void imprimirNumerosV2(int numeroMaximo){
    int contador;
    
    for(contador = 0; contador < numeroMaximo; contador++){
        printf("%d\n", contador+1);
    }
}

void imprimirCuadrado(int tamanno){
    int contador;
    
    for(contador = 0; contador < tamanno; contador++){
        imprimirLinea(tamanno);
    }
}

void imprimirCuadradoV2(int tamanno){
    int fila;
    int columna;
    
    for(fila = 0; fila < tamanno; fila++){
        for(columna = 0; columna < tamanno; columna++){
            printf("*");
        }
        printf("\n");
    }
}

void imprimirRectangulo(int largo, int ancho){
    int fila;
    int columna;
    
    for (fila = 0; fila < largo; fila++){
        for(columna = 0; columna < ancho; columna++){
            printf("*");
        }
        printf("\n");
    }
}

/*
 * Ejemplos de while
 */
void imprimirLineaV2(int tamanno){
    int contador = 0;
    
    //while(condicion) { codigo }
    while(contador < tamanno){
        printf("*");
        contador++;
    }
    printf("\n");
}


/*
 * Valida que la jugada en un tablero de
 * 8x8 sea valida
 */
void validarJugada(int fila, int columna){
    if((fila >= 1) && (fila <= 8)){
        printf("La fila es valida\n");
    }
    if((columna >= 1) && (columna <= 8)){
        printf("La columna es valida\n");
    }
}

/*
 * Funcion principal
 */
int main(int argc, char** argv) {
    int opcion = 1;
    int valor1;
    int valor2;
    
    while(opcion != 0){
        printf("Digite el numero de opcion\n");
        printf("1. Imprimir Linea\n");
        printf("2. Imprimir Cuadrado\n");
        printf("3. Imprimir Rectangulo\n");
        printf("4. Validar jugada\n");
        printf("0. Salir\n");
        
        scanf("%d", &opcion);
        
        switch(opcion){
            case 1:     //Imprimir Linea
                printf("Digite el largo de la linea\n");
                scanf("%d", &valor1);
                imprimirLinea(valor1);
                break;
            case 2:     //Imprmir Cuadrado
                printf("Digite el tamanno del lado del cuadrado\n");
                scanf("%d", &valor1);
                imprimirCuadrado(valor1);
                break;
            case 3:     //Imprmir Rectangulo
                printf("Digite el tamanno del largo del rectangulo\n");
                scanf("%d", &valor1);
                printf("Digite el tamanno del ancho del rectangulo\n");
                scanf("%d", &valor2);
                imprimirRectangulo(valor1, valor2);
                break;
            case 4:
                printf("Digite la fila\n");
                scanf("%d", &valor1);
                printf("Digite la columna\n");
                scanf("%d", &valor2);
                validarJugada(valor1, valor2);
                break;
            case 0:
                printf("Hasta Luego\n");
                break;
            default:
                printf("Opcion no reconocida\n");
        }
        
        printf("Digite una tecla para continuar\n");
        getchar();
        
        system("cls"); //Windows
        //system("clear"); //Linux o Mac
    }
    
    return (EXIT_SUCCESS);
}

