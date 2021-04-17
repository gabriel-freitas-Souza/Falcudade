/*
 *
 * ===  ===  === Exercício  4 ===  ===  ===
 * FACA UM PROGRAMA QUE RECEBA TRES NUMEROS
 * REAIS DISTINTOS E IMPRIMA-OS EM ORDEM
 * CRESCENTE.
 * === === === === === === === === === ===
 *
 * === === ===  LOGICA DO PROGRAMA === === === ===
 *   O PROGRAMA PEDIR TRES NUMEROS AO USUARIO E
 *  DEPOIS COMPARAR PARA VER QUAL É MENOR E O
 *  SEGUNDO MENOR.
 *   E RETORNAR PARA O USUARIO A RESPOSTA
 *  MOSTRANDO EM ORDEM CRESCENTE.
 * === === === === === === === === === === === ===
 */
#include <stdio.h>

int main() {
    //VARIAVEIS
    float numero[3]; // Criar um vetor de 3 posicicoes para armazenar 3 numeros digitados.
    // LAÇO DE REPEDIÇÃO && ENTRADA
    for (int i = 0; i < 3; i++) { // Pedir ao usuario os 3 numeros.
        printf("DIGITE O NUMERO %i : \n--> ", i+1); // Pedir ao usuario o numero(imprimi).
        scanf("%f", &numero[i]); // Ler e guarda dentro od vetor.
    }
    //LAÇO CONDICIONAL 
    if (numero[0] < numero[1] && numero[0] < numero[2]) {// Verificar se primeiro numero digitado e menor
        if (numero[1] < numero[2]){ // Verificar o segundo  menor numero
            printf("%f , %f , %f", numero[0], numero[1], numero[2]); // Resultado 1
        } else {
            printf("%f , %f , %f", numero[0], numero[2], numero[1]);// Resultado 2
        }
    } else if (numero[1] < numero[0] && numero[1] < numero[2]) {// Verificar se segundo numero digitado \\
                                                                   e menor
        if (numero[0] < numero[2]){// Verificar o segundo  menor numero
            printf("%f , %f , %f", numero[1], numero[0], numero[2]); // Resultado 3
        } else {
            printf("%f , %f , %f", numero[1], numero[2], numero[0]); // Resultado 4
        }
    }else if (numero[2] < numero[0] && numero[2] < numero[1]) {// Verificar se terceiro numero digitado \\
                                                                  e menor
        if (numero[0] < numero[1]) {// Verificar o segundo  menor numero
            printf("%f , %f , %f", numero[2], numero[0], numero[1]); // Resultado 5
        } else {
            printf("%f , %f , %f", numero[2], numero[1], numero[0]); // Resultado 6
        }
    }
    //SAIDA
    return 0;
}
