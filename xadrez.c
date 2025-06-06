#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída para usar printf

// --- Funções Recursivas para Movimento das Peças ---

/**
 * @brief Simula o movimento da Torre recursivamente para a direita.
 *
 * @param casasRestantes O número de casas que a Torre ainda precisa mover.
 */
void moverTorreRecursivo(int casasRestantes) {
    // Caso base da recursão: se não há mais casas para mover, retorna.
    if (casasRestantes == 0) {
        return;
    }
    // Imprime a direção do movimento.
    printf("Direita\n");
    // Chama a função recursivamente para a próxima casa.
    moverTorreRecursivo(casasRestantes - 1);
}

/**
 * @brief Simula o movimento da Rainha recursivamente para a esquerda.
 *
 * @param casasRestantes O número de casas que a Rainha ainda precisa mover.
 */
void moverRainhaRecursivo(int casasRestantes) {
    // Caso base da recursão.
    if (casasRestantes == 0) {
        return;
    }
    // Imprime a direção do movimento.
    printf("Esquerda\n");
    // Chama a função recursivamente.
    moverRainhaRecursivo(casasRestantes - 1);
}

/**
 * @brief Simula o movimento do Bispo recursivamente na diagonal para cima e à direita.
 *
 * @param casasRestantes O número de casas que o Bispo ainda precisa mover.
 */
void moverBispoRecursivo(int casasRestantes) {
    // Caso base da recursão.
    if (casasRestantes == 0) {
        return;
    }
    // Imprime a direção do movimento diagonal.
    printf("Cima, Direita\n");
    // Chama a função recursivamente.
    moverBispoRecursivo(casasRestantes - 1);
}

int main() {
    // --- Simulação do movimento da Torre (usando recursividade) ---
    // A Torre move-se em linha reta horizontalmente ou verticalmente.
    // Simulação: 5 casas para a direita.
    printf("--- Movimento da Torre (5 casas para a direita - Recursivo) ---\n");
    moverTorreRecursivo(5); // Chama a função recursiva para a Torre
    printf("\n"); // Adiciona uma linha em branco para separar as simulações

    // --- Simulação do movimento da Rainha (usando recursividade) ---
    // A Rainha move-se em todas as direções.
    // Simulação: 8 casas para a esquerda.
    printf("--- Movimento da Rainha (8 casas para a esquerda - Recursivo) ---\n");
    moverRainhaRecursivo(8); // Chama a função recursiva para a Rainha
    printf("\n"); // Adiciona uma linha em branco para separar as simulações

    // --- Simulação do movimento do Bispo (usando recursividade) ---
    // O Bispo move-se na diagonal.
    // Simulação: 5 casas na diagonal para cima e à direita.
    printf("--- Movimento do Bispo (5 casas na diagonal para cima e a direita - Recursivo) ---\n");
    moverBispoRecursivo(5); // Chama a função recursiva para o Bispo
    printf("\n"); // Adiciona uma linha em branco para separar as simulações

    // --- Simulação do movimento do Bispo (usando loops aninhados) ---
    // O Bispo move-se na diagonal.
    // Simulação: 3 casas na diagonal para cima e à direita usando loops aninhados.
    // Loop externo para o movimento vertical, loop interno para o movimento horizontal.
    printf("--- Movimento do Bispo (3 casas na diagonal para cima e a direita - Loops Aninhados) ---\n");
    int totalCasasBispoAninhado = 3;
    for (int i = 0; i < totalCasasBispoAninhado; i++) { // Loop externo: controla o movimento vertical
        // Loop interno: controla o movimento horizontal (para cada passo vertical, há um passo horizontal)
        for (int j = 0; j < 1; j++) { // Apenas 1 passo horizontal por passo vertical para formar a diagonal
            printf("Cima, Direita\n"); // Imprime a direção do movimento diagonal
        }
    }
    printf("\n"); // Adiciona uma linha em branco para separar as simulações

    // --- Simulação do movimento do Cavalo (usando loops complexos aninhados) ---
    // O Cavalo move-se em "L": duas casas em uma direção (vertical ou horizontal)
    // e depois uma casa perpendicularmente.
    // Simulação: 2 casas para cima e 1 casa para a direita.
    printf("--- Movimento do Cavalo (2 casas para cima e 1 casa para a direita - Loops Complexos) ---\n");

    int movimentosVerticais = 2; // Número de casas verticais
    int movimentosHorizontais = 1; // Número de casas horizontais

    // Loop externo para os movimentos verticais (para cima)
    for (int i = 0; i < movimentosVerticais + movimentosHorizontais; i++) {
        // Verifica se ainda há movimentos verticais a serem feitos
        if (i < movimentosVerticais) {
            printf("Cima\n"); // Imprime o movimento para cima
            continue; // Continua para a próxima iteração do loop externo
        }

        // Se os movimentos verticais foram concluídos, começa os movimentos horizontais
        // Este if garante que o movimento horizontal seja feito apenas uma vez,
        // após os movimentos verticais, simulando o "L".
        if (movimentosHorizontais > 0) {
            printf("Direita\n"); // Imprime o movimento para a direita
            movimentosHorizontais--; // Decrementa para garantir que seja feito apenas uma vez
            // O 'break' aqui finaliza o loop após o movimento horizontal,
            // pois o movimento do cavalo é fixo (2+1).
            break;
        }
    }
    printf("\n"); // Adiciona uma linha em branco no final

    return 0; // Indica que o programa foi executado com sucesso
}
