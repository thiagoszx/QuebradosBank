#include <stdio.h>
#include "saldo.h"

void consultarSaldo(Usuario* u) {
    // Exibe o saldo atual formatado com duas casas decimais
    printf("\nSaldo atual: R$ %.2f\n", u->saldo);
}