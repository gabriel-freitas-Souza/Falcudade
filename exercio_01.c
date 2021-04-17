/*
 * ===  ===  === Exercício  1 ===  ===  ===
 *
 * ESCREVA UM PROGRAMA QUE RECEBA UM NÚMERO
 * INTEIRO (DIGITADO PELO USUÁRIO) E INFORME
 * S É PAR OU ÍMPAR E SE É POSITIVO OU
 * NEGATIVO (CONSIDERE 0 COMO POSITIVO).
 *
 * === === === === === === === === === ===
 *
 * === === === === GRUPO === === === === ===
 * INTEGRANTES DO GRUPO :
 *  --> GABRIEL FREITAS SOUZA
 *  --> GUILHERME CÂNDIDO ROFFES
 *  --> MACLEANS DA SILVA RIBEIRO
 *
 * OBS.: TODOS CURSANDO FACULDADE DE
 * ENGENHARIA DA COMPUTAÇÃO.
 *
 * === === === === === === === === === === ===
 *
 * === === ===  LOGICA DO PROGRAMA === === ===
 * O PROGRAMA PEDIR UM NUMERO AO USUÁRIO,E COM
 * ISSO DETERMINA SE O NUMERO E PAR OU IMPAR E
 * SE ELE POSITIVO OU NEGATIVO.
 *
 * * LOGICA PAR IMPAR:
 *  CASO O RESTO DA DIVICAO POR 2,O RESULTADO
 * FOR 1 OU MAIOR O NUMERO ESSE NUMERO E IMPAR,
 * CASO CONTRARIO E PAR.
 *
 * * LOGICA POSITIVO NEGATIVO:
 *  CASO O NUMERO FOR MENOR QUE 0 SIGNIFICA
 * QUE ELE NEGATIVO E CASO CONTRARIO POSITIVO.
 *
 * COM BASE NESSAS LOGICAS O PROGRAMA RETORNAR
 * A RESPOSTA PARA USUÁRIO.
 *
 * OBS.: CONSIDERANDO  0 COMO PAR E POSITIVO.
 * === === === === === === === === === === ===
 */

#include <stdio.h>
int main() {
    // VARIAVEIS
    int numero,resto; // Inicia as variaveis necessarias.
    numero = resto = 0; // Define elas como valor inicial de 0.
    // ENTRADA DE DADOS
    printf("\nDIGITE UM NUMERO: \n--> "); // Pedir o usuario para digita um valor (imprimi).
    scanf("%i", &numero); // Receber o valor INTEIRO do usuario.
    resto = numero % 2; // Calcular o resto por 2 do valor digitado.
    // LAÇO CONDICIONAL I
    if(resto == 0 || numero == 0){ // Verifica se resto e 0 ou numero digitado e 0.
        printf("\nESSE NUMERO E PAR "); // Informar que numero e par caso passe pela condicao.
    }else{ // Caso condicao acima nao seja sastifeita ele entra nesse bloco de codigo.
        printf("\nESSE NUMERO E IMPAR "); // Informar que numero e impar.
    }
    // LAÇO CONDICIONAL II
    if(numero < 0){ // Verifica se o numero digitado e menor que 0.
        printf("E NEGATIVO.\n");// Informar que numero e negativo caso passe \\
        pela condicao.
    }else{// Caso condicao acima nao seja sastifeita ele entrar ness bloco de codigo.
        printf("E POSITIVO.\n");// Informar que numero e positivo
    }
    // SAIDA
    return 0;
}
