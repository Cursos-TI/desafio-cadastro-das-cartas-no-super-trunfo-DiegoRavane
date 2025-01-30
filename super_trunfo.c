#include <stdio.h>

int main() {
    char estado;
    char codigo_carta[4];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int pontos_tur;
    char continuar;

    do {
        // Solicitar os dados ao usuário
        printf("Digite o estado (letra): ");
        scanf(" %c", &estado);

        printf("Digite o código da carta (ex: A01): ");
        scanf("%s", codigo_carta);

        printf("Digite o nome da cidade: ");
        scanf(" %c", cidade);  

        printf("Digite a população: ");
        scanf("%d", &populacao);

        printf("Digite a área da cidade em km²: ");
        scanf("%f", &area);

        printf("Digite o PIB da cidade em bilhões de reais: ");
        scanf("%f", &pib);

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontos_tur);

        // Exibir os dados cadastrados
        printf("\nDados cadastrados da carta:\n");
        printf("Estado: %c\n", estado);
        printf("Código da Carta: %s\n", codigo_carta);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f bilhões de reais\n", pib);
        printf("Número de Pontos Turísticos: %d\n", pontos_tur);

        // Perguntar se deseja cadastrar outra carta
        printf("\nDeseja cadastrar outra carta? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');
    
    printf("Sistema finalizado.\n");
    return 0;
}