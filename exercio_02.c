/*
 * ===  ===  === Exercício  2 ===  ===  ===
 * CONSTRUA UM ALGORITMO QUE RECEBA TRES
 * INTEIROS DISTINTOS E INFORME QUAL E MAIOR.
 * === === === === === === === === === ===
 *
 * === === ===  LOGICA DO PROGRAMA === === === ===
 *   O PROGRAMA PEDIR TRES NUMEROS AO USUARIO E
 *  DEPOIS COMPARAR PARA VER QUAL É MAIOR.
 *   E RETORNAR PARA O USUARIO A RESPOSTA.
 * == === === === === === === === === === === ===
 *
 */
#include <stdio.h>

int main() {
    // VARIAVEIS
    int numero[3]; // Armazenar os 3 numeros digitados.
    // LAÇO DE REPEDIÇÃO && ENTRADA //
    for(int i = 0;i < 3;i++){ // Pedir os 3 numeros ao usuario.
        printf("DIGITE O NUMERO %i : \n--> ",i+1); // Pedir ao usuarioo numero(imprimi).
        scanf("%d",&numero[i]); // Ler e guarda o numero digitado no vetor.
    }
    //LAÇO CONDICIONAL
    if(numero[0] > numero[1] && numero[0] > numero[2]){ // Verificar se primeiro numero  \\
                                                           digitado e o maior.
        printf("O NUMERO %i E MAIOR QUE %i E %i", numero[0], numero[1], numero[2]); // Resultado 1
    }else if(numero[1] > numero[0] && numero[1] > numero[2]){//Verificar se primeiro numero \\
                                                                digitado e o maior.
        printf("O NUMERO %i E MAIOR QUE %i E %i", numero[1], numero[0], numero[2]); // Resultado 2
    }else if(numero[2] > numero[0] && numero[2] > numero[1]){// Verificar se  teceiro numero \\
                                                                digitado e o maior.
        printf("O NUMERO %i E MAIOR QUE %i E %i", numero[2], numero[0], numero[1]); // Resultado 3
    }
    //SAIDA
    return 0;
}
