#include <stdio.h>
#include <stdlib.h>
int positivoNegativo();
int maiorNumero();
int calculadora();
int ordemCrescente();
int main() {
    int opcao = 1;
    while(opcao>0){
        printf("\t\t=========== MENU ===========\n");
        printf("\t\t1 - Numero Positivo/Negativo\n");
        printf("\t\t2 - Maior de 3 numeros\n");
        printf("\t\t3 - Calculadora\n");
        printf("\t\t4 - Ordem Crescente de 3 numeros reais\n");
        printf("\t\t0 - Sair\n");
        printf("\t\t============================\n");
        printf("\t-->");
        scanf("%i", &opcao);
        switch(opcao){
            case 0:
                break;
            case 1:
                positivoNegativo();
                break;
            case 2:
                maiorNumero();
                break;
            case 3:
                calculadora();
                break;
            case 4:
                ordemCrescente();
                break;
            default:
                printf("\tOPCAO INVALIDA !\n");
                system("pause");
                break;
        }
        system("cls");
    }
    return 0;
}
int positivoNegativo(){
    int numero;
    numero = 0;
    printf("Digite um numero : \n");
    printf("\t-->");
    scanf("%i",&numero);
    if(numero< 0){
        printf("Esse numero e negativo !\n");
    }else{
        printf("Esse numero e positivo!\n");
    }
    system("pause");
}
int maiorNumero(){
    int numero[3];
    for(int i = 0;i< 3;i++){
        printf("Digite o %i numero: \n",i+1);
        printf("\t-->");
        scanf("%i",&numero[i]);

    }
    if(numero[0] > numero[1] && numero[0] > numero[2]){
        printf("O NUMERO %i E MAIOR QUE %i E %i\n", numero[0], numero[1], numero[2]);
    }else if(numero[1] > numero[0] && numero[1] > numero[2]){
        printf("O NUMERO %i E MAIOR QUE %i E %i\n", numero[1], numero[0], numero[2]);
    }else if(numero[2] > numero[0] && numero[2] > numero[1]){
        printf("O NUMERO %i E MAIOR QUE %i E %i\n", numero[2], numero[0], numero[1]);
    }
    system("pause");
}
int calculadora(){
    //VARIAVEIS
    int calculadoraOpcoes = 0; // Numero opcao
    float number[2],resultado = 0; // Vetor numero receber os dois numeros e \\
                                      resultado receber valor da operacao.
    //LACO DE REPEDICAO I && ENTRADA
    do{
        //MENU DE OPCOES
        printf("\t\t============================\n");
        printf("\t\tOPCOES : \n");
        printf("\t\tSOMA --> 1 \n\t\tSUBTRACAO --> 2\n\t\tMULTIPLICACAO -->  3\n");
        printf("\t\tDIVICAO --> 4 \n");
        printf("\t\t============================\n");
        printf("\nDIGITE O NUMERO DA OPCAO DESEJADA:\n \t-->"); // Pedir a opcao ao usuario.
        scanf("%i",&calculadoraOpcoes); // Ler opcao.
        //LACO DE REPEDICAO II
        for(int i=0;i < 2;i++){
            printf("DIGITE O NUMERO %i (UTILIZE O \".\" NO LUGAR DA \",\"):\n -->",i+1);
            scanf("%f",&number[i]); // Ler os numeros.
        }
        //LACO CONDICIONAL
        switch(calculadoraOpcoes){ // Realizar a operacao de acordo com opcao escolhida.
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
        scanf("%d",&calculadoraOpcoes); // Ler opcao do usuario.
    }while(calculadoraOpcoes != 5); // Verificar se o usuario quer continuar.
    //SAIDA
}
int ordemCrescente(){
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
            printf("%.2f , %.2f , %.2f\n", numero[0], numero[1], numero[2]); // Resultado 1
        } else {
            printf("%.2f , %.2f , %.2f\n", numero[0], numero[2], numero[1]);// Resultado 2
        }
    } else if (numero[1] < numero[0] && numero[1] < numero[2]) {// Verificar se segundo numero digitado \\
                                                                   e menor
        if (numero[0] < numero[2]){// Verificar o segundo  menor numero
            printf("%.2f , %.2f , %.2f\n", numero[1], numero[0], numero[2]); // Resultado 3
        } else {
            printf("%.2f , %.2f , %.2f\n", numero[1], numero[2], numero[0]); // Resultado 4
        }
    }else if (numero[2] < numero[0] && numero[2] < numero[1]) {// Verificar se terceiro numero digitado \\
                                                                  e menor
        if (numero[0] < numero[1]) {// Verificar o segundo  menor numero
            printf("%.2f , %.2f , %.2f\n", numero[2], numero[0], numero[1]); // Resultado 5
        } else {
            printf("%.2f , %.2f , %.2f\n", numero[2], numero[1], numero[0]); // Resultado 6
        }
    }
    system("pause");
}
