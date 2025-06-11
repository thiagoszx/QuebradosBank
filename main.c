#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#include "usuario.h"
#include "thiago/autenticacao.h"
#include "alexandre/saldo.h"
#include "davi_lucas/saque.h"
#include "alysson/deposito.h"
#include "historico/historico.h"

int main() {
    Usuario usuario = {
        .nome = "Thiago",
        .login = "thiago",
        .senha = "1234",
        .saldo = 1000.0,
        .historico = ""
    };

    if (!autenticar(&usuario)) {
        return 0;
    }

    int opcao;
    do {
        printf("\n=== MENU QUEBRADOSBANK ===\n");
        printf("1. Consultar saldo\n");
        printf("2. Realizar saque\n");
        printf("3. Realizar depósito\n");
        printf("4. Ver histórico\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                consultarSaldo(&usuario);
                break;
            case 2:
                realizarSaque(&usuario);
                break;
            case 3:
                realizarDeposito(&usuario);
                break;
            case 4:
                exibirHistorico(&usuario);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while(opcao != 0);

    return 0;
}
