#ifndef USUARIO_H
#define USUARIO_H

// Define a struct Usuario que será usada em todos os módulos
typedef struct {
    char nome[50];           // Nome do usuário
    char login[20];          // Nome de login para autenticação
    char senha[20];          // Senha do usuário
    float saldo;             // Saldo atual da conta do usuário
    char historico[1000];    // Histórico de operações realizadas
} Usuario;

#endif