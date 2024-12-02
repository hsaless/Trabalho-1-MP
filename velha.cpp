/**
 * \file  velha.cpp
 */

 
#include "velha.hpp"

/** 
 * @brief verifica situacao do jogo da velha  
 * @author hsaless 
 * @param  velha descreve o parametro
 * 
 *  Descrever o que a funcao faz
 */ 



/**
 * \brief Verifica se há vencedor na coluna.
 * \param velha Matriz representando o estado do jogo.
 * \return 1 se X venceu, 2 se O venceu, 0 se não há vencedor.
 */

int verifica_coluna(int velha[3][3]) {
  for (int j = 0; j < 3; j++) {
    if (velha[0][j] == velha[1][j] && velha[1][j] == velha[2][j]) {
      if (velha[0][j] == 1) {
        return 1;  // X venceu
      } else if (velha[0][j] == 2) {
        return 2;  // O venceu
      }
    }
  }
  return 0; // Sem vencedor
}

/**
 * \brief Verifica se há vencedor na linha.
 * \param velha Matriz representando o estado do jogo.
 * \return 1 se X venceu, 2 se O venceu, 0 se não há vencedor.
 */

int verifica_linha(int velha[3][3]) {
  for (int i = 0; i < 3; i++) {
    if (velha[i][0] == velha[i][1] && velha[i][1] == velha[i][2]) {
      if (velha[i][0] == 1) {
        return 1;  // X venceu
      } else if (velha[i][0] == 2) {
        return 2;  // O venceu
      }      
    }
  }
  return 0;  // Sem vencedor
}

/**
 * \brief Verifica se há vencedor na diagonal.
 * \param velha Matriz representando o estado do jogo.
 * \return 1 se X venceu, 2 se O venceu, 0 se não há vencedor.
 */

int verifica_diagonal(int velha[3][3]) {
  if (velha[0][0] == velha[1][1] && velha[1][1] == velha[2][2]) {
    if (velha[0][0] == 1) {
      return 1;  // X venceu
    } else if (velha[0][0] == 2) {
      return 2;  // O venceu   
    }
  }
  if (velha[2][0] == velha[1][1] && velha[1][1] == velha[0][2]) {
    if (velha[0][2] == 1) {
      return 1;  // X venceu
    } else if (velha[0][2] == 2) {
      return 2;  // O venceu
    }
  }
  return 0;  // Sem vencedor
}

/**
 * \brief Verifica se o jogo está empatado.
 * \param velha Matriz representando o estado do jogo.
 * \return 1 se é empate, 0 se não há empate.
 */

int verifica_empate(int velha[3][3]) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (velha[i][j] == 0) {
        return 0;  // Sem empate 
      }
    }
  }
  return 1;  // Com empate
}

/**
 * \brief Verifica se o jogo é impossível.
 * \param velha Matriz representando o estado do jogo.
 * \return 1 se é impossível, 0 se o jogo é possível.
 */

int verifica_impossivel(int velha[3][3]) {
  int cont_x = 0, cont_o = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (velha[i][j] == 1) {
        cont_x++;
      } else if (velha[i][j] == 2) {
        cont_o++;
      }
    }
  }
  if (cont_x > cont_o + 1 || cont_o > cont_x + 1) {
    return 1;  // Jogo impossível
  }
  return 0;  // Jogo possível
}

int VerificaVelha(int velha[3][3]) {
  if (verifica_impossivel(velha)) {
    return -2;
  }
  int vencedor = verifica_coluna(velha);
  if (vencedor != 0) {
    return vencedor;
  }
  vencedor = verifica_linha(velha);
  if (vencedor !=  0) {
    return vencedor;
  }
  vencedor = verifica_diagonal(velha);
  if (vencedor != 0) {
    return vencedor;
  }
  if (verifica_empate(velha) != 0) {
    return 0;
  }
  return -1;
}






