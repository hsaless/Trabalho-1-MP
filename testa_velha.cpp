
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_NO_POSIX_SIGNALS
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
  


TEST_CASE( "Testa vitória de X por colunas", "[single-file]" ) {
	int teste1[3][3]= {   { 2, 0, 1 }, 
	                      { 2, 0, 1 },
						  { 0, 2, 1 }
					  };
    REQUIRE( VerificaVelha(teste1) == 1 );


} 

TEST_CASE( "Testa vitória de O por colunas", "[single-file]" ) {
	int teste2[3][3]= {   { 2, 0, 1 }, 
	                      { 2, 0, 1 },
						  { 2, 0, 0 }
					  };
    REQUIRE( VerificaVelha(teste2) == 2 );


}

TEST_CASE( "Testa vitória de X por linhas", "[single-file]" ) {
	int teste3[3][3]= {   { 1, 1, 1 }, 
	                      { 2, 0, 2 },
						  { 2, 0, 0 }
					  };
    REQUIRE( VerificaVelha(teste3) == 1 );


}
 
