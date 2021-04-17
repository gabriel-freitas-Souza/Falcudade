/*
 *
 * ===  ===  === Exercício  3 ===  ===  === === === ===
 * ESCREVA UM PROGRAMA PARA UMA CALCULADORA
 * EM QUE USUÁRIO INFORME A OPERACAO QUE DEVE
 * SER EXECUTADA(SOMA,SUBTRACAO,MULTIPLICACAO,DIVICAO)
 * E DOIS VALORES A SEREM USADOS NA OPERACAO
 * E EXECUTE A OPERACAO.
 * === === === === === === === === === === === === ===
 *
 * === === ===  LOGICA DO PROGRAMA === === === ===
 *  O PROGRAMA PERGUNTA QUAL OPERACAO O USUÁRIO QUER
 * REALIZAR, LOGO DEPOIS PEDIR DOIS NUMEROS AO
 * USUÁRIO E COM ISSO REALIZAR OPERACAO DESEJADA.
 *  ASSIM RETORNANDO O RESULTADO PARA O USUÁRIO,
 * LOGO APOS EXIBER O RESULTADO ELE PERGUNTA SE
 * O USUÁRIO QUER CONTINUAR E CASO A RESPOTA FOR
 * PARA CONTINUAR ELE EXECUTAR O CODIGO NOVAMENTE.
 * === === === === === === === === === === === ===
 */

#include <stdio.h>

int main() {
    //VARIAVEIS
    int opcoes = 0; // Numero opcao
    float number[2],resultado = 0; // Vetor numero receber os dois numeros e \\
                                      resultado receber valor da operacao.
    //LACO DE REPEDICAO I && ENTRADA
    do{
        //MENU DE OPCOES
        printf("OPCOES : \n");
        printf(" SOMA --> 1 \n SUBTRACAO --> 2 \n MULTIPLICACAO --> 3 \n");
        printf(" DIVICAO --> 4 \n");
        printf("DIGITE O NUMERO DA OPCAO DESEJADA:\n -->"); // Pedir a opcao ao usuario.
        scanf("%i",&opcoes); // Ler opcao.
        //LACO DE REPEDICAO II
        for(int i=0;i < 2;i++){
            printf("DIGITE O NUMERO %i (UTILIZE O \".\" NO LUGAR DA \",\"):\n -->",i+1);
            scanf("%f",&number[i]); // Ler os numeros.
        }
        //LACO CONDICIONAL
        switch(opcoes){ // Realizar a operacao de acordo com opcao escolhida.
            case 1 : // CASO 1 - SOMA
                resultado = number[0] + number[1];
                break; // SAIR DO ESCOLHA CASO(switch)
            case 2 : // CASO 2 - SUBTRACAO
                resultado = number[0] - number[1];
                break;// SAIR DO ESCOLHA CASO(switch)
            case 3 : // CASO 3 - MULTIPLICACAO
                resultado = number[0] * number[1];
                break;// SAIR DO ESCOLHA CASO(switch)
            case 4 : // CASO 4 - DIVICAO
                resultado = number[0] / number[1];
                break; // SAIR DO ESCOLHA CASO(switch)
        }
        printf("\nRESULTADO: %.2f\n", resultado); // Exiber o resultado formatado\\
                                                             com duas casas decimais
        printf("\nDIGITE 5 CASO QUEIRA SAIR OU 0 PARA CONTINUAR: \n -->");
        scanf("%d",&opcoes); // Ler opcao do usuario.
    }while(opcoes != 5); // Verificar se o usuario quer continuar.
    //SAIDA
    return 0;
}
