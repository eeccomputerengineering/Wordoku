#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int i,j,y,z;
	char x;
	char pu[10][10];
	pu[0][0]='0';
	pu[0][1]='1';
	pu[0][2]='2';
	pu[0][3]='3';
	pu[0][4]='4';
	pu[0][5]='5';
	pu[0][6]='6';
	pu[0][7]='7';
	pu[0][8]='8';
	pu[0][9]='9';
	pu[1][0]='1';
	pu[1][1]='i';
	pu[1][2]='h';
	pu[1][3]='g';
	pu[1][4]='d';
	pu[1][5]='*';
	pu[1][6]='c';
	pu[1][7]='*';
	pu[1][8]='b';
	pu[1][9]='f';
	pu[2][0]='2';
	pu[2][1]='*';
	pu[2][2]='*';
	pu[2][3]='*';
	pu[2][4]='b';
	pu[2][5]='*';
	pu[2][6]='f';
	pu[2][7]='i';
	pu[2][8]='*';
	pu[2][9]='*';
	pu[3][0]='3';
	pu[3][1]='*';
	pu[3][2]='*';
	pu[3][3]='e';
	pu[3][4]='*';
	pu[3][5]='*';
	pu[3][6]='*';
	pu[3][7]='*';
	pu[3][8]='*';
	pu[3][9]='a';
	pu[4][0]='4';
	pu[4][1]='*';
	pu[4][2]='*';
	pu[4][3]='a';
	pu[4][4]='*';
	pu[4][5]='*';
	pu[4][6]='h';
	pu[4][7]='*';
	pu[4][8]='*';
	pu[4][9]='g';
	pu[5][0]='5';
	pu[5][1]='*';
	pu[5][2]='i';
	pu[5][3]='c';
	pu[5][4]='*';
	pu[5][5]='f';
	pu[5][6]='*';
	pu[5][7]='h';
	pu[5][8]='d';
	pu[5][9]='*';
	pu[6][0]='6';
	pu[6][1]='h';
	pu[6][2]='*';
	pu[6][3]='*';
	pu[6][4]='c';
	pu[6][5]='*';
	pu[6][6]='g';
	pu[6][7]='f';
	pu[6][8]='*';
	pu[6][9]='*';
	pu[7][0]='7';
	pu[7][1]='e';
	pu[7][2]='*';
	pu[7][3]='*';
	pu[7][4]='*';
	pu[7][5]='*';
	pu[7][6]='b';
	pu[7][7]='a';
	pu[7][8]='f';
	pu[7][9]='*';
	pu[8][0]='8';
	pu[8][1]='*';
	pu[8][2]='*';
	pu[8][3]='i';
	pu[8][4]='f';
	pu[8][5]='*';
	pu[8][6]='d';
	pu[8][7]='*';
	pu[8][8]='*';
	pu[8][9]='*';
	pu[9][0]='9';
	pu[9][1]='d';
	pu[9][2]='g';
	pu[9][3]='*';
	pu[9][4]='e';
	pu[9][5]='*';
	pu[9][6]='*';
	pu[9][7]='*';
	pu[9][8]='i';
	pu[9][9]='c';
	hi this is half

    printf(" 0   |   1    2    3   |   4    5    6   |   7    8    9   |   X\n");
    printf(" ---------------------------------------------------------------\n");
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%c \t",pu[i][j]);
			if(j==3||j==6)
			printf("|\t");

		}
		printf("\n\n");

	}

	printf("Enter the co-ordinate you want to enter the number:");
	scanf("%d %d",&y,&z);
	fflush(stdin);
	printf("Enter the alphabet:");
label:	scanf("%c", &x);
	 //for check column
	for(i=1;i<10;i++){
			if( z!=i){
				if(x!=pu[y][i]){
					continue;
				}
				else{
					fflush(stdin);
					printf("enter Valid alphabet");
					goto label;
				}
			}
		continue;
		}
		printf("\n");
	//for chek row
     for(i=1;i<10;i++){
     	if(y!=i){
     		if(x!=pu[i][z]){
     			continue;
			 }
			 else{
			 	printf("Enter valid alphabet");
			 	goto label;
			 }
		 }
		 continue;
	 }





	getch();
}
