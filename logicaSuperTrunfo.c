#include <stdio.h>
#include <string.h>

struct Cidade {
    char nome[50];
    int populacao;
    float area;
    float pib;
};

int main() {
    struct Cidade cidade1, cidade2;
    char cidadeVencedora[50];
    int opcao;

    // Cadastro da primeira cidade
    printf("Digite o nome da primeira cidade: ");
    scanf("%s", cidade1.nome);
    printf("Digite a população: ");
    scanf("%d", &cidade1.populacao);
    printf("Digite a área: ");
    scanf("%f", &cidade1.area);
    printf("Digite o PIB: ");
    scanf("%f", &cidade1.pib);

    // Cadastro da segunda cidade
    printf("\nDigite o nome da segunda cidade: ");
    scanf("%s", cidade2.nome);
    printf("Digite a população: ");
    scanf("%d", &cidade2.populacao);
    printf("Digite a área: ");
    scanf("%f", &cidade2.area);
    printf("Digite o PIB: ");
    scanf("%f", &cidade2.pib);

    // Escolha do atributo de comparação
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // Comparação
    switch(opcao) {
        case 1:
            if (cidade1.populacao > cidade2.populacao) {
                strcpy(cidadeVencedora, cidade1.nome);
            } else if (cidade2.populacao > cidade1.populacao) {
                strcpy(cidadeVencedora, cidade2.nome);
            } else {
                printf("As duas cidades têm a mesma população.\n");
                return 0;
            }
            printf("A cidade com maior população é: %s\n", cidadeVencedora);
            break;

        case 2:
            if (cidade1.area > cidade2.area) {
                strcpy(cidadeVencedora, cidade1.nome);
            } else if (cidade2.area > cidade1.area) {
                strcpy(cidadeVencedora, cidade2.nome);
            } else {
                printf("As duas cidades têm a mesma área.\n");
                return 0;
            }
            printf("A cidade com maior área é: %s\n", cidadeVencedora);
            break;

        case 3:
            if (cidade1.pib > cidade2.pib) {
                strcpy(cidadeVencedora, cidade1.nome);
            } else if (cidade2.pib > cidade1.pib) {
                strcpy(cidadeVencedora, cidade2.nome);
            } else {
                printf("As duas cidades têm o mesmo PIB.\n");
                return 0;
            }
            printf("A cidade com maior PIB é: %s\n", cidadeVencedora);
            break;

        default:
            printf("Opção inválida.\n");
    }

    return 0;
}

