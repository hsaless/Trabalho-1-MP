
/**
 * \brief Verifica o resultado do jogo.
 * \param velha Matriz representando o estado do jogo.
 * \return 2 se O ganhou, 1 se X ganhou, 0 se o jogo está empatado, -1 se o jogo está em um estado de resultado indeterminado, -2 se  0 se o jogo é impossível.
 */

int VerificaVelha(int velha[3][3]); 

/**
 * \brief Verifica se há vencedor na coluna.
 * \param velha Matriz representando o estado do jogo.
 * \return 1 se X venceu, 2 se O venceu, 0 se não há vencedor, -2 se ambos ganharem (jogo impossível).
 */

int verifica_coluna(int velha[3][3]);

/**
 * \brief Verifica se há vencedor na linha.
 * \param velha Matriz representando o estado do jogo.
 * \return 1 se X venceu, 2 se O venceu, 0 se não há vencedor, -2 se ambos ganharem (jogo impossível).
 */

int verifica_linha(int velha[3][3]);

/**
 * \brief Verifica se há vencedor na diagonal.
 * \param velha Matriz representando o estado do jogo.
 * \return 1 se X venceu, 2 se O venceu, 0 se não há vencedor.
 */

int verifica_diagonal(int velha[3][3]);

/**
 * \brief Verifica se o jogo está empatado.
 * \param velha Matriz representando o estado do jogo.
 * \return 1 se é empate, 0 se não há empate.
 */

int verifica_empate(int velha[3][3]);

/**
 * \brief Verifica se o jogo é impossível.
 * \param velha Matriz representando o estado do jogo.
 * \return 1 se é impossível, 0 se o jogo é possível.
 */

int verifica_impossivel(int velha[3][3]);