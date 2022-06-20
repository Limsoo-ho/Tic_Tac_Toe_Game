#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};
int Win_check();
void Tic_Tac_Toe_Board();

int main(){
	system("color 0a");
	int player = 1, i ,choice;
	char mark; // #,&
	do {
		Tic_Tac_Toe_Board();
		player = (player % 2) ? 1 : 2;
		printf("\n\t\t\t\t\tPlayer %d: Enter Your Choice : ",player);
		scanf("%d",&choice);
		mark = (player == 1) ? '#' : '&';
		if(choice == 1 && square[1] == '1')
			square[1] = mark;
		else if(choice == 2 && square[2] == '2')
			square[2] = mark;
			else if(choice == 3 && square[3] == '3')
			square[3] = mark;
			else if(choice == 4 && square[4] == '4')
			square[4] = mark;
			else if(choice == 5 && square[5] == '5')
			square[5] = mark;
			else if(choice == 6 && square[6] == '6')
			square[6] = mark;
			else if(choice == 7 && square[7] == '7')
			square[7] = mark;
			else if(choice == 8 && square[8] == '8')
			square[8] = mark;
			else if(choice == 9 && square[9] == '9')
			square[9] = mark;
			
			else {
				printf("\n\t\t\t\t\t Invalid Key!!");
				printf("\n\t\t\t\t\t To continue the Game");
				printf("\n\t\t\t\t\t Please erase the invalid key & Enter valid key from 1 to 9");
				player--;
				getch();
			}
			i = Win_check();
			player++;	
		
	}while(i == -1);
	
	Tic_Tac_Toe_Board();
	if(i==1){
		printf("\n\t\t\t\t\tCongrats! Player %d , You won!!",--player);
	}
	else {
		printf("\n\t\t\t\t\tWell Played!, Game Drawn!");
	}
		getch();
		return 0;
}
int Win_check(){
	if(square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if(square[7] == square[8] && square[8] == square[9])
		return 1;
	else if(square[1] == square[4] && square[4] == square[7])
		return 1;
	else if(square[2] == square[5] && square[5] == square[8])
		return 1;
	else if(square[3] == square[6] && square[6] == square[9])
		return 1;
	else if(square[1] == square[5] && square[5] == square[9])
		return 1;
	else if(square[3] == square[5] && square[5] == square[7])
		return 1;
	else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] !='4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
		return 0;
	else 
		return -1;	
}

void Tic_Tac_Toe_Board(){
	system("cls");
	printf("\n\n\t\t\t\t\t      Tic Tac Toe \n\n");
	printf("\t\t\t\t\tPlayer1 (#) - Player2 (&) \n\n\n");
	printf("\t\t\t\t\t     |     |     \n");
	printf("\t\t\t\t\t  %c  |  %c  |  %c  \n",square[1],square[2],square[3]);
	printf("\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t     |     |     \n");
	printf("\t\t\t\t\t  %c  |  %c  |  %c  \n",square[4],square[5],square[6]);
	printf("\t\t\t\t\t_____|_____|_____\n");
	printf("\t\t\t\t\t     |     |     \n");
	printf("\t\t\t\t\t  %c  |  %c  |  %c  \n",square[7],square[8],square[9]);
	printf("\t\t\t\t\t     |     |     \n");		
}
