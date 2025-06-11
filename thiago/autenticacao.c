#include <stdio.h>
#include <string.h>
#include "autenticacao.h" // Inclui o cabeçalho deste módulo

int autenticar(Usuario* u) {
    char login[20];  // Armazena o login digitado
    char senha[20];  // Armazena a senha digitada

    // Solicita o login ao usuário
    printf("Login: ");
    scanf("%s", login);

    // Solicita a senha ao usuário
    printf("Senha: ");
    scanf("%s", senha);

    // Compara os dados digitados com os armazenados na struct
    if (strcmp(login, u->login) == 0 && strcmp(senha, u->senha) == 0) {
        printf("\nAutenticado com sucesso!\n"); // Mensagem de sucesso
        return 1; // Retorna verdadeiro se autenticado
    } else {
        printf("\nLogin ou senha incorretos.\n"); // Mensagem de erro
        return 0; // Retorna falso se falhou
    }
}