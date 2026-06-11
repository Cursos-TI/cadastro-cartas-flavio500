#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída (printf, scanf)

int main() { // Função principal — ponto de entrada do programa

    // Declaração das variáveis da primeira carta
    char Estado;              // Armazena a letra do estado (A a H)
    char Cod_da_Carta[3];     // Armazena o código da carta (até 2 caracteres + '\0')
    char nome_da_cidade[30];  // Armazena o nome da cidade (até 29 caracteres + '\0')
    int populacao;            // Armazena a população da cidade (número inteiro)
    int pontos_turisticos;    // Armazena a quantidade de pontos turísticos
    float area;               // Armazena a área da cidade em Km²
    float PIB;                // Armazena o PIB da cidade em bilhões de reais

    // Declaração das variáveis da segunda carta (mesma estrutura da primeira)
    char Estado2;
    char Cod_da_Carta2[3];
    char nome_da_cidade2[30];
    int populacao2;
    int pontos_turisticos2;
    float area2;
    float PIB2;

    // -------------------------
    // Leitura dos dados da Carta 1
    // -------------------------

    printf("Digite os dados da primeira carta:\n"); // Exibe o cabeçalho da primeira carta

    printf("digite uma letra de A a H:\n");   // Solicita a letra do estado
    scanf(" %c", &Estado);                    // Lê um caractere; o espaço antes de %c ignora espaços/quebras de linha anteriores

    printf("Digite o codigo da carta:\n");    // Solicita o código da carta
    scanf(" %s", Cod_da_Carta);               // Lê uma string (sem &, pois array já é ponteiro)

    printf("digite o nome da cidade:\n");     // Solicita o nome da cidade
    scanf(" %s", nome_da_cidade);             // Lê uma string para o nome da cidade

    printf("Digite a populacao:\n");          // Solicita a população
    scanf(" %d", &populacao);                 // Lê um inteiro para a população

    printf("Digite o numero de pontos turisticos:\n"); // Solicita os pontos turísticos
    scanf(" %d", &pontos_turisticos);                  // Lê um inteiro para pontos turísticos

    printf("Digite a area:\n");               // Solicita a área
    scanf(" %f", &area);                      // Lê um float para a área

    printf("Digite o PIB:\n");                // Solicita o PIB
    scanf(" %f", &PIB);                       // Lê um float para o PIB

    // -------------------------
    // Leitura dos dados da Carta 2
    // -------------------------

    printf("\nDigite os dados da segunda carta:\n"); // Exibe o cabeçalho da segunda carta

    printf("digite uma letra de A a H:\n");
    scanf(" %c", &Estado2);                   // Lê a letra do estado da segunda carta

    printf("Digite o codigo da carta:\n");
    scanf(" %s", Cod_da_Carta2);              // Lê o código da segunda carta

    printf("digite o nome da cidade:\n");
    scanf(" %s", nome_da_cidade2);            // Lê o nome da cidade da segunda carta

    printf("Digite a populacao:\n");
    scanf(" %d", &populacao2);                // Lê a população da segunda carta

    printf("Digite o numero de pontos turisticos:\n");
    scanf(" %d", &pontos_turisticos2);        // Lê os pontos turísticos da segunda carta

    printf("Digite a area:\n");
    scanf(" %f", &area2);                     // Lê a área da segunda carta

    printf("Digite o PIB:\n");
    scanf(" %f", &PIB2);                      // Lê o PIB da segunda carta

    // -------------------------
    // Exibição dos dados da Carta 1
    // -------------------------

    printf("\nCarta 1:\n");                                       // Cabeçalho de exibição da carta 1
    printf("Estado: %c\n", Estado);                             // Exibe a letra do estado
    printf("Codigo da carta: %s\n", Cod_da_Carta);              // Exibe o código da carta
    printf("Nome da cidade: %s", nome_da_cidade);               // Exibe o nome da cidade
    printf("\nPopulacao: %d habitantes\n", populacao);          // Exibe a população com unidade
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos); // Exibe os pontos turísticos
    printf("Area: %.2f Km2\n", area);                           // Exibe a área com 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", PIB);                // Exibe o PIB com 2 casas decimais

    // -------------------------
    // Exibição dos dados da Carta 2
    // -------------------------

    printf("\nCarta 2:\n");                                        // Cabeçalho de exibição da carta 2
    printf("Estado: %c\n", Estado2);                               // Exibe a letra do estado
    printf("Codigo da carta: %s\n", Cod_da_Carta2);                // Exibe o código da carta
    printf("Nome da cidade: %s", nome_da_cidade2);                 // Exibe o nome da cidade
    printf("\nPopulacao: %d habitantes\n", populacao2);            // Exibe a população com unidade
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos2); // Exibe os pontos turísticos
    printf("Area: %.2f Km2\n", area2);                             // Exibe a área com 2 casas decimais
    printf("PIB: %.2f bilhoes de reais", PIB2);                    // Exibe o PIB com 2 casas decimais

    return 0; // Retorna 0 ao sistema operacional, indicando que o programa encerrou com sucesso
}
