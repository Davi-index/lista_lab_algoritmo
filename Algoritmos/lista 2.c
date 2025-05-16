#include <stdio.h>
#include <string.h>
// Função para exibir o menu principal
// O nome de usario e senha são definidos como constantes
// Para facilitar a comparação
void menu() {
    printf("\n=== Caixa Eletrônico ===\n");
    printf("1. Consultar Saldo\n");
    printf("2. Depositar\n");
    printf("3. Sacar\n");
    printf("4. Sair\n");
    printf("Escolha uma opcaoo: ");
}

int main() {
    char usuario[20], senha[20];
    char usuarioCorreto[] = "admin";
    char senhaCorreta[] = "1234";
    float saldo = 1000.0; // Saldo inicial
    int opcao;
    float valor;

    // Sistema de login
    printf("=== Sistema de Login ===\n");
    printf("Usuario: ");
    scanf("%s", usuario);
    printf("Senha: ");
    scanf("%s", senha);

    if (strcmp(usuario, usuarioCorreto) != 0 || strcmp(senha, senhaCorreta) != 0) {
        printf("Usuario ou senha incorretos. Encerrando o programa.\n");
        return 1;
    }

    printf("Login realizado com sucesso!\n");

    // Menu principal
    do {
        menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Seu saldo atual e: R$ %.2f\n", saldo);
                break;
            case 2:
                printf("Digite o valor para depósito: R$ ");
                scanf("%f", &valor);
                if (valor > 0) {
                    saldo += valor;
                    printf("Depósito realizado com sucesso! Saldo atual: R$ %.2f\n", saldo);
                } else {
                    printf("Valor invalido para depósito.\n");
                }
                break;
            case 3:
                printf("Digite o valor para saque: R$ ");
                scanf("%f", &valor);
                if (valor > 0 && valor <= saldo) {
                    saldo -= valor;
                    printf("Saque realizado com sucesso! Saldo atual: R$ %.2f\n", saldo);
                } else if (valor > saldo) {
                    printf("Saldo insuficiente para realizar o saque.\n");
                } else {
                    printf("Valor invalido para saque.\n");
                }
                break;
            case 4:
                printf("Saindo do sistema. Obrigado por utilizar o caixa eletrônico!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
                                                //GATINHO DANDO JÓIA//
                                                //GATINHO DANDO JÓIA//
                                                //GATINHO DANDO JÓIA//
                                                //GATINHO DANDO JÓIA//



                                                
                                                //Davi Alves Maia//