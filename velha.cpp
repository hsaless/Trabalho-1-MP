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

int VerificaColuna ( int velha[3][3] )
{
	for (int j = 0; j < 3; j++){
		if (velha[0][j] == velha[1][j] && velha[1][j] == velha[2][j]){
			if (velha[0][j] == 1){
				return 1;
			}
			else if ( velha[0][j] == 2 ){
				return 2;
			}
		}
	}
	return 0;
}


int VerificaVelha( int velha[3][3] )
{
	int vencedor = VerificaColuna( velha );
	if( vencedor != 0 ){
		return vencedor;
	}
	return 0;
	
}


