#include <stdio.h>
#include <string.h>
#include "deposito.h"

void realizarDeposito(Usuario* u) {
    float valor; // Valor do depósito

    // Solicita o valor ao usuário
    printf("\nDigite o valor do depósito: R$ ");
    scanf("%f", &valor);

    // Verifica se o valor é positivo
    if (valor > 0) {
        u->saldo += valor; // Adiciona o valor ao saldo

        // Registra a operação no histórico
        char operacao[100];
        sprintf(operacao, "Depósito: +R$ %.2f\n", valor);
        strcat(u->historico, operacao);

        printf("Depósito realizado com sucesso.\n");
    } else {
        printf("Valor inválido para depósito.\n");
    }
}