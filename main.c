#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	srand((unsigned)time(NULL));
	
	//opening
	printf("====================================================\n");
	printf("****************************************************\n");
	printf("                      BINGO GAME                    \n");
	printf("====================================================\n");
	printf("****************************************************\n");
	
	//game
	
	//initialize bingo board

		bingo_init();
		bingo_print();
		bingo_inputNum(5);
		bingo_print();
		bingo_inputNum(12);
		bingo_print();
		//bingo board print
		//print no. of copleted line
		//select a number
		//update the board status

	
	//ending
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("====================================================\n");
	printf("****************************************************\n");
	printf("                   CONGATURATION!                   \n");
	printf("                    BINGO!!!!!                      \n");
	printf("                    YOU WIN!!!                      \n");
	printf("****************************************************\n");
	printf("====================================================\n\n");
	return 0;
}
