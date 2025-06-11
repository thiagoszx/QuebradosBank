#include <stdio.h>
#include "saque.h"
#include <string.h>

void realizarSaque(Usuario* u) {
    float valor; // Valor do saque

    // Solicita o valor a ser sacado
    printf("\nDigite o valor do saque: R$ ");
    scanf("%f", &valor);

    // Verifica se há saldo suficiente
    if (valor > 0 && valor <= u->saldo) {
        u->saldo -= valor; // Subtrai o valor do saldo

        // Registra a operação no histórico
        char operacao[100];
        sprintf(operacao, "Saque: -R$ %.2f\n", valor);
        strcat(u->historico, operacao);

        printf("Saque realizado com sucesso.\n");
    } else {
        printf("Saldo insuficiente ou valor inválido.\n");
    }
}
