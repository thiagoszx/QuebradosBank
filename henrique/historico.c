#include <stdio.h>
#include "historico.h"

void exibirHistorico(Usuario* u) {
    // Verifica se o histórico está vazio
    if (u->historico[0] == '\0') {
        printf("\nNenhuma operação registrada.\n"); // Mensagem caso não haja histórico
    } else {
        printf("\n=== Histórico de Operações ===\n");
        printf("%s", u->historico); // Exibe o histórico completo
    }
}