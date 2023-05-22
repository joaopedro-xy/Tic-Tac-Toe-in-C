
#include <stdio.h>	
#include <stdlib.h>
#include <string.h>

jogo (char matriz[22][25]){
	int l, c;	
	for(l=0; l<22; l++){
		for(c=0; c<25; c++){																	//l=linhas, c=colunas.
	if (matriz[l][c]=='#'){
				printf("%c", matriz[l][c]);
			}else if (matriz[l][c]=='a'){ 
				printf(" ");
			}else{ 
				printf("%c", matriz[l][c]);
			}
		}
		printf("\n");
	}
}

int main (){
	int i, j, a, k, z;
	char matriz[22][25], nome1;
	for(i=0; i<22; i++){
		for(j=0; j<25; j++){
			if(j==7 || j==8 || j==16 || j==17){										//colocando # nas colunas do jogo.
				matriz[i][j] = '#';
			}else if(i==6 && j!=7 && j!=8 && j!=16 && j!=17){						//se linha=5, e colunas diferente de 5, 6, 12, 13 printar #.
				matriz[i][j] = '#';
			}else if(i==7 && j!=7 && j!=8 && j!=16 && j!=17){
				matriz[i][j] = '#';
			}else if(i==14 && j!=7 && j!=8 && j!=16 && j!=17){
				matriz[i][j] = '#';
			}else if(i==15 && j!=7 && j!=8 && j!=16 && j!=17){
				matriz[i][j] = '#';
			}else{																	//printar o vazio que esta atribuido na funçao como 'a'=vazio
				matriz[i][j]='a';
			}
		}
	}
	matriz[0][3] = '1';		
	matriz[0][12] = '2';
	matriz[0][21] = '3';
	matriz[8][3] = '4';
	matriz[8][12] = '5';															//marcando as posiçoes do jogo.
	matriz[8][21] = '6';
	matriz[16][3] = '7';
	matriz[16][12] = '8';
	matriz[16][21] = '9';
	
	jogo(matriz);																	//chamar a funçao. 
	
	char res, nome[15], nomi[15];
	int pos1, pos2, pos3, pos4, pos5, pos6, pos7, pos8, pos9;
	
	printf("\n");
	printf("\n");
	
	do{
	printf("Se voce deseja jogar contra seu amigo digite [s] ou se deseja jogar contra o computador digite [n].\n");
	fflush(stdin);
	scanf("%c", &res);
	
	if(res == 's'){																	//se usuario digitar s, ira jogar contra outra pessoa.
		fflush(stdin);
		printf("Jogador 1 digite seu primeiro nome: ");								//nome do jogador 1.		
		scanf("%s", nome);
		fflush(stdin);
		printf("Jogador 2 digite seu primeiro nome: ");								//nome do jogador 2.
		gets(nomi);
		fflush(stdin);
		printf("%s = X vs %s = O.\n", nome, nomi);									//jogador 1 = X  &  jogador 2 = O.
		
	do{	
		printf("%s escolha sua posicao ->  ", nome);								//Jogador 1 fazendo sua jogada.
		scanf("%d", &pos1);
		
		printf("\n");
		printf("\n");
		printf("\n");
	
			if(pos1 != 1 && pos1 != 2 && pos1 != 3 && pos1 != 4 && pos1 != 5 && pos1 != 6 && pos1 != 7 && pos1 != 8 && pos1 != 9){
				printf("Digite um numero entre 1 e 9\n");
				printf("\n");
			}else{
			
		if(pos1 == 1){
			matriz[1][1] = 'x';
			matriz[1][5] = 'x';
			matriz[2][2] = 'x';
			matriz[2][4] = 'x';
			matriz[3][3] = 'x';
			matriz[4][2] = 'x';
			matriz[4][4] = 'x';
			matriz[5][1] = 'x';
			matriz[5][5] = 'x';
		}else if(pos1 == 2){
			matriz[1][10] = 'x';
			matriz[1][14] = 'x';
			matriz[2][11] = 'x';
			matriz[2][13] = 'x';
			matriz[3][12] = 'x';
			matriz[4][11] = 'x';
			matriz[4][13] = 'x';
			matriz[5][10] = 'x';
			matriz[5][14] = 'x';
		}if(pos1 == 3){
			matriz[1][19] = 'x';
			matriz[1][23] = 'x';
			matriz[2][20] = 'x';
			matriz[2][22] = 'x';
			matriz[3][21] = 'x';
			matriz[4][20] = 'x';
			matriz[4][22] = 'x';
			matriz[5][19] = 'x';
			matriz[5][23] = 'x';
		}else if(pos1 == 4){
			matriz[9][1] = 'x';
			matriz[9][5] = 'x';
			matriz[10][2] = 'x';
			matriz[10][4] = 'x';
			matriz[11][3] = 'x';
			matriz[12][2] = 'x';
			matriz[12][4] = 'x';
			matriz[13][1] = 'x';
			matriz[13][5] = 'x';
		}if(pos1 == 5){
			matriz[9][10] = 'x';
			matriz[9][14] = 'x';
			matriz[10][11] = 'x';
			matriz[10][13] = 'x';
			matriz[11][12] = 'x';
			matriz[12][11] = 'x';
			matriz[12][13] = 'x';
			matriz[13][10] = 'x';
			matriz[13][14] = 'x';
		}else if(pos1 == 6){
			matriz[9][19] = 'x';
			matriz[9][23] = 'x';
			matriz[10][20] = 'x';
			matriz[10][22] = 'x';
			matriz[11][21] = 'x';
			matriz[12][20] = 'x';
			matriz[12][22] = 'x';
			matriz[13][19] = 'x';
			matriz[13][23] = 'x';
		}if(pos1 == 7){
			matriz[17][1] = 'x';
			matriz[17][5] = 'x';
			matriz[18][2] = 'x';
			matriz[18][4] = 'x';
			matriz[19][3] = 'x';
			matriz[20][2] = 'x';
			matriz[20][4] = 'x';
			matriz[21][1] = 'x';
			matriz[21][5] = 'x';
		}else if(pos1 == 8){
			matriz[17][10] = 'x';
			matriz[17][14] = 'x';
			matriz[18][11] = 'x';
			matriz[18][13] = 'x';
			matriz[19][12] = 'x';
			matriz[20][11] = 'x';
			matriz[20][13] = 'x';
			matriz[21][10] = 'x';
			matriz[21][14] = 'x';
		}if(pos1 == 9){
			matriz[17][19] = 'x';
			matriz[17][23] = 'x';
			matriz[18][20] = 'x';
			matriz[18][22] = 'x';
			matriz[19][21] = 'x';
			matriz[20][20] = 'x';
			matriz[20][22] = 'x';
			matriz[21][19] = 'x';
			matriz[21][23] = 'x';
		}
					}
		jogo(matriz);
				}while(pos1 != 1 && pos1 != 2 && pos1 != 3 && pos1 != 4 && pos1 != 5 && pos1 != 6 && pos1 != 7 && pos1 != 8 && pos1 != 9);
		printf("\n");
		printf("\n");
		printf("\n");
		
		do{
		do{
			printf("%s escolha sua posicao ->  ", nomi);								//Jogador 2 fazendo sua jogada.
			scanf("%d", &pos2);
			
				if(pos2 != 1 && pos2 != 2 && pos2 != 3 && pos2 != 4 && pos2 != 5 && pos2 != 6 && pos2 != 7 && pos2 != 8 && pos2 != 9){
					printf("Digite um numero entre 1 e 9\n");
				}else{
		
				if(pos2 == pos1){
					printf("%s ESTA CASA JA FOI MARCADA\n", nomi);
				}else{
		
		printf("\n");
		printf("\n");
		printf("\n");
		
		if(pos2 == 1){
			matriz[1][2] = 'o';
			matriz[1][3] = 'o';
			matriz[1][4] = 'o';
			matriz[2][1] = 'o';
			matriz[2][5] = 'o';
			matriz[3][1] = 'o';
			matriz[3][5] = 'o';
			matriz[4][1] = 'o';
			matriz[4][5] = 'o';
			matriz[5][2] = 'o';
			matriz[5][3] = 'o';
			matriz[5][4] = 'o';
		}else if(pos2 == 2){
			matriz[1][11] = 'o';
			matriz[1][12] = 'o';
			matriz[1][13] = 'o';
			matriz[2][10] = 'o';
			matriz[2][14] = 'o';
			matriz[3][10] = 'o';
			matriz[3][14] = 'o';
			matriz[4][10] = 'o';
			matriz[4][14] = 'o';
			matriz[5][11] = 'o';
			matriz[5][12] = 'o';
			matriz[5][13] = 'o';
		}if(pos2 == 3){
			matriz[1][20] = 'o';
			matriz[1][21] = 'o';
			matriz[1][22] = 'o';
			matriz[2][19] = 'o';
			matriz[2][23] = 'o';
			matriz[3][19] = 'o';
			matriz[3][23] = 'o';
			matriz[4][19] = 'o';
			matriz[4][23] = 'o';
			matriz[5][20] = 'o';
			matriz[5][21] = 'o';
			matriz[5][22] = 'o';
		}else if(pos2 == 4){
			matriz[9][2] = 'o';
			matriz[9][3] = 'o';
			matriz[9][4] = 'o';
			matriz[10][1] = 'o';
			matriz[10][5] = 'o';
			matriz[11][1] = 'o';
			matriz[11][5] = 'o';
			matriz[12][1] = 'o';
			matriz[12][5] = 'o';
			matriz[13][2] = 'o';
			matriz[13][3] = 'o';
			matriz[13][4] = 'o';
		}if(pos2 == 5){
			matriz[9][11] = 'o';
			matriz[9][12] = 'o';
			matriz[9][13] = 'o';
			matriz[10][10] = 'o';
			matriz[10][14] = 'o';
			matriz[11][10] = 'o';
			matriz[11][14] = 'o';
			matriz[12][10] = 'o';
			matriz[12][14] = 'o';
			matriz[13][11] = 'o';
			matriz[13][12] = 'o';
			matriz[13][13] = 'o';
		}else if(pos2 == 6){
			matriz[9][20] = 'o';
			matriz[9][21] = 'o';
			matriz[9][22] = 'o';
			matriz[10][19] = 'o';
			matriz[10][23] = 'o';
			matriz[11][19] = 'o';
			matriz[11][23] = 'o';
			matriz[12][19] = 'o';
			matriz[12][23] = 'o';
			matriz[13][20] = 'o';
			matriz[13][21] = 'o';
			matriz[13][22] = 'o';
		}if(pos2 == 7){
			matriz[17][2] = 'o';
			matriz[17][3] = 'o';
			matriz[17][4] = 'o';
			matriz[18][1] = 'o';
			matriz[18][5] = 'o';
			matriz[19][1] = 'o';
			matriz[19][5] = 'o';
			matriz[20][1] = 'o';
			matriz[20][5] = 'o';
			matriz[21][2] = 'o';
			matriz[21][3] = 'o';
			matriz[21][4] = 'o';
		}else if(pos2 == 8){
			matriz[17][11] = 'o';
			matriz[17][12] = 'o';
			matriz[17][13] = 'o';
			matriz[18][10] = 'o';
			matriz[18][14] = 'o';
			matriz[19][10] = 'o';
			matriz[19][14] = 'o';
			matriz[20][10] = 'o';
			matriz[20][14] = 'o';
			matriz[21][11] = 'o';
			matriz[21][12] = 'o';
			matriz[21][13] = 'o';
		}if(pos2 == 9){
			matriz[17][20] = 'o';
			matriz[17][21] = 'o';
			matriz[17][22] = 'o';
			matriz[18][19] = 'o';
			matriz[18][23] = 'o';
			matriz[19][19] = 'o';
			matriz[19][23] = 'o';
			matriz[20][19] = 'o';
			matriz[20][23] = 'o';
			matriz[21][20] = 'o';
			matriz[21][21] = 'o';
			matriz[21][22] = 'o';
		}
				}
		jogo(matriz);
				}
		}while(pos2 == pos1);
		}while(pos2 != 1 && pos2 != 2 && pos2 != 3 && pos2 != 4 && pos2 != 5 && pos2 != 6 && pos2 != 7 && pos2 != 8 && pos2 != 9);
		
		printf("\n");
		printf("\n");
		printf("\n");
		
		do{
		do{
			printf("%s escolha sua posicao ->  ", nome);								//Jogador 1 fazendo sua jogada.
			scanf("%d", &pos3);
			
			if(pos3 != 1 && pos3 != 2 && pos3 != 3 && pos3 != 4 && pos3 != 5 && pos3 != 6 && pos3 != 7 && pos3 != 8 && pos3 != 9){
					printf("Digite um numero entre 1 e 9\n");
				}else{
		
			if(pos3 == pos1 || pos3 == pos2){
					printf("%s ESTA CASA JA FOI MARCADA\n", nome);
					printf("\n");
			}else{
		
		printf("\n");
		printf("\n");
		printf("\n");
		
		if(pos3 == 1){
			matriz[1][1] = 'x';
			matriz[1][5] = 'x';
			matriz[2][2] = 'x';
			matriz[2][4] = 'x';
			matriz[3][3] = 'x';
			matriz[4][2] = 'x';
			matriz[4][4] = 'x';
			matriz[5][1] = 'x';
			matriz[5][5] = 'x';
		}else if(pos3 ==2){
			matriz[1][10] = 'x';
			matriz[1][14] = 'x';
			matriz[2][11] = 'x';
			matriz[2][13] = 'x';
			matriz[3][12] = 'x';
			matriz[4][11] = 'x';
			matriz[4][13] = 'x';
			matriz[5][10] = 'x';
			matriz[5][14] = 'x';
		}if(pos3 == 3){
			matriz[1][19] = 'x';
			matriz[1][23] = 'x';
			matriz[2][20] = 'x';
			matriz[2][22] = 'x';
			matriz[3][21] = 'x';
			matriz[4][20] = 'x';
			matriz[4][22] = 'x';
			matriz[5][19] = 'x';
			matriz[5][23] = 'x';
		}else if(pos3 == 4){
			matriz[9][1] = 'x';
			matriz[9][5] = 'x';
			matriz[10][2] = 'x';
			matriz[10][4] = 'x';
			matriz[11][3] = 'x';
			matriz[12][2] = 'x';
			matriz[12][4] = 'x';
			matriz[13][1] = 'x';
			matriz[13][5] = 'x';
		}if(pos3 == 5){
			matriz[9][10] = 'x';
			matriz[9][14] = 'x';
			matriz[10][11] = 'x';
			matriz[10][13] = 'x';
			matriz[11][12] = 'x';
			matriz[12][11] = 'x';
			matriz[12][13] = 'x';
			matriz[13][10] = 'x';
			matriz[13][14] = 'x';
		}else if(pos3 == 6){
			matriz[9][19] = 'x';
			matriz[9][23] = 'x';
			matriz[10][20] = 'x';
			matriz[10][22] = 'x';
			matriz[11][21] = 'x';
			matriz[12][20] = 'x';
			matriz[12][22] = 'x';
			matriz[13][19] = 'x';
			matriz[13][23] = 'x';
		}if(pos3 == 7){
			matriz[17][1] = 'x';
			matriz[17][5] = 'x';
			matriz[18][2] = 'x';
			matriz[18][4] = 'x';
			matriz[19][3] = 'x';
			matriz[20][2] = 'x';
			matriz[20][4] = 'x';
			matriz[21][1] = 'x';
			matriz[21][5] = 'x';
		}else if(pos3 == 8){
			matriz[17][10] = 'x';
			matriz[17][14] = 'x';
			matriz[18][11] = 'x';
			matriz[18][13] = 'x';
			matriz[19][12] = 'x';
			matriz[20][11] = 'x';
			matriz[20][13] = 'x';
			matriz[21][10] = 'x';
			matriz[21][14] = 'x';
		}if(pos3 == 9){
			matriz[17][19] = 'x';
			matriz[17][23] = 'x';
			matriz[18][20] = 'x';
			matriz[18][22] = 'x';
			matriz[19][21] = 'x';
			matriz[20][20] = 'x';
			matriz[20][22] = 'x';
			matriz[21][19] = 'x';
			matriz[21][23] = 'x';
		}
				}
				}
		jogo(matriz);
			}while(pos3 == pos1 || pos3 == pos2);
			}while(pos3 != 1 && pos3 != 2 && pos3 != 3 && pos3 != 4 && pos3 != 5 && pos3 != 6 && pos3 != 7 && pos3 != 8 && pos3 != 9);

		printf("\n");
		printf("\n");
		printf("\n");
		
		do{
		do{
			printf("%s escolha sua posicao ->  ", nomi);								//Jogador 2 fazendo sua jogada.
			scanf("%d", &pos4);
			
				if(pos4 != 1 && pos4 != 2 && pos4 != 3 && pos4 != 4 && pos4 != 5 && pos4 != 6 && pos4 != 7 && pos4 != 8 && pos4 != 9){
					printf("Digite um numero entre 1 e 9\n");
				}else{
		
				if(pos4 == pos1 || pos4 == pos2 || pos4 == pos3){
					printf("%s ESTA CASA JA FOI MARCADA\n", nomi);
					printf("\n");
				}else{
		
		printf("\n");
		printf("\n");
		printf("\n");
		
		if(pos4 == 1){
			matriz[1][2] = 'o';
			matriz[1][3] = 'o';
			matriz[1][4] = 'o';
			matriz[2][1] = 'o';
			matriz[2][5] = 'o';
			matriz[3][1] = 'o';
			matriz[3][5] = 'o';
			matriz[4][1] = 'o';
			matriz[4][5] = 'o';
			matriz[5][2] = 'o';
			matriz[5][3] = 'o';
			matriz[5][4] = 'o';
		}else if(pos4 == 2){
			matriz[1][11] = 'o';
			matriz[1][12] = 'o';
			matriz[1][13] = 'o';
			matriz[2][10] = 'o';
			matriz[2][14] = 'o';
			matriz[3][10] = 'o';
			matriz[3][14] = 'o';
			matriz[4][10] = 'o';
			matriz[4][14] = 'o';
			matriz[5][11] = 'o';
			matriz[5][12] = 'o';
			matriz[5][13] = 'o';
		}if(pos4 == 3){
			matriz[1][20] = 'o';
			matriz[1][21] = 'o';
			matriz[1][22] = 'o';
			matriz[2][19] = 'o';
			matriz[2][23] = 'o';
			matriz[3][19] = 'o';
			matriz[3][23] = 'o';
			matriz[4][19] = 'o';
			matriz[4][23] = 'o';
			matriz[5][20] = 'o';
			matriz[5][21] = 'o';
			matriz[5][22] = 'o';
		}else if(pos4 == 4){
			matriz[9][2] = 'o';
			matriz[9][3] = 'o';
			matriz[9][4] = 'o';
			matriz[10][1] = 'o';
			matriz[10][5] = 'o';
			matriz[11][1] = 'o';
			matriz[11][5] = 'o';
			matriz[12][1] = 'o';
			matriz[12][5] = 'o';
			matriz[13][2] = 'o';
			matriz[13][3] = 'o';
			matriz[13][4] = 'o';
		}if(pos4 == 5){
			matriz[9][11] = 'o';
			matriz[9][12] = 'o';
			matriz[9][13] = 'o';
			matriz[10][10] = 'o';
			matriz[10][14] = 'o';
			matriz[11][10] = 'o';
			matriz[11][14] = 'o';
			matriz[12][10] = 'o';
			matriz[12][14] = 'o';
			matriz[13][11] = 'o';
			matriz[13][12] = 'o';
			matriz[13][13] = 'o';
		}else if(pos4 == 6){
			matriz[9][20] = 'o';
			matriz[9][21] = 'o';
			matriz[9][22] = 'o';
			matriz[10][19] = 'o';
			matriz[10][23] = 'o';
			matriz[11][19] = 'o';
			matriz[11][23] = 'o';
			matriz[12][19] = 'o';
			matriz[12][23] = 'o';
			matriz[13][20] = 'o';
			matriz[13][21] = 'o';
			matriz[13][22] = 'o';
		}if(pos4 == 7){
			matriz[17][2] = 'o';
			matriz[17][3] = 'o';
			matriz[17][4] = 'o';
			matriz[18][1] = 'o';
			matriz[18][5] = 'o';
			matriz[19][1] = 'o';
			matriz[19][5] = 'o';
			matriz[20][1] = 'o';
			matriz[20][5] = 'o';
			matriz[21][2] = 'o';
			matriz[21][3] = 'o';
			matriz[21][4] = 'o';
		}else if(pos4 ==8){
			matriz[17][11] = 'o';
			matriz[17][12] = 'o';
			matriz[17][13] = 'o';
			matriz[18][10] = 'o';
			matriz[18][14] = 'o';
			matriz[19][10] = 'o';
			matriz[19][14] = 'o';
			matriz[20][10] = 'o';
			matriz[20][14] = 'o';
			matriz[21][11] = 'o';
			matriz[21][12] = 'o';
			matriz[21][13] = 'o';
		}if(pos4 == 9){
			matriz[17][20] = 'o';
			matriz[17][21] = 'o';
			matriz[17][22] = 'o';
			matriz[18][19] = 'o';
			matriz[18][23] = 'o';
			matriz[19][19] = 'o';
			matriz[19][23] = 'o';
			matriz[20][19] = 'o';
			matriz[20][23] = 'o';
			matriz[21][20] = 'o';
			matriz[21][21] = 'o';
			matriz[21][22] = 'o';
		}
				}
				}
		jogo(matriz);
			}while(pos4 == pos1 || pos4 == pos2 || pos4 == pos3);
			}while(pos4 != 1 && pos4 != 2 && pos4 != 3 && pos4 != 4 && pos4 != 5 && pos4 != 6 && pos4 != 7 && pos4 != 8 && pos4 != 9);
		
		printf("\n");
		printf("\n");
		printf("\n");
		
		do{
		do{
			printf("%s escolha sua posicao ->  ", nome);								//Jogador 1 fazendo sua jogada
			scanf("%d", &pos5);
			
				if(pos5 != 1 && pos5 != 2 && pos5 != 3 && pos5 != 4 && pos5 != 5 && pos5 != 6 && pos5 != 7 && pos5 != 8 && pos5 != 9){
					printf("Digite um numero entre 1 e 9\n");
				}else{
		
				if(pos5 == pos1 || pos5 == pos2 || pos5 == pos3 || pos5 == pos4){
					printf("%s ESTA CASA JA FOI MARCADA\n", nome);
					printf("\n");
				}else{
		
		printf("\n");
		printf("\n");
		printf("\n");
		
		if(pos5 == 1){
			matriz[1][1] = 'x';
			matriz[1][5] = 'x';
			matriz[2][2] = 'x';
			matriz[2][4] = 'x';
			matriz[3][3] = 'x';
			matriz[4][2] = 'x';
			matriz[4][4] = 'x';
			matriz[5][1] = 'x';
			matriz[5][5] = 'x';
		}else if(pos5 ==2){
			matriz[1][10] = 'x';
			matriz[1][14] = 'x';
			matriz[2][11] = 'x';
			matriz[2][13] = 'x';
			matriz[3][12] = 'x';
			matriz[4][11] = 'x';
			matriz[4][13] = 'x';
			matriz[5][10] = 'x';
			matriz[5][14] = 'x';
		}if(pos5 == 3){
			matriz[1][19] = 'x';
			matriz[1][23] = 'x';
			matriz[2][20] = 'x';
			matriz[2][22] = 'x';
			matriz[3][21] = 'x';
			matriz[4][20] = 'x';
			matriz[4][22] = 'x';
			matriz[5][19] = 'x';
			matriz[5][23] = 'x';
		}else if(pos5 == 4){
			matriz[9][1] = 'x';
			matriz[9][5] = 'x';
			matriz[10][2] = 'x';
			matriz[10][4] = 'x';
			matriz[11][3] = 'x';
			matriz[12][2] = 'x';
			matriz[12][4] = 'x';
			matriz[13][1] = 'x';
			matriz[13][5] = 'x';
		}if(pos5 == 5){
			matriz[9][10] = 'x';
			matriz[9][14] = 'x';
			matriz[10][11] = 'x';
			matriz[10][13] = 'x';
			matriz[11][12] = 'x';
			matriz[12][11] = 'x';
			matriz[12][13] = 'x';
			matriz[13][10] = 'x';
			matriz[13][14] = 'x';
		}else if(pos5 == 6){
			matriz[9][19] = 'x';
			matriz[9][23] = 'x';
			matriz[10][20] = 'x';
			matriz[10][22] = 'x';
			matriz[11][21] = 'x';
			matriz[12][20] = 'x';
			matriz[12][22] = 'x';
			matriz[13][19] = 'x';
			matriz[13][23] = 'x';
		}if(pos5 == 7){
			matriz[17][1] = 'x';
			matriz[17][5] = 'x';
			matriz[18][2] = 'x';
			matriz[18][4] = 'x';
			matriz[19][3] = 'x';
			matriz[20][2] = 'x';
			matriz[20][4] = 'x';
			matriz[21][1] = 'x';
			matriz[21][5] = 'x';
		}else if(pos5 == 8){
			matriz[17][10] = 'x';
			matriz[17][14] = 'x';
			matriz[18][11] = 'x';
			matriz[18][13] = 'x';
			matriz[19][12] = 'x';
			matriz[20][11] = 'x';
			matriz[20][13] = 'x';
			matriz[21][10] = 'x';
			matriz[21][14] = 'x';
		}if(pos5 == 9){
			matriz[17][19] = 'x';
			matriz[17][23] = 'x';
			matriz[18][20] = 'x';
			matriz[18][22] = 'x';
			matriz[19][21] = 'x';
			matriz[20][20] = 'x';
			matriz[20][22] = 'x';
			matriz[21][19] = 'x';
			matriz[21][23] = 'x';
		}
				}
				}
		jogo(matriz);
			}while(pos5 == pos1 || pos5 == pos2 || pos5 == pos3 || pos5 == pos4);
			}while(pos5 != 1 && pos5 != 2 && pos5 != 3 && pos5 != 4 && pos5 != 5 && pos5 != 6 && pos5 != 7 && pos5 != 8 && pos5 != 9);
	
		printf("\n");
		printf("\n");
		printf("\n");
		
		//pos1, pos3, pos5.															//posiçoes de vitoria para jogador 1.
			if(pos1 == 1 && pos3 == 2 && pos5 == 3){
				printf("%s venceu!\n", nome);break;	
			}else if(pos1 == 1 && pos3 == 3 && pos5 == 2){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 2 && pos3 == 1 && pos5 == 3){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 2 && pos3 == 3 && pos5 == 1){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 3 && pos3 == 1 && pos5 == 2){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 3 && pos3 == 2 && pos5 == 1){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 4 && pos3 == 5 && pos5 ==6){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 4 && pos3 == 6 && pos5 == 5){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 5 && pos3 == 4 && pos5 == 6){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 5 && pos3 == 6 && pos5 == 4){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 6 && pos3 == 4 && pos5 == 5){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 6 && pos3 == 5 && pos5 == 4){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 7 && pos3 == 8 && pos5 == 9){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 7 && pos3 == 9 && pos5 == 8){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 8 && pos3 == 7 && pos5 == 9){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 8 && pos3 == 9 && pos5 == 7){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 9 && pos3 == 7 && pos5 == 8){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 9 && pos3 == 8 && pos5 == 7){
				printf("%s venceu!\n", nome);break;	
			}if(pos1 == 1 && pos3 == 5 && pos5 == 9){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 1 && pos3 == 9 && pos5 == 5){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 5 && pos3 == 1 && pos5 == 9){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 5 && pos3 == 9 && pos5 == 1){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 9 && pos3 == 1 && pos5 == 5){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 9 && pos3 == 5 && pos5 == 1){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 3 && pos3 == 5 && pos5 == 7){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 3 && pos3 == 7 && pos5 == 5){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 5 && pos3 == 3 && pos5 == 7){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 5 && pos3 == 7 && pos5 == 3){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 7 && pos3 == 5 && pos5 == 3){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 7 && pos3 == 3 && pos5 == 5){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 1 && pos3 == 4 && pos5 == 7){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 1 && pos3 == 7 && pos5 == 4){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 4 && pos3 == 1 && pos5 == 7){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 4 && pos3 == 7 && pos5 == 1){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 7 && pos3 == 4 && pos5 == 1){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 7 && pos3 == 1 && pos5 == 4){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 2 && pos3 == 5 && pos5 == 8){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 2 && pos3 == 8 && pos5 == 5){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 5 && pos3 == 2 && pos5 == 8){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 5 && pos3 == 8 && pos5 == 2){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 8 && pos3 == 5 && pos5 == 2){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 8 && pos3 == 2 && pos5 == 5){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 3 && pos3 == 6 && pos5 == 9){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 3 && pos3 == 9 && pos5 == 6){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 6 && pos3 == 3 && pos5 == 9){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 6 && pos3 == 9 && pos5 == 3){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 9 && pos3 == 6 && pos5 == 3){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 9 && pos3 == 3 && pos5 == 6){
				printf("%s venceu!\n", nome);break;
			}
		do{
		do{
			printf("%s escolha sua posicao ->  ", nomi);								//Jogador 2 fazendo sua jogada.
			scanf("%d", &pos6);
			
				if(pos6 != 1 && pos6 != 2 && pos6 != 3 && pos6 != 4 && pos6 != 5 && pos6 != 6 && pos6 != 7 && pos6 != 8 && pos6 != 9){
					printf("Digite um numero entre 1 e 9\n");
				}else{
		
				if(pos6 == pos1 || pos6 == pos2 || pos6 == pos3 || pos6 == pos4 || pos6 == pos5){
					printf("%s ESTA CASA JA FOI MARCADA\n", nomi);
					printf("\n");
				}else{
		
		printf("\n");
		printf("\n");
		printf("\n");
		
		if(pos6 == 1){
			matriz[1][2] = 'o';
			matriz[1][3] = 'o';
			matriz[1][4] = 'o';
			matriz[2][1] = 'o';
			matriz[2][5] = 'o';
			matriz[3][1] = 'o';
			matriz[3][5] = 'o';
			matriz[4][1] = 'o';
			matriz[4][5] = 'o';
			matriz[5][2] = 'o';
			matriz[5][3] = 'o';
			matriz[5][4] = 'o';
		}else if(pos6 == 2){
			matriz[1][11] = 'o';
			matriz[1][12] = 'o';
			matriz[1][13] = 'o';
			matriz[2][10] = 'o';
			matriz[2][14] = 'o';
			matriz[3][10] = 'o';
			matriz[3][14] = 'o';
			matriz[4][10] = 'o';
			matriz[4][14] = 'o';
			matriz[5][11] = 'o';
			matriz[5][12] = 'o';
			matriz[5][13] = 'o';
		}if(pos6 == 3){
			matriz[1][20] = 'o';
			matriz[1][21] = 'o';
			matriz[1][22] = 'o';
			matriz[2][19] = 'o';
			matriz[2][23] = 'o';
			matriz[3][19] = 'o';
			matriz[3][23] = 'o';
			matriz[4][19] = 'o';
			matriz[4][23] = 'o';
			matriz[5][20] = 'o';
			matriz[5][21] = 'o';
			matriz[5][22] = 'o';
		}else if(pos6 == 4){
			matriz[9][2] = 'o';
			matriz[9][3] = 'o';
			matriz[9][4] = 'o';
			matriz[10][1] = 'o';
			matriz[10][5] = 'o';
			matriz[11][1] = 'o';
			matriz[11][5] = 'o';
			matriz[12][1] = 'o';
			matriz[12][5] = 'o';
			matriz[13][2] = 'o';
			matriz[13][3] = 'o';
			matriz[13][4] = 'o';
		}if(pos6 == 5){
			matriz[9][11] = 'o';
			matriz[9][12] = 'o';
			matriz[9][13] = 'o';
			matriz[10][10] = 'o';
			matriz[10][14] = 'o';
			matriz[11][10] = 'o';
			matriz[11][14] = 'o';
			matriz[12][10] = 'o';
			matriz[12][14] = 'o';
			matriz[13][11] = 'o';
			matriz[13][12] = 'o';
			matriz[13][13] = 'o';
		}else if(pos6 == 6){
			matriz[9][20] = 'o';
			matriz[9][21] = 'o';
			matriz[9][22] = 'o';
			matriz[10][19] = 'o';
			matriz[10][23] = 'o';
			matriz[11][19] = 'o';
			matriz[11][23] = 'o';
			matriz[12][19] = 'o';
			matriz[12][23] = 'o';
			matriz[13][20] = 'o';
			matriz[13][21] = 'o';
			matriz[13][22] = 'o';
		}if(pos6 == 7){
			matriz[17][2] = 'o';
			matriz[17][3] = 'o';
			matriz[17][4] = 'o';
			matriz[18][1] = 'o';
			matriz[18][5] = 'o';
			matriz[19][1] = 'o';
			matriz[19][5] = 'o';
			matriz[20][1] = 'o';
			matriz[20][5] = 'o';
			matriz[21][2] = 'o';
			matriz[21][3] = 'o';
			matriz[21][4] = 'o';
		}else if(pos6 == 8){
			matriz[17][11] = 'o';
			matriz[17][12] = 'o';
			matriz[17][13] = 'o';
			matriz[18][10] = 'o';
			matriz[18][14] = 'o';
			matriz[19][10] = 'o';
			matriz[19][14] = 'o';
			matriz[20][10] = 'o';
			matriz[20][14] = 'o';
			matriz[21][11] = 'o';
			matriz[21][12] = 'o';
			matriz[21][13] = 'o';
		}if(pos6 == 9){
			matriz[17][20] = 'o';
			matriz[17][21] = 'o';
			matriz[17][22] = 'o';
			matriz[18][19] = 'o';
			matriz[18][23] = 'o';
			matriz[19][19] = 'o';
			matriz[19][23] = 'o';
			matriz[20][19] = 'o';
			matriz[20][23] = 'o';
			matriz[21][20] = 'o';
			matriz[21][21] = 'o';
			matriz[21][22] = 'o';
		}
				}
				}
		jogo(matriz);
			}while(pos6 == pos1 || pos6 == pos2 || pos6 == pos3 || pos6 == pos4 || pos6 == pos5);
			}while(pos6 != 1 && pos6 != 2 && pos6 != 3 && pos6 != 4 && pos6 != 5 && pos6 != 6 && pos6 != 7 && pos6 != 8 && pos6 != 9);
		
		printf("\n");
		printf("\n");
		printf("\n");
		
		//pos2, pos4, pos6.															//posiçoes de vitoria para jogador 2.
		if(pos2 == 1 && pos4 == 2 && pos6 == 3){
			printf("%s venceu!\n", nomi);break;	
		}else if(pos2 == 1 && pos4 == 3 && pos6 == 2){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 2 && pos4 == 1 && pos6 == 3){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 2 && pos4 == 3 && pos6 == 1){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 3 && pos4 == 1 && pos6 == 2){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 3 && pos4 == 2 && pos6 == 1){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 4 && pos4 == 5 && pos6 ==6){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 4 && pos4 == 6 && pos6 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 5 && pos4 == 4 && pos6 == 6){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos4 == 6 && pos6 == 4){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 6 && pos4 == 4 && pos6 == 5){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 6 && pos4 == 5 && pos6 == 4){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 7 && pos4 == 8 && pos6 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 7 && pos4 == 9 && pos6 == 8){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 8 && pos4 == 7 && pos6 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 8 && pos4 == 9 && pos6 == 7){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 9 && pos4 == 7 && pos6 == 8){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 9 && pos4 == 8 && pos6 == 7){
			printf("%s venceu!\n", nomi);break;	
		}if(pos2 == 1 && pos4 == 5 && pos6 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 1 && pos4 == 9 && pos6 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 5 && pos4 == 1 && pos6 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos4 == 9 && pos6 == 1){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 9 && pos4 == 1 && pos6 == 5){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 9 && pos4 == 5 && pos6 == 1){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 3 && pos4 == 5 && pos6 == 7){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 3 && pos4 == 7 && pos6 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 5 && pos4 == 3 && pos6 == 7){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos4 == 7 && pos6 == 3){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 7 && pos4 == 5 && pos6 == 3){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 7 && pos4 == 3 && pos6 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 1 && pos4 == 4 && pos6 == 7){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 1 && pos4 == 7 && pos6 == 4){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 4 && pos4 == 1 && pos6 == 7){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 4 && pos4 == 7 && pos6 == 1){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 7 && pos4 == 4 && pos6 == 1){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 7 && pos4 == 1 && pos6 == 4){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 2 && pos4 == 5 && pos6 == 8){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 2 && pos4 == 8 && pos6 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 5 && pos4 == 2 && pos6 == 8){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos4 == 8 && pos6 == 2){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 8 && pos4 == 5 && pos6 == 2){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 8 && pos4 == 2 && pos6 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 3 && pos4 == 6 && pos6 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 3 && pos4 == 9 && pos6 == 6){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 6 && pos4 == 3 && pos6 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 6 && pos4 == 9 && pos6 == 3){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 9 && pos4 == 6 && pos6 == 3){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 9 && pos4 == 3 && pos6 == 6){
			printf("%s venceu!\n", nomi);break;
		}
		do{
		do{
			printf("%s escolha sua posicao ->  ", nome);								//Jogador 1 fazendo sua jogada
			scanf("%d", &pos7);
			
				if(pos7 != 1 && pos7 != 2 && pos7 != 3 && pos7 != 4 && pos7 != 5 && pos7 != 6 && pos7 != 7 && pos7 != 8 && pos7 != 9){
					printf("Digite um numero entre 1 e 9\n");
				}else{
		
				if(pos7 == pos1 || pos7 == pos2 || pos7 == pos3 || pos7 == pos4 || pos7 == pos5 || pos7 == pos6){
					printf("%s ESTA CASA JA FOI MARCADA\n", nome);
					printf("\n");
				}else{
					
		printf("\n");
		printf("\n");
		printf("\n");
		
		if(pos7 == 1){
			matriz[1][1] = 'x';
			matriz[1][5] = 'x';
			matriz[2][2] = 'x';
			matriz[2][4] = 'x';
			matriz[3][3] = 'x';
			matriz[4][2] = 'x';
			matriz[4][4] = 'x';
			matriz[5][1] = 'x';
			matriz[5][5] = 'x';
		}else if(pos7 == 2){
			matriz[1][10] = 'x';
			matriz[1][14] = 'x';
			matriz[2][11] = 'x';
			matriz[2][13] = 'x';
			matriz[3][12] = 'x';
			matriz[4][11] = 'x';
			matriz[4][13] = 'x';
			matriz[5][10] = 'x';
			matriz[5][14] = 'x';
		}if(pos7 == 3){
			matriz[1][19] = 'x';
			matriz[1][23] = 'x';
			matriz[2][20] = 'x';
			matriz[2][22] = 'x';
			matriz[3][21] = 'x';
			matriz[4][20] = 'x';
			matriz[4][22] = 'x';
			matriz[5][19] = 'x';
			matriz[5][23] = 'x';
		}else if(pos7 == 4){
			matriz[9][1] = 'x';
			matriz[9][5] = 'x';
			matriz[10][2] = 'x';
			matriz[10][4] = 'x';
			matriz[11][3] = 'x';
			matriz[12][2] = 'x';
			matriz[12][4] = 'x';
			matriz[13][1] = 'x';
			matriz[13][5] = 'x';
		}if(pos7 == 5){
			matriz[9][10] = 'x';
			matriz[9][14] = 'x';
			matriz[10][11] = 'x';
			matriz[10][13] = 'x';
			matriz[11][12] = 'x';
			matriz[12][11] = 'x';
			matriz[12][13] = 'x';
			matriz[13][10] = 'x';
			matriz[13][14] = 'x';
		}else if(pos7 == 6){
			matriz[9][19] = 'x';
			matriz[9][23] = 'x';
			matriz[10][20] = 'x';
			matriz[10][22] = 'x';
			matriz[11][21] = 'x';
			matriz[12][20] = 'x';
			matriz[12][22] = 'x';
			matriz[13][19] = 'x';
			matriz[13][23] = 'x';
		}if(pos7 == 7){
			matriz[17][1] = 'x';
			matriz[17][5] = 'x';
			matriz[18][2] = 'x';
			matriz[18][4] = 'x';
			matriz[19][3] = 'x';
			matriz[20][2] = 'x';
			matriz[20][4] = 'x';
			matriz[21][1] = 'x';
			matriz[21][5] = 'x';
		}else if(pos7 == 8){
			matriz[17][10] = 'x';
			matriz[17][14] = 'x';
			matriz[18][11] = 'x';
			matriz[18][13] = 'x';
			matriz[19][12] = 'x';
			matriz[20][11] = 'x';
			matriz[20][13] = 'x';
			matriz[21][10] = 'x';
			matriz[21][14] = 'x';
		}if(pos7 == 9){
			matriz[17][19] = 'x';
			matriz[17][23] = 'x';
			matriz[18][20] = 'x';
			matriz[18][22] = 'x';
			matriz[19][21] = 'x';
			matriz[20][20] = 'x';
			matriz[20][22] = 'x';
			matriz[21][19] = 'x';
			matriz[21][23] = 'x';
		}
				}
				}
		jogo(matriz);
			}while(pos7 == pos1 || pos7 == pos2 || pos7 == pos3 || pos7 == pos4 || pos7 == pos5 || pos7 == pos6);
			}while(pos7 != 1 && pos7 != 2 && pos7 != 3 && pos7 != 4 && pos7 != 5 && pos7 != 6 && pos7 != 7 && pos7 != 8 && pos7 != 9);
			
		printf("\n");
		printf("\n");
		printf("\n");
		
		// pos1, pos3, pos7.														//posiçoes de vitoria para jogador 1.
		if(pos1 == 1 && pos3 == 2 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos3 == 3 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 2 && pos3 == 1 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 2 && pos3 == 3 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos3 == 1 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos3 == 2 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 4 && pos3 == 5 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 4 && pos3 == 6 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos3 == 4 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos3 == 6 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 6 && pos3 == 4 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 6 && pos3 == 5 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos3 == 8 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos3 == 9 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 8 && pos3 == 7 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 8 && pos3 == 9 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos3 == 7 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos3 == 8 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 1 && pos3 == 4 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos3 == 7 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 4 && pos3 == 1 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 4 && pos3 == 7 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos3 == 4 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos3 == 1 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 2 && pos3 == 5 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 2 && pos3 == 8 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos3 == 2 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos3 == 8 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 8 && pos3 == 5 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 8 && pos3 == 2 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos3 == 6 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos3 == 9 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 6 && pos3 == 3 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 6 && pos3 == 9 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos3 == 6 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos3 == 3 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 1 && pos3 == 5 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos3 == 9 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos3 == 1 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos3 == 9 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos3 == 5 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos3 == 1 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos3 == 5 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos3 == 7 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos3 == 3 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos3 == 7 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos3 == 5 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos3 == 3 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}
		
		//pos1, pos5, pos7.															//posiçoes de vitoria para jogador 1.
		if(pos1 == 1 && pos5 == 2 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos5 == 3 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 2 && pos5 == 1 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 2 && pos5 == 3 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos5 == 1 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos5 == 2 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 4 && pos5 == 5 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 4 && pos5 == 6 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos5 == 4 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos5 == 6 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 6 && pos5 == 4 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 6 && pos5 == 5 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos5 == 8 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos5 == 9 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 8 && pos5 == 7 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 8 && pos5 == 9 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos5 == 7 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos5 == 8 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 1 && pos5 == 4 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos5 == 7 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 4 && pos5 == 1 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 4 && pos5 == 7 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos5 == 4 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos5 == 1 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 2 && pos5 == 5 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 2 && pos5 == 8 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos5 == 2 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos5 == 8 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 8 && pos5 == 5 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 8 && pos5 == 2 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos5 == 6 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos5 == 9 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 6 && pos5 == 3 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 6 && pos5 == 9 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos5 == 6 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos5 == 3 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 1 && pos5 == 5 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos5 == 9 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos5 == 1 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos5 == 9 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos5 == 5 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos5 == 1 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos5 == 5 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos5 == 7 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos5 == 3 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos5 == 7 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos5 == 5 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos5 == 3 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}
		
		//pos3, pos5, pos7.															//posiçoes de vitoria para jogador 1.
		if(pos3 == 1 && pos5 == 2 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 1 && pos5 == 3 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 2 && pos5 == 1 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 2 && pos5 == 3 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 3 && pos5 == 1 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 3 && pos5 == 2 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 4 && pos5 == 5 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 4 && pos5 == 6 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos5 == 4 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos5 == 6 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 6 && pos5 == 4 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 6 && pos5 == 5 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 7 && pos5 == 8 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 7 && pos5 == 9 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 8 && pos5 == 7 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 8 && pos5 == 9 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 9 && pos5 == 7 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 9 && pos5 == 8 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 1 && pos5 == 4 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 1 && pos5 == 7 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 4 && pos5 == 1 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 4 && pos5 == 7 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 7 && pos5 == 4 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 7 && pos5 == 1 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 2 && pos5 == 5 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 2 && pos5 == 8 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos5 == 2 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos5 == 8 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 8 && pos5 == 5 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 8 && pos5 == 2 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 3 && pos5 == 6 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 3 && pos5 == 9 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 6 && pos5 == 3 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 6 && pos5 == 9 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 9 && pos5 == 6 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 9 && pos5 == 3 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 1 && pos5 == 5 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 1 && pos5 == 9 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos5 == 1 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos5 == 9 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 9 && pos5 == 5 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 9 && pos5 == 1 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 3 && pos5 == 5 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 3 && pos5 == 7 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos5 == 3 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos5 == 7 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 7 && pos5 == 5 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 7 && pos5 == 3 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}
		
		do{
		do{
			printf("%s escolha sua posicao->  ", nomi);									//Jogador 2 fazendo sua jogada.
			scanf("%d", &pos8);
			
				if(pos8 != 1 && pos8 != 2 && pos8 != 3 && pos8 != 4 && pos8 != 5 && pos8 != 6 && pos8 != 7 && pos8 != 8 && pos8 != 9){
					printf("Digite um numero entre 1 e 9\n");
				}else{
		
				if(pos8 == pos1 || pos8 == pos2 || pos8 == pos3 || pos8 == pos4 || pos8 == pos5 || pos8 == pos6 || pos8 == pos7){
					printf("%s ESTA CASA JA FOI MARCADA\n", nomi);
					printf("\n");
				}else{
		
		printf("\n");
		printf("\n");
		printf("\n");
		
		if(pos8 == 1){
			matriz[1][2] = 'o';
			matriz[1][3] = 'o';
			matriz[1][4] = 'o';
			matriz[2][1] = 'o';
			matriz[2][5] = 'o';
			matriz[3][1] = 'o';
			matriz[3][5] = 'o';
			matriz[4][1] = 'o';
			matriz[4][5] = 'o';
			matriz[5][2] = 'o';
			matriz[5][3] = 'o';
			matriz[5][4] = 'o';
		}else if(pos8 == 2){
			matriz[1][11] = 'o';
			matriz[1][12] = 'o';
			matriz[1][13] = 'o';
			matriz[2][10] = 'o';
			matriz[2][14] = 'o';
			matriz[3][10] = 'o';
			matriz[3][14] = 'o';
			matriz[4][10] = 'o';
			matriz[4][14] = 'o';
			matriz[5][11] = 'o';
			matriz[5][12] = 'o';
			matriz[5][13] = 'o';
		}if(pos8 == 3){
			matriz[1][20] = 'o';
			matriz[1][21] = 'o';
			matriz[1][22] = 'o';
			matriz[2][19] = 'o';
			matriz[2][23] = 'o';
			matriz[3][19] = 'o';
			matriz[3][23] = 'o';
			matriz[4][19] = 'o';
			matriz[4][23] = 'o';
			matriz[5][20] = 'o';
			matriz[5][21] = 'o';
			matriz[5][22] = 'o';
		}else if(pos8 == 4){
			matriz[9][2] = 'o';
			matriz[9][3] = 'o';
			matriz[9][4] = 'o';
			matriz[10][1] = 'o';
			matriz[10][5] = 'o';
			matriz[11][1] = 'o';
			matriz[11][5] = 'o';
			matriz[12][1] = 'o';
			matriz[12][5] = 'o';
			matriz[13][2] = 'o';
			matriz[13][3] = 'o';
			matriz[13][4] = 'o';
		}if(pos8 == 5){
			matriz[9][11] = 'o';
			matriz[9][12] = 'o';
			matriz[9][13] = 'o';
			matriz[10][10] = 'o';
			matriz[10][14] = 'o';
			matriz[11][10] = 'o';
			matriz[11][14] = 'o';
			matriz[12][10] = 'o';
			matriz[12][14] = 'o';
			matriz[13][11] = 'o';
			matriz[13][12] = 'o';
			matriz[13][13] = 'o';
		}else if(pos8 == 6){
			matriz[9][20] = 'o';
			matriz[9][21] = 'o';
			matriz[9][22] = 'o';
			matriz[10][19] = 'o';
			matriz[10][23] = 'o';
			matriz[11][19] = 'o';
			matriz[11][23] = 'o';
			matriz[12][19] = 'o';
			matriz[12][23] = 'o';
			matriz[13][20] = 'o';
			matriz[13][21] = 'o';
			matriz[13][22] = 'o';
		}if(pos8 == 7){
			matriz[17][2] = 'o';
			matriz[17][3] = 'o';
			matriz[17][4] = 'o';
			matriz[18][1] = 'o';
			matriz[18][5] = 'o';
			matriz[19][1] = 'o';
			matriz[19][5] = 'o';
			matriz[20][1] = 'o';
			matriz[20][5] = 'o';
			matriz[21][2] = 'o';
			matriz[21][3] = 'o';
			matriz[21][4] = 'o';
		}else if(pos8 == 8){
			matriz[17][11] = 'o';
			matriz[17][12] = 'o';
			matriz[17][13] = 'o';
			matriz[18][10] = 'o';
			matriz[18][14] = 'o';
			matriz[19][10] = 'o';
			matriz[19][14] = 'o';
			matriz[20][10] = 'o';
			matriz[20][14] = 'o';
			matriz[21][11] = 'o';
			matriz[21][12] = 'o';
			matriz[21][13] = 'o';
		}if(pos8 == 9){
			matriz[17][20] = 'o';
			matriz[17][21] = 'o';
			matriz[17][22] = 'o';
			matriz[18][19] = 'o';
			matriz[18][23] = 'o';
			matriz[19][19] = 'o';
			matriz[19][23] = 'o';
			matriz[20][19] = 'o';
			matriz[20][23] = 'o';
			matriz[21][20] = 'o';
			matriz[21][21] = 'o';
			matriz[21][22] = 'o';
		}
				}
				}
		jogo(matriz);
			}while(pos8 == pos1 || pos8 == pos2 || pos8 == pos3 || pos8 == pos4 || pos8 == pos5 || pos8 == pos6 || pos8 == pos7);
			}while(pos8 != 1 && pos8 != 2 && pos8 != 3 && pos8 != 4 && pos8 != 5 && pos8 != 6 && pos8 != 7 && pos8 != 8 && pos8 != 9);

		
		printf("\n");
		printf("\n");
		printf("\n");
		
		//pos2, pos4, pos8.															//posiçoes de vitoria para jogador 2.
		if(pos2 == 1 && pos4 == 2 && pos8 == 3){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 1 && pos4 == 3 && pos8 == 2){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 2 && pos4 == 1 && pos8 == 3){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 2 && pos4 == 3 && pos8 == 1){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 3 && pos4 == 1 && pos8 == 2){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 3 && pos4 == 2 && pos8 == 1){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 4 && pos4 == 5 && pos8 == 6){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 4 && pos4 == 6 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 5 && pos4 == 4 && pos8 == 6){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos4 == 6 && pos8 == 4){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 6 && pos4 == 4 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 6 && pos4 == 5 && pos8 == 4){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 7 && pos4 == 8 && pos8 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 7 && pos4 == 9 && pos8 == 8){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 8 && pos4 == 7 && pos8 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 8 && pos4 == 9 && pos8 == 7){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 9 && pos4 == 7 && pos8 == 8){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 9 && pos4 == 8 && pos8 == 7){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 1 && pos4 == 4 && pos8 == 7){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 1 && pos4 == 7 && pos8 == 4){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 4 && pos4 == 1 && pos8 == 7){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 4 && pos4 == 7 && pos8 == 1){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 7 && pos4 == 4 && pos8 == 1){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 7 && pos4 == 1 && pos8 == 4){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 2 && pos4 == 5 && pos8 == 8){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 2 && pos4 == 8 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 5 && pos4 == 2 && pos8 == 8){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos4 == 8 && pos8 == 2){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 8 && pos4 == 5 && pos8 == 2){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 8 && pos4 == 2 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 3 && pos4 == 6 && pos8 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 3 && pos4 == 9 && pos8 == 6){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 6 && pos4 == 3 && pos8 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 6 && pos4 == 9 && pos8 == 3){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 9 && pos4 == 6 && pos8 == 3){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 9 && pos4 == 3 && pos8 == 6){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 1 && pos4 == 5 && pos8 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 1 && pos4 == 9 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 5 && pos4 == 1 && pos8 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos4 == 9 && pos8 == 1){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 9 && pos4 == 5 && pos8 == 1){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 9 && pos4 == 1 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 3 && pos4 == 5 && pos8 == 7){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 3 && pos4 == 7 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 5 && pos4 == 3 && pos8 == 7){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos4 == 7 && pos8 == 3){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 7 && pos4 == 5 && pos8 == 3){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 7 && pos4 == 3 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}
		
		//pos2, pos6, pos8.															//posiçoes de vitoria para jogador 2.
		if(pos2 == 1 && pos6 == 2 && pos8 == 3){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 1 && pos6 == 3 && pos8 == 2){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 2 && pos6 == 1 && pos8 == 3){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 2 && pos6 == 3 && pos8 == 1){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 3 && pos6 == 1 && pos8 == 2){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 3 && pos6 == 2 && pos8 == 1){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 4 && pos6 == 5 && pos8 == 6){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 4 && pos6 == 6 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 5 && pos6 == 4 && pos8 == 6){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos6 == 6 && pos8 == 4){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 6 && pos6 == 4 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 6 && pos6 == 5 && pos8 == 4){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 7 && pos6 == 8 && pos8 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 7 && pos6 == 9 && pos8 == 8){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 8 && pos6 == 7 && pos8 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 8 && pos6 == 9 && pos8 == 7){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 9 && pos6 == 7 && pos8 == 8){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 9 && pos6 == 8 && pos8 == 7){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 1 && pos6 == 4 && pos8 == 7){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 1 && pos6 == 7 && pos8 == 4){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 4 && pos6 == 1 && pos8 == 7){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 4 && pos6 == 7 && pos8 == 1){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 7 && pos6 == 4 && pos8 == 1){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 7 && pos6 == 1 && pos8 == 4){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 2 && pos6 == 5 && pos8 == 8){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 2 && pos6 == 8 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 5 && pos6 == 2 && pos8 == 8){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos5 == 8 && pos8 == 2){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 8 && pos6 == 5 && pos8 == 2){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 8 && pos6 == 2 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 3 && pos6 == 6 && pos8 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 3 && pos6 == 9 && pos8 == 6){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 6 && pos6 == 3 && pos8 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 6 && pos6 == 9 && pos8 == 3){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 9 && pos6 == 6 && pos8 == 3){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 9 && pos6 == 3 && pos8 == 6){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 1 && pos6 == 5 && pos8 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 1 && pos6 == 9 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 5 && pos6 == 1 && pos8 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos6 == 9 && pos8 == 1){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 9 && pos6 == 5 && pos8 == 1){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 9 && pos6 == 1 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 3 && pos6 == 5 && pos8 == 7){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 3 && pos6 == 7 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 5 && pos6 == 3 && pos8 == 7){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos6 == 7 && pos8 == 3){
			printf("%s venceu!\n", nomi);break;
		}if(pos2 == 7 && pos6 == 5 && pos8 == 3){
			printf("%s venceu!\n", nomi);break;
		}else if(pos2 == 7 && pos6 == 3 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}
		
		//pos4, pos6, pos8.															//posiçoes de vitoria para jogador 2.
		if(pos4 == 1 && pos6 == 2 && pos8 == 3){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 1 && pos6 == 3 && pos8 == 2){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 2 && pos6 == 1 && pos8 == 3){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 2 && pos6 == 3 && pos8 == 1){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 3 && pos6 == 1 && pos8 == 2){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 3 && pos6 == 2 && pos8 == 1){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 4 && pos6 == 5 && pos8 == 6){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 4 && pos6 == 6 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 5 && pos6 == 4 && pos8 == 6){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 5 && pos6 == 6 && pos8 == 4){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 6 && pos6 == 4 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 6 && pos6 == 5 && pos8 == 4){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 7 && pos6 == 8 && pos8 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 7 && pos6 == 9 && pos8 == 8){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 8 && pos6 == 7 && pos8 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 8 && pos6 == 9 && pos8 == 7){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 9 && pos6 == 7 && pos8 == 8){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 9 && pos6 == 8 && pos8 == 7){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 1 && pos6 == 4 && pos8 == 7){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 1 && pos6 == 7 && pos8 == 4){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 4 && pos6 == 1 && pos8 == 7){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 4 && pos6 == 7 && pos8 == 1){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 7 && pos6 == 4 && pos8 == 1){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 7 && pos6 == 1 && pos8 == 4){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 2 && pos6 == 5 && pos8 == 8){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 2 && pos6 == 8 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 5 && pos6 == 2 && pos8 == 8){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 5 && pos6 == 8 && pos8 == 2){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 8 && pos6 == 5 && pos8 == 2){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 8 && pos6 == 2 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 3 && pos6 == 6 && pos8 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 3 && pos6 == 9 && pos8 == 6){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 6 && pos6 == 3 && pos8 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 6 && pos6 == 9 && pos8 == 3){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 9 && pos6 == 6 && pos8 == 3){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 9 && pos6 == 3 && pos8 == 6){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 1 && pos6 == 5 && pos8 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 1 && pos6 == 9 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 5 && pos6 == 1 && pos8 == 9){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 5 && pos6 == 9 && pos8 == 1){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 9 && pos6 == 5 && pos8 == 1){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 9 && pos6 == 1 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 3 && pos6 == 5 && pos8 == 7){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 3 && pos6 == 7 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 5 && pos6 == 3 && pos8 == 7){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 5 && pos6 == 7 && pos8 == 3){
			printf("%s venceu!\n", nomi);break;
		}if(pos4 == 7 && pos6 == 5 && pos8 == 3){
			printf("%s venceu!\n", nomi);break;
		}else if(pos4 == 7 && pos6 == 3 && pos8 == 5){
			printf("%s venceu!\n", nomi);break;
		}
		
		do{
		do{
			printf("%s escolha sua posicao ->  ", nome);								//Jogador 1 fazendo sua jogada
			scanf("%d", &pos9);
			
				if(pos9 != 1 && pos9 != 2 && pos9 != 3 && pos9 != 4 && pos9 != 5 && pos9 != 6 && pos9 != 7 && pos9 != 8 && pos9 != 9){
					printf("Digite um numero entre 1 e 9\n");
				}else{
		
				if(pos9 == pos1 || pos9 == pos2 || pos9 == pos3 || pos9 == pos4 || pos9 == pos5 || pos9 == pos6 || pos9 == pos7 || pos9 == pos8){
					printf("%s ESTA CASA JA FOI MARCADA\n", nome);
					printf("\n");
				}else{
		
		printf("\n");
		printf("\n");
		printf("\n");
		
		if(pos9 == 1){
			matriz[1][1] = 'x';
			matriz[1][5] = 'x';
			matriz[2][2] = 'x';
			matriz[2][4] = 'x';
			matriz[3][3] = 'x';
			matriz[4][2] = 'x';
			matriz[4][4] = 'x';
			matriz[5][1] = 'x';
			matriz[5][5] = 'x';
		}else if(pos9 == 2){
			matriz[1][10] = 'x';
			matriz[1][14] = 'x';
			matriz[2][11] = 'x';
			matriz[2][13] = 'x';
			matriz[3][12] = 'x';
			matriz[4][11] = 'x';
			matriz[4][13] = 'x';
			matriz[5][10] = 'x';
			matriz[5][14] = 'x';
		}if(pos9 == 3){
			matriz[1][19] = 'x';
			matriz[1][23] = 'x';
			matriz[2][20] = 'x';
			matriz[2][22] = 'x';
			matriz[3][21] = 'x';
			matriz[4][20] = 'x';
			matriz[4][22] = 'x';
			matriz[5][19] = 'x';
			matriz[5][23] = 'x';
		}else if(pos9 == 4){
			matriz[9][1] = 'x';
			matriz[9][5] = 'x';
			matriz[10][2] = 'x';
			matriz[10][4] = 'x';
			matriz[11][3] = 'x';
			matriz[12][2] = 'x';
			matriz[12][4] = 'x';
			matriz[13][1] = 'x';
			matriz[13][5] = 'x';
		}if(pos9 == 5){
			matriz[9][10] = 'x';
			matriz[9][14] = 'x';
			matriz[10][11] = 'x';
			matriz[10][13] = 'x';
			matriz[11][12] = 'x';
			matriz[12][11] = 'x';
			matriz[12][13] = 'x';
			matriz[13][10] = 'x';
			matriz[13][14] = 'x';
		}else if(pos9 == 6){
			matriz[9][19] = 'x';
			matriz[9][23] = 'x';
			matriz[10][20] = 'x';
			matriz[10][22] = 'x';
			matriz[11][21] = 'x';
			matriz[12][20] = 'x';
			matriz[12][22] = 'x';
			matriz[13][19] = 'x';
			matriz[13][23] = 'x';
		}if(pos9 == 7){
			matriz[17][1] = 'x';
			matriz[17][5] = 'x';
			matriz[18][2] = 'x';
			matriz[18][4] = 'x';
			matriz[19][3] = 'x';
			matriz[20][2] = 'x';
			matriz[20][4] = 'x';
			matriz[21][1] = 'x';
			matriz[21][5] = 'x';
		}else if(pos9 == 8){
			matriz[17][10] = 'x';
			matriz[17][14] = 'x';
			matriz[18][11] = 'x';
			matriz[18][13] = 'x';
			matriz[19][12] = 'x';
			matriz[20][11] = 'x';
			matriz[20][13] = 'x';
			matriz[21][10] = 'x';
			matriz[21][14] = 'x';
		}if(pos9 == 9){
			matriz[17][19] = 'x';
			matriz[17][23] = 'x';
			matriz[18][20] = 'x';
			matriz[18][22] = 'x';
			matriz[19][21] = 'x';
			matriz[20][20] = 'x';
			matriz[20][22] = 'x';
			matriz[21][19] = 'x';
			matriz[21][23] = 'x';
		}
				}
				}
		jogo(matriz);
			}while (pos9 == pos1 || pos9 == pos2 || pos9 == pos3 || pos9 == pos4 || pos9 == pos5 || pos9 == pos6 || pos9 == pos7 || pos9 == pos8);
			}while(pos9 != 1 && pos9 != 2 && pos9 != 3 && pos9 != 4 && pos9 != 5 && pos9 != 6 && pos9 != 7 && pos9 != 8 && pos9 != 9);
		
		printf("\n");
		printf("\n");
		printf("\n");
		
		//pos1, pos3, pos9.															//posiçoes de vitoria para jogador 1.
		if(pos1 == 1 && pos3 == 2 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos3 == 3 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 2 && pos3 == 1 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 2 && pos3 == 3 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos3 == 1 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos3 == 2 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 4 && pos3 == 5 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 4 && pos3 == 6 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos3 == 4 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos3 == 6 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 6 && pos3 == 4 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 6 && pos3 == 5 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos3 == 8 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos3 == 9 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 8 && pos3 == 7 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 8 && pos3 == 9 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos3 == 7 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos3 == 8 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 1 && pos3 == 4 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos3 == 7 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 4 && pos3 == 1 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 4 && pos3 == 7 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos3 == 4 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos3 == 1 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 2 && pos3 == 5 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 2 && pos3 == 8 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos3 == 2 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos3 == 8 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 8 && pos3 == 5 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 8 && pos3 == 2 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos3 == 6 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos3 == 9 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 6 && pos3 == 3 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 6 && pos3 == 9 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos3 == 6 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos3 == 3 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 1 && pos3 == 5 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos3 == 9 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos3 == 1 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos3 == 9 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos3 == 5 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos3 == 1 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos3 == 5 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos3 == 7 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos3 == 3 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos3 == 7 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos3 == 5 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos3 == 3 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}
		
		//pos1, pos5, pos9.															//posiçoes de vitoria para jogador 1.
		if(pos1 == 1 && pos5 == 2 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos5 == 3 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 2 && pos5 == 1 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 2 && pos5 == 3 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos5 == 1 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos5 == 2 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 4 && pos5 == 5 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 4 && pos5 == 6 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos5 == 4 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos5 == 6 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 6 && pos5 == 4 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 6 && pos5 == 5 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos5 == 8 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos5 == 9 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 8 && pos5 == 7 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 8 && pos5 == 9 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos5 == 7 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos5 == 8 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 1 && pos5 == 4 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos5 == 7 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 4 && pos5 == 1 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 4 && pos5 == 7 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos5 == 4 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos5 == 1 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 2 && pos5 == 5 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 2 && pos5 == 8 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos5 == 2 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos5 == 8 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 8 && pos5 == 5 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 8 && pos5 == 2 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos5 == 6 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos5 == 9 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 6 && pos5 == 3 && pos9 == 9){
			printf("%s venceu!\n", nome);break;;
		}else if(pos1 == 6 && pos5 == 9 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos5 == 6 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos5 == 3 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 1 && pos5 == 5 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos5 == 9 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos5 == 1 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos5 == 9 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos5 == 5 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos5 == 1 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos5 == 5 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos5 == 7 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos5 == 3 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos5 == 7 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos5 == 5 && pos9 == 3){
				printf("Player 1 venceu!\n");break;
		}else if(pos1 == 7 && pos5 == 3 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}
		
		//pos1, pos7, pos9.															//posiçoes de vitoria para jogador 1.
		if(pos1 == 1 && pos7 == 2 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos7 == 3 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 2 && pos7 == 1 && pos9 == 3){
			printf("%s venceu!\n", nome);break;;
		}else if(pos1 == 2 && pos7 == 3 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos7 == 1 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos7 == 2 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 4 && pos7 == 5 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 4 && pos7 == 6 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos7 == 4 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos7 == 6 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 6 && pos7 == 4 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 6 && pos7 == 5 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos7 == 8 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos7 == 9 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 8 && pos7 == 7 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 8 && pos7 == 9 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos7 == 7 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos7 == 8 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 1 && pos7 == 4 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos7 == 7 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 4 && pos7 == 1 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 4 && pos7 == 7 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos7 == 4 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos7 == 1 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 2 && pos7 == 5 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 2 && pos7 == 8 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos7 == 2 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos7 == 8 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 8 && pos7 == 5 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 8 && pos7 == 2 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos7 == 6 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos7 == 9 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 6 && pos7 == 3 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 6 && pos7 == 9 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos7 == 6 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos7 == 3 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 1 && pos7 == 5 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos7 == 9 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos7 == 1 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos7 == 9 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos7 == 5 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos7 == 1 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos7 == 5 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos7 == 7 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos7 == 3 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos7 == 7 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos7 == 5 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos7 == 3 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}
		
		//pos3, pos5, pos9.															//posiçoes de vitoria para jogador 1.
		if(pos3 == 1 && pos5 == 2 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 1 && pos5 == 3 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 2 && pos5 == 1 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 2 && pos5 == 3 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 3 && pos5 == 1 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 3 && pos5 == 2 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 4 && pos5 == 5 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 4 && pos5 == 6 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos5 == 4 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos5 == 6 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 6 && pos5 == 4 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 6 && pos5 == 5 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 7 && pos5 == 8 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 7 && pos5 == 9 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 8 && pos5 == 7 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 8 && pos5 == 9 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 9 && pos5 == 7 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 9 && pos5 == 8 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 1 && pos5 == 4 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 1 && pos5 == 7 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 4 && pos5 == 1 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 4 && pos5 == 7 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 7 && pos5 == 4 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 7 && pos5 == 1 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 2 && pos5 == 5 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 2 && pos5 == 8 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos5 == 2 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos5 == 8 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 8 && pos5 == 5 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 8 && pos5 == 2 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 3 && pos5 == 6 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 3 && pos5 == 9 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 6 && pos5 == 3 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 6 && pos5 == 9 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 9 && pos5 == 6 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 9 && pos5 == 3 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 1 && pos5 == 5 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 1 && pos5 == 9 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos5 == 1 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos5 == 9 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 9 && pos5 == 5 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 9 && pos5 == 1 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 3 && pos5 == 5 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 3 && pos5 == 7 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos5 == 3 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos5 == 7 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 7 && pos5 == 5 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 7 && pos5 == 3 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}
		
		//pos3, pos7, pos9.															//posiçoes de vitoria para jogador 1.
		if(pos3 == 1 && pos7 == 2 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 1 && pos7 == 3 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 2 && pos7 == 1 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 2 && pos7 == 3 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 3 && pos7 == 1 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 3 && pos7 == 2 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 4 && pos7 == 5 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 4 && pos7 == 6 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos7 == 4 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos7 == 6 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 6 && pos7 == 4 && pos9 == 5){
			printf("%s venceu!\n", nome);break;;
		}else if(pos3 == 6 && pos7 == 5 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 7 && pos7 == 8 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 7 && pos7 == 9 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 8 && pos7 == 7 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 8 && pos7 == 9 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 9 && pos7 == 7 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 9 && pos7 == 8 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 1 && pos7 == 4 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 1 && pos7 == 7 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 4 && pos7 == 1 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 4 && pos7 == 7 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 7 && pos7 == 4 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 7 && pos7 == 1 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 2 && pos7 == 5 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 2 && pos7 == 8 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos7 == 2 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos7 == 8 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 8 && pos7 == 5 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 8 && pos7 == 2 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 3 && pos7 == 6 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 3 && pos7 == 9 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 6 && pos7 == 3 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 6 && pos7 == 9 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 9 && pos7 == 6 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 9 && pos7 == 3 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 1 && pos7 == 5 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 1 && pos7 == 9 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos7 == 1 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos7 == 9 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 9 && pos7 == 5 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 9 && pos7 == 1 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 3 && pos7 == 5 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 3 && pos7 == 7 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos7 == 3 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos7 == 7 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 7 && pos7 == 5 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 7 && pos7 == 3 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}
		
		//pos5, pos7, pos9.															//posiçoes de vitoria para jogador 1.
		if(pos5 == 1 && pos7 == 2 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 1 && pos7 == 3 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 2 && pos7 == 1 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 2 && pos7 == 3 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 3 && pos7 == 1 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 3 && pos7 == 2 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 4 && pos7 == 5 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 4 && pos7 == 6 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 5 && pos7 == 4 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 5 && pos7 == 6 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 6 && pos7 == 4 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 6 && pos7 == 5 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 7 && pos7 == 8 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 7 && pos7 == 9 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 8 && pos7 == 7 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 8 && pos7 == 9 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 9 && pos7 == 7 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 9 && pos7 == 8 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 1 && pos7 == 4 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 1 && pos7 == 7 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 4 && pos7 == 1 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 4 && pos7 == 7 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 7 && pos7 == 4 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 7 && pos7 == 1 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 2 && pos7 == 5 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 2 && pos7 == 8 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 5 && pos7 == 2 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 5 && pos7 == 8 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 8 && pos7 == 5 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 8 && pos7 == 2 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 3 && pos7 == 6 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 3 && pos7 == 9 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 6 && pos7 == 3 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 6 && pos7 == 9 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 9 && pos7 == 6 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 9 && pos7 == 3 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 1 && pos7 == 5 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 1 && pos7 == 9 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 5 && pos7 == 1 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 5 && pos7 == 9 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 9 && pos7 == 5 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 9 && pos7 == 1 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 3 && pos7 == 5 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 3 && pos7 == 7 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 5 && pos7 == 3 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 5 && pos7 == 7 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 7 && pos7 == 5 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 7 && pos7 == 3 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}else{
			printf("Deu velha!!!!");break;
		}		
	
		printf("\n");
		printf("\n");
	
	}else if(res == 'n'){															//Se usuario digitar n ele ira jogar contra a maquina.
		fflush(stdin);
		printf("Voce vai jogar contra a maquina agora! \n");	
		
			printf("Jogador 1 digite seu primeiro nome: ");
			gets(nome);						
			printf("%s vs Computador\n", nome);
			
			do{
			printf("%s escolha sua posicao ->  ",nome);
			scanf("%d",&pos1);
			
			if(pos1 != 1 && pos1 != 2 && pos1 != 3 && pos1 != 4 && pos1 != 5 && pos1 != 6 && pos1 != 7 && pos1 != 8 && pos1 != 9){
					printf("Digite um numero entre 1 e 9\n");
				}else{
		
		if(pos1 == 1){
			matriz[1][1] = 'x';
			matriz[1][5] = 'x';
			matriz[2][2] = 'x';
			matriz[2][4] = 'x';
			matriz[3][3] = 'x';
			matriz[4][2] = 'x';
			matriz[4][4] = 'x';
			matriz[5][1] = 'x';
			matriz[5][5] = 'x';
		}else if(pos1 == 2){
			
		
			matriz[1][10] = 'x';
			matriz[1][14] = 'x';
			matriz[2][11] = 'x';
			matriz[2][13] = 'x';
			matriz[3][12] = 'x';
			matriz[4][11] = 'x';
			matriz[4][13] = 'x';
			matriz[5][10] = 'x';
			matriz[5][14] = 'x';
		}if(pos1 == 3){
			matriz[1][19] = 'x';
			matriz[1][23] = 'x';
			matriz[2][20] = 'x';
			matriz[2][22] = 'x';
			matriz[3][21] = 'x';
			matriz[4][20] = 'x';
			matriz[4][22] = 'x';
			matriz[5][19] = 'x';
			matriz[5][23] = 'x';
		}else if(pos1 == 4){
			matriz[9][1] = 'x';
			matriz[9][5] = 'x';
			matriz[10][2] = 'x';
			matriz[10][4] = 'x';
			matriz[11][3] = 'x';
			matriz[12][2] = 'x';
			matriz[12][4] = 'x';
			matriz[13][1] = 'x';
			matriz[13][5] = 'x';
		}if(pos1 == 5){
			matriz[9][10] = 'x';
			matriz[9][14] = 'x';
			matriz[10][11] = 'x';
			matriz[10][13] = 'x';
			matriz[11][12] = 'x';
			matriz[12][11] = 'x';
			matriz[12][13] = 'x';
			matriz[13][10] = 'x';
			matriz[13][14] = 'x';
		}else if(pos1 == 6){
			matriz[9][19] = 'x';
			matriz[9][23] = 'x';
			matriz[10][20] = 'x';
			matriz[10][22] = 'x';
			matriz[11][21] = 'x';
			matriz[12][20] = 'x';
			matriz[12][22] = 'x';
			matriz[13][19] = 'x';
			matriz[13][23] = 'x';
		}if(pos1 == 7){
			matriz[17][1] = 'x';
			matriz[17][5] = 'x';
			matriz[18][2] = 'x';
			matriz[18][4] = 'x';
			matriz[19][3] = 'x';
			matriz[20][2] = 'x';
			matriz[20][4] = 'x';
			matriz[21][1] = 'x';
			matriz[21][5] = 'x';
		}else if(pos1 == 8){
			matriz[17][10] = 'x';
			matriz[17][14] = 'x';
			matriz[18][11] = 'x';
			matriz[18][13] = 'x';
			matriz[19][12] = 'x';
			matriz[20][11] = 'x';
			matriz[20][13] = 'x';
			matriz[21][10] = 'x';
			matriz[21][14] = 'x';
		}if(pos1 == 9){
			matriz[17][19] = 'x';
			matriz[17][23] = 'x';
			matriz[18][20] = 'x';
			matriz[18][22] = 'x';
			matriz[19][21] = 'x';
			matriz[20][20] = 'x';
			matriz[20][22] = 'x';
			matriz[21][19] = 'x';
			matriz[21][23] = 'x';
		}
				}
		jogo(matriz);
			}while(pos1 != 1 && pos1 != 2 && pos1 != 3 && pos1 != 4 && pos1 != 5 && pos1 != 6 && pos1 != 7 && pos1 != 8 && pos1 != 9);
		
		
	printf("A maquina fez sua jogada\n");
	
		printf("\n");
		printf("\n");
	
	for(k=1; k<=9; k++){
		if(pos1 == 1 && k != pos1){
			pos2 = k;
			break;
		}else if(pos1 == 2 && k != pos1){
			pos2 = k;
			break;
		}if(pos1 == 3 && k != pos1){
			pos2 = k;
			break;
		}else if(pos1 == 4 && k != pos1){
			pos2 = k;
			break;
		}if(pos1 == 5 && k != pos1){
			pos2 = k;
			break;
		}else if(pos1 == 6 && k != pos1){
			pos2 = k;
			break;
		}if(pos1 == 7 && k != pos1){
			pos2 = k;
			break;
		}else if(pos1 == 8 && k != pos1){
			pos2 = k;
			break;
		}if(pos1 == 9 && k != pos1){
			pos2 = k;
			break;
		}
	}	
	
	if(pos2 == 1){
		matriz[1][2] = 'o';
		matriz[1][3] = 'o';
		matriz[1][4] = 'o';
		matriz[2][1] = 'o';
		matriz[2][5] = 'o';
		matriz[3][1] = 'o';
		matriz[3][5] = 'o';
		matriz[4][1] = 'o';
		matriz[4][5] = 'o';
		matriz[5][2] = 'o';
		matriz[5][3] = 'o';
		matriz[5][4] = 'o';
	}else if(pos2 == 2){
		matriz[1][11] = 'o';
			matriz[1][12] = 'o';
			matriz[1][13] = 'o';
			matriz[2][10] = 'o';
			matriz[2][14] = 'o';
			matriz[3][10] = 'o';
			matriz[3][14] = 'o';
			matriz[4][10] = 'o';
			matriz[4][14] = 'o';
			matriz[5][11] = 'o';
			matriz[5][12] = 'o';
			matriz[5][13] = 'o';
		}if(pos2 == 3){
			matriz[1][20] = 'o';
			matriz[1][21] = 'o';
			matriz[1][22] = 'o';
			matriz[2][19] = 'o';
			matriz[2][23] = 'o';
			matriz[3][19] = 'o';
			matriz[3][23] = 'o';
			matriz[4][19] = 'o';
			matriz[4][23] = 'o';
			matriz[5][20] = 'o';
			matriz[5][21] = 'o';
			matriz[5][22] = 'o';
		}else if(pos2 == 4){
			matriz[9][2] = 'o';
			matriz[9][3] = 'o';
			matriz[9][4] = 'o';
			matriz[10][1] = 'o';
			matriz[10][5] = 'o';
			matriz[11][1] = 'o';
			matriz[11][5] = 'o';
			matriz[12][1] = 'o';
			matriz[12][5] = 'o';
			matriz[13][2] = 'o';
			matriz[13][3] = 'o';
			matriz[13][4] = 'o';
		}if(pos2 == 5){
			matriz[9][11] = 'o';
			matriz[9][12] = 'o';
			matriz[9][13] = 'o';
			matriz[10][10] = 'o';
			matriz[10][14] = 'o';
			matriz[11][10] = 'o';
			matriz[11][14] = 'o';
			matriz[12][10] = 'o';
			matriz[12][14] = 'o';
			matriz[13][11] = 'o';
			matriz[13][12] = 'o';
			matriz[13][13] = 'o';
		}else if(pos2 == 6){
			matriz[9][20] = 'o';
			matriz[9][21] = 'o';
			matriz[9][22] = 'o';
			matriz[10][19] = 'o';
			matriz[10][23] = 'o';
			matriz[11][19] = 'o';
			matriz[11][23] = 'o';
			matriz[12][19] = 'o';
			matriz[12][23] = 'o';
			matriz[13][20] = 'o';
			matriz[13][21] = 'o';
			matriz[13][22] = 'o';
		}if(pos2 == 7){
			matriz[17][2] = 'o';
			matriz[17][3] = 'o';
			matriz[17][4] = 'o';
			matriz[18][1] = 'o';
			matriz[18][5] = 'o';
			matriz[19][1] = 'o';
			matriz[19][5] = 'o';
			matriz[20][1] = 'o';
			matriz[20][5] = 'o';
			matriz[21][2] = 'o';
			matriz[21][3] = 'o';
			matriz[21][4] = 'o';
		}else if(pos2 == 8){
			matriz[17][11] = 'o';
			matriz[17][12] = 'o';
			matriz[17][13] = 'o';
			matriz[18][10] = 'o';
			matriz[18][14] = 'o';
			matriz[19][10] = 'o';
			matriz[19][14] = 'o';
			matriz[20][10] = 'o';
			matriz[20][14] = 'o';
			matriz[21][11] = 'o';
			matriz[21][12] = 'o';
			matriz[21][13] = 'o';
		}if(pos2 == 9){
			matriz[17][20] = 'o';
			matriz[17][21] = 'o';
			matriz[17][22] = 'o';
			matriz[18][19] = 'o';
			matriz[18][23] = 'o';
			matriz[19][19] = 'o';
			matriz[19][23] = 'o';
			matriz[20][19] = 'o';
			matriz[20][23] = 'o';
			matriz[21][20] = 'o';
			matriz[21][21] = 'o';
			matriz[21][22] = 'o';
		}
		jogo(matriz);
		
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");

		do{
		do{
			printf("%s escolha sua posicao ->  ", nome);								//Jogador 1 fazendo sua jogada
			scanf("%d", &pos3);
			
				if(pos3 != 1 && pos3 != 2 && pos3 != 3 && pos3 != 4 && pos3 != 5 && pos3 != 6 && pos3 != 7 && pos3 != 8 && pos3 != 9){
					printf("Digite um numero entre 1 e 9\n");
				}else{
			
				if(pos3 == pos1 || pos3 == pos2){
					printf("%s ESTA CASA JA FOI MARCADA\n", nome);
					printf("\n");
				}else{
		
		if(pos3 == 1){
			matriz[1][1] = 'x';
			matriz[1][5] = 'x';
			matriz[2][2] = 'x';
			matriz[2][4] = 'x';
			matriz[3][3] = 'x';
			matriz[4][2] = 'x';
			matriz[4][4] = 'x';
			matriz[5][1] = 'x';
			matriz[5][5] = 'x';
		}else if(pos3 == 2){
			matriz[1][10] = 'x';
			matriz[1][14] = 'x';
			matriz[2][11] = 'x';
			matriz[2][13] = 'x';
			matriz[3][12] = 'x';
			matriz[4][11] = 'x';
			matriz[4][13] = 'x';
			matriz[5][10] = 'x';
			matriz[5][14] = 'x';
		}if(pos3 == 3){
			matriz[1][19] = 'x';
			matriz[1][23] = 'x';
			matriz[2][20] = 'x';
			matriz[2][22] = 'x';
			matriz[3][21] = 'x';
			matriz[4][20] = 'x';
			matriz[4][22] = 'x';
			matriz[5][19] = 'x';
			matriz[5][23] = 'x';
		}else if(pos3 == 4){
			matriz[9][1] = 'x';
			matriz[9][5] = 'x';
			matriz[10][2] = 'x';
			matriz[10][4] = 'x';
			matriz[11][3] = 'x';
			matriz[12][2] = 'x';
			matriz[12][4] = 'x';
			matriz[13][1] = 'x';
			matriz[13][5] = 'x';
		}if(pos3 == 5){
			matriz[9][10] = 'x';
			matriz[9][14] = 'x';
			matriz[10][11] = 'x';
			matriz[10][13] = 'x';
			matriz[11][12] = 'x';
			matriz[12][11] = 'x';
			matriz[12][13] = 'x';
			matriz[13][10] = 'x';
			matriz[13][14] = 'x';
		}else if(pos3 == 6){
			matriz[9][19] = 'x';
			matriz[9][23] = 'x';
			matriz[10][20] = 'x';
			matriz[10][22] = 'x';
			matriz[11][21] = 'x';
			matriz[12][20] = 'x';
			matriz[12][22] = 'x';
			matriz[13][19] = 'x';
			matriz[13][23] = 'x';
		}if(pos3 == 7){
			matriz[17][1] = 'x';
			matriz[17][5] = 'x';
			matriz[18][2] = 'x';
			matriz[18][4] = 'x';
			matriz[19][3] = 'x';
			matriz[20][2] = 'x';
			matriz[20][4] = 'x';
			matriz[21][1] = 'x';
			matriz[21][5] = 'x';
		}else if(pos3 == 8){
			matriz[17][10] = 'x';
			matriz[17][14] = 'x';
			matriz[18][11] = 'x';
			matriz[18][13] = 'x';
			matriz[19][12] = 'x';
			matriz[20][11] = 'x';
			matriz[20][13] = 'x';
			matriz[21][10] = 'x';
			matriz[21][14] = 'x';
		}if(pos3 == 9){
			matriz[17][19] = 'x';
			matriz[17][23] = 'x';
			matriz[18][20] = 'x';
			matriz[18][22] = 'x';
			matriz[19][21] = 'x';
			matriz[20][20] = 'x';
			matriz[20][22] = 'x';
			matriz[21][19] = 'x';
			matriz[21][23] = 'x';
		}
				}
				}
		jogo(matriz);
		}while(pos3 == pos1 || pos3 == pos2);
		}while(pos3 != 1 && pos3 != 2 && pos3 != 3 && pos3 != 4 && pos3 != 5 && pos3 != 6 && pos3 != 7 && pos3 != 8 && pos3 != 9);
		

		printf("A maquina fez sua jogada\n");
	
		printf("\n");
		printf("\n");
		
		for(k=1; k<=9; k++){
		if(k != pos1 && k != pos2 && k != pos3){
			pos4 = k;
			break;
		}
	}	
		
			if(pos4 == 1){
			matriz[1][2] = 'o';
			matriz[1][3] = 'o';
			matriz[1][4] = 'o';
			matriz[2][1] = 'o';
			matriz[2][5] = 'o';
			matriz[3][1] = 'o';
			matriz[3][5] = 'o';
			matriz[4][1] = 'o';
			matriz[4][5] = 'o';
			matriz[5][2] = 'o';
			matriz[5][3] = 'o';
			matriz[5][4] = 'o';
		}else if(pos4 == 2){
			matriz[1][11] = 'o';
			matriz[1][12] = 'o';
			matriz[1][13] = 'o';
			matriz[2][10] = 'o';
			matriz[2][14] = 'o';
			matriz[3][10] = 'o';
			matriz[3][14] = 'o';
			matriz[4][10] = 'o';
			matriz[4][14] = 'o';
			matriz[5][11] = 'o';
			matriz[5][12] = 'o';
			matriz[5][13] = 'o';
		}if(pos4 == 3){
			matriz[1][20] = 'o';
			matriz[1][21] = 'o';
			matriz[1][22] = 'o';
			matriz[2][19] = 'o';
			matriz[2][23] = 'o';
			matriz[3][19] = 'o';
			matriz[3][23] = 'o';
			matriz[4][19] = 'o';
			matriz[4][23] = 'o';
			matriz[5][20] = 'o';
			matriz[5][21] = 'o';
			matriz[5][22] = 'o';
		}else if(pos4 == 4){
			matriz[9][2] = 'o';
			matriz[9][3] = 'o';
			matriz[9][4] = 'o';
			matriz[10][1] = 'o';
			matriz[10][5] = 'o';
			matriz[11][1] = 'o';
			matriz[11][5] = 'o';
			matriz[12][1] = 'o';
			matriz[12][5] = 'o';
			matriz[13][2] = 'o';
			matriz[13][3] = 'o';
			matriz[13][4] = 'o';
		}if(pos4 == 5){
			matriz[9][11] = 'o';
			matriz[9][12] = 'o';
			matriz[9][13] = 'o';
			matriz[10][10] = 'o';
			matriz[10][14] = 'o';
			matriz[11][10] = 'o';
			matriz[11][14] = 'o';
			matriz[12][10] = 'o';
			matriz[12][14] = 'o';
			matriz[13][11] = 'o';
			matriz[13][12] = 'o';
			matriz[13][13] = 'o';
		}else if(pos4 == 6){
			matriz[9][20] = 'o';
			matriz[9][21] = 'o';
			matriz[9][22] = 'o';
			matriz[10][19] = 'o';
			matriz[10][23] = 'o';
			matriz[11][19] = 'o';
			matriz[11][23] = 'o';
			matriz[12][19] = 'o';
			matriz[12][23] = 'o';
			matriz[13][20] = 'o';
			matriz[13][21] = 'o';
			matriz[13][22] = 'o';
		}if(pos4 == 7){
			matriz[17][2] = 'o';
			matriz[17][3] = 'o';
			matriz[17][4] = 'o';
			matriz[18][1] = 'o';
			matriz[18][5] = 'o';
			matriz[19][1] = 'o';
			matriz[19][5] = 'o';
			matriz[20][1] = 'o';
			matriz[20][5] = 'o';
			matriz[21][2] = 'o';
			matriz[21][3] = 'o';
			matriz[21][4] = 'o';
		}else if(pos4 ==8){
			matriz[17][11] = 'o';
			matriz[17][12] = 'o';
			matriz[17][13] = 'o';
			matriz[18][10] = 'o';
			matriz[18][14] = 'o';
			matriz[19][10] = 'o';
			matriz[19][14] = 'o';
			matriz[20][10] = 'o';
			matriz[20][14] = 'o';
			matriz[21][11] = 'o';
			matriz[21][12] = 'o';
			matriz[21][13] = 'o';
		}if(pos4 == 9){
			matriz[17][20] = 'o';
			matriz[17][21] = 'o';
			matriz[17][22] = 'o';
			matriz[18][19] = 'o';
			matriz[18][23] = 'o';
			matriz[19][19] = 'o';
			matriz[19][23] = 'o';
			matriz[20][19] = 'o';
			matriz[20][23] = 'o';
			matriz[21][20] = 'o';
			matriz[21][21] = 'o';
			matriz[21][22] = 'o';
		}
		jogo(matriz);
		
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		
		do{
		do{
			printf("%s escolha sua posicao ->  ", nome);								//Jogador 1 fazendo sua jogada
			scanf("%d", &pos5);
			
				if(pos5 != 1 && pos5 != 2 && pos5 != 3 && pos5 != 4 && pos5 != 5 && pos5 != 6 && pos5 != 7 && pos5 != 8 && pos5 != 9){
					printf("Digite um numero entre 1 e 9\n");
				}else{
		
				if(pos5 == pos1 || pos5 == pos2 || pos5 == pos3 || pos5 == pos4){
					printf("%s ESTA CASA JA FOI MARCADA\n", nome);
					printf("\n");
				}else{
		
		printf("\n");
		printf("\n");
		
		if(pos5 == 1){
			matriz[1][1] = 'x';
			matriz[1][5] = 'x';
			matriz[2][2] = 'x';
			matriz[2][4] = 'x';
			matriz[3][3] = 'x';
			matriz[4][2] = 'x';
			matriz[4][4] = 'x';
			matriz[5][1] = 'x';
			matriz[5][5] = 'x';
		}else if(pos5 ==2){
			matriz[1][10] = 'x';
			matriz[1][14] = 'x';
			matriz[2][11] = 'x';
			matriz[2][13] = 'x';
			matriz[3][12] = 'x';
			matriz[4][11] = 'x';
			matriz[4][13] = 'x';
			matriz[5][10] = 'x';
			matriz[5][14] = 'x';
		}if(pos5 == 3){
			matriz[1][19] = 'x';
			matriz[1][23] = 'x';
			matriz[2][20] = 'x';
			matriz[2][22] = 'x';
			matriz[3][21] = 'x';
			matriz[4][20] = 'x';
			matriz[4][22] = 'x';
			matriz[5][19] = 'x';
			matriz[5][23] = 'x';
		}else if(pos5 == 4){
			matriz[9][1] = 'x';
			matriz[9][5] = 'x';
			matriz[10][2] = 'x';
			matriz[10][4] = 'x';
			matriz[11][3] = 'x';
			matriz[12][2] = 'x';
			matriz[12][4] = 'x';
			matriz[13][1] = 'x';
			matriz[13][5] = 'x';
		}if(pos5 == 5){
			matriz[9][10] = 'x';
			matriz[9][14] = 'x';
			matriz[10][11] = 'x';
			matriz[10][13] = 'x';
			matriz[11][12] = 'x';
			matriz[12][11] = 'x';
			matriz[12][13] = 'x';
			matriz[13][10] = 'x';
			matriz[13][14] = 'x';
		}else if(pos5 == 6){
			matriz[9][19] = 'x';
			matriz[9][23] = 'x';
			matriz[10][20] = 'x';
			matriz[10][22] = 'x';
			matriz[11][21] = 'x';
			matriz[12][20] = 'x';
			matriz[12][22] = 'x';
			matriz[13][19] = 'x';
			matriz[13][23] = 'x';
		}if(pos5 == 7){
			matriz[17][1] = 'x';
			matriz[17][5] = 'x';
			matriz[18][2] = 'x';
			matriz[18][4] = 'x';
			matriz[19][3] = 'x';
			matriz[20][2] = 'x';
			matriz[20][4] = 'x';
			matriz[21][1] = 'x';
			matriz[21][5] = 'x';
		}else if(pos5 == 8){
			matriz[17][10] = 'x';
			matriz[17][14] = 'x';
			matriz[18][11] = 'x';
			matriz[18][13] = 'x';
			matriz[19][12] = 'x';
			matriz[20][11] = 'x';
			matriz[20][13] = 'x';
			matriz[21][10] = 'x';
			matriz[21][14] = 'x';
		}if(pos5 == 9){
			matriz[17][19] = 'x';
			matriz[17][23] = 'x';
			matriz[18][20] = 'x';
			matriz[18][22] = 'x';
			matriz[19][21] = 'x';
			matriz[20][20] = 'x';
			matriz[20][22] = 'x';
			matriz[21][19] = 'x';
			matriz[21][23] = 'x';
		}
				}
				}
		jogo(matriz);
		}while(pos5 == pos1 || pos5 == pos2 || pos5 == pos3 || pos5 == pos4);
		}while(pos5 != 1 && pos5 != 2 && pos5 != 3 && pos5 != 4 && pos5 != 5 && pos5 != 6 && pos5 != 7 && pos5 != 8 && pos5 != 9);
		
		printf("\n");
		printf("\n");
		
		//pos1, pos3, pos5.															//posiçoes de vitoria para jogador 1.
			if(pos1 == 1 && pos3 == 2 && pos5 == 3){
				printf("%s venceu!\n", nome);break;	
			}else if(pos1 == 1 && pos3 == 3 && pos5 == 2){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 2 && pos3 == 1 && pos5 == 3){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 2 && pos3 == 3 && pos5 == 1){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 3 && pos3 == 1 && pos5 == 2){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 3 && pos3 == 2 && pos5 == 1){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 4 && pos3 == 5 && pos5 ==6){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 4 && pos3 == 6 && pos5 == 5){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 5 && pos3 == 4 && pos5 == 6){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 5 && pos3 == 6 && pos5 == 4){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 6 && pos3 == 4 && pos5 == 5){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 6 && pos3 == 5 && pos5 == 4){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 7 && pos3 == 8 && pos5 == 9){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 7 && pos3 == 9 && pos5 == 8){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 8 && pos3 == 7 && pos5 == 9){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 8 && pos3 == 9 && pos5 == 7){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 9 && pos3 == 7 && pos5 == 8){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 9 && pos3 == 8 && pos5 == 7){
				printf("%s venceu!\n", nome);break;	
			}if(pos1 == 1 && pos3 == 5 && pos5 == 9){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 1 && pos3 == 9 && pos5 == 5){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 5 && pos3 == 1 && pos5 == 9){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 5 && pos3 == 9 && pos5 == 1){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 9 && pos3 == 1 && pos5 == 5){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 9 && pos3 == 5 && pos5 == 1){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 3 && pos3 == 5 && pos5 == 7){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 3 && pos3 == 7 && pos5 == 5){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 5 && pos3 == 3 && pos5 == 7){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 5 && pos3 == 7 && pos5 == 3){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 7 && pos3 == 5 && pos5 == 3){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 7 && pos3 == 3 && pos5 == 5){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 1 && pos3 == 4 && pos5 == 7){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 1 && pos3 == 7 && pos5 == 4){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 4 && pos3 == 1 && pos5 == 7){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 4 && pos3 == 7 && pos5 == 1){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 7 && pos3 == 4 && pos5 == 1){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 7 && pos3 == 1 && pos5 == 4){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 2 && pos3 == 5 && pos5 == 8){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 2 && pos3 == 8 && pos5 == 5){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 5 && pos3 == 2 && pos5 == 8){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 5 && pos3 == 8 && pos5 == 2){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 8 && pos3 == 5 && pos5 == 2){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 8 && pos3 == 2 && pos5 == 5){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 3 && pos3 == 6 && pos5 == 9){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 3 && pos3 == 9 && pos5 == 6){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 6 && pos3 == 3 && pos5 == 9){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 6 && pos3 == 9 && pos5 == 3){
				printf("%s venceu!\n", nome);break;
			}if(pos1 == 9 && pos3 == 6 && pos5 == 3){
				printf("%s venceu!\n", nome);break;
			}else if(pos1 == 9 && pos3 == 3 && pos5 == 6){
				printf("%s venceu!\n", nome);break;
			}
		

		printf("A maquina fez sua jogada\n");
		
		printf("\n");
		printf("\n");
		
		for(k=1; k<=9; k++){
		if(k != pos1 && k != pos2 && k != pos3 && k != pos4 && k!= pos5){
			pos6 = k;
			break;
		}
	}
		
		if(pos6 == 1){
			matriz[1][2] = 'o';
			matriz[1][3] = 'o';
			matriz[1][4] = 'o';
			matriz[2][1] = 'o';
			matriz[2][5] = 'o';
			matriz[3][1] = 'o';
			matriz[3][5] = 'o';
			matriz[4][1] = 'o';
			matriz[4][5] = 'o';
			matriz[5][2] = 'o';
			matriz[5][3] = 'o';
			matriz[5][4] = 'o';
		}else if(pos6 == 2){
			matriz[1][11] = 'o';
			matriz[1][12] = 'o';
			matriz[1][13] = 'o';
			matriz[2][10] = 'o';
			matriz[2][14] = 'o';
			matriz[3][10] = 'o';
			matriz[3][14] = 'o';
			matriz[4][10] = 'o';
			matriz[4][14] = 'o';
			matriz[5][11] = 'o';
			matriz[5][12] = 'o';
			matriz[5][13] = 'o';
		}if(pos6 == 3){
			matriz[1][20] = 'o';
			matriz[1][21] = 'o';
			matriz[1][22] = 'o';
			matriz[2][19] = 'o';
			matriz[2][23] = 'o';
			matriz[3][19] = 'o';
			matriz[3][23] = 'o';
			matriz[4][19] = 'o';
			matriz[4][23] = 'o';
			matriz[5][20] = 'o';
			matriz[5][21] = 'o';
			matriz[5][22] = 'o';
		}else if(pos6 == 4){
			matriz[9][2] = 'o';
			matriz[9][3] = 'o';
			matriz[9][4] = 'o';
			matriz[10][1] = 'o';
			matriz[10][5] = 'o';
			matriz[11][1] = 'o';
			matriz[11][5] = 'o';
			matriz[12][1] = 'o';
			matriz[12][5] = 'o';
			matriz[13][2] = 'o';
			matriz[13][3] = 'o';
			matriz[13][4] = 'o';
		}if(pos6 == 5){
			matriz[9][11] = 'o';
			matriz[9][12] = 'o';
			matriz[9][13] = 'o';
			matriz[10][10] = 'o';
			matriz[10][14] = 'o';
			matriz[11][10] = 'o';
			matriz[11][14] = 'o';
			matriz[12][10] = 'o';
			matriz[12][14] = 'o';
			matriz[13][11] = 'o';
			matriz[13][12] = 'o';
			matriz[13][13] = 'o';
		}else if(pos6 == 6){
			matriz[9][20] = 'o';
			matriz[9][21] = 'o';
			matriz[9][22] = 'o';
			matriz[10][19] = 'o';
			matriz[10][23] = 'o';
			matriz[11][19] = 'o';
			matriz[11][23] = 'o';
			matriz[12][19] = 'o';
			matriz[12][23] = 'o';
			matriz[13][20] = 'o';
			matriz[13][21] = 'o';
			matriz[13][22] = 'o';
		}if(pos6 == 7){
			matriz[17][2] = 'o';
			matriz[17][3] = 'o';
			matriz[17][4] = 'o';
			matriz[18][1] = 'o';
			matriz[18][5] = 'o';
			matriz[19][1] = 'o';
			matriz[19][5] = 'o';
			matriz[20][1] = 'o';
			matriz[20][5] = 'o';
			matriz[21][2] = 'o';
			matriz[21][3] = 'o';
			matriz[21][4] = 'o';
		}else if(pos6 == 8){
			matriz[17][11] = 'o';
			matriz[17][12] = 'o';
			matriz[17][13] = 'o';
			matriz[18][10] = 'o';
			matriz[18][14] = 'o';
			matriz[19][10] = 'o';
			matriz[19][14] = 'o';
			matriz[20][10] = 'o';
			matriz[20][14] = 'o';
			matriz[21][11] = 'o';
			matriz[21][12] = 'o';
			matriz[21][13] = 'o';
		}if(pos6 == 9){
			matriz[17][20] = 'o';
			matriz[17][21] = 'o';
			matriz[17][22] = 'o';
			matriz[18][19] = 'o';
			matriz[18][23] = 'o';
			matriz[19][19] = 'o';
			matriz[19][23] = 'o';
			matriz[20][19] = 'o';
			matriz[20][23] = 'o';
			matriz[21][20] = 'o';
			matriz[21][21] = 'o';
			matriz[21][22] = 'o';
		}
		jogo(matriz);
		
		printf("\n");
		printf("\n");
		printf("\n");
		printf("\n");
		
		//pos2, pos4, pos6.															//posiçoes de vitoria da maquina.
		if(pos2 == 1 && pos4 == 2 && pos6 == 3){
			printf("A maquina venceu!\n");break;	
		}else if(pos2 == 1 && pos4 == 3 && pos6 == 2){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 2 && pos4 == 1 && pos6 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 2 && pos4 == 3 && pos6 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 3 && pos4 == 1 && pos6 == 2){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 3 && pos4 == 2 && pos6 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 4 && pos4 == 5 && pos6 ==6){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 4 && pos4 == 6 && pos6 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 5 && pos4 == 4 && pos6 == 6){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos4 == 6 && pos6 == 4){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 6 && pos4 == 4 && pos6 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 6 && pos4 == 5 && pos6 == 4){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 7 && pos4 == 8 && pos6 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 7 && pos4 == 9 && pos6 == 8){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 8 && pos4 == 7 && pos6 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 8 && pos4 == 9 && pos6 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 9 && pos4 == 7 && pos6 == 8){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 9 && pos4 == 8 && pos6 == 7){
			printf("A maquina venceu!\n", nomi);break;	
		}if(pos2 == 1 && pos4 == 5 && pos6 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 1 && pos4 == 9 && pos6 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 5 && pos4 == 1 && pos6 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos4 == 9 && pos6 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 9 && pos4 == 1 && pos6 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 9 && pos4 == 5 && pos6 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 3 && pos4 == 5 && pos6 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 3 && pos4 == 7 && pos6 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 5 && pos4 == 3 && pos6 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos4 == 7 && pos6 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 7 && pos4 == 5 && pos6 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 7 && pos4 == 3 && pos6 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 1 && pos4 == 4 && pos6 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 1 && pos4 == 7 && pos6 == 4){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 4 && pos4 == 1 && pos6 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 4 && pos4 == 7 && pos6 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 7 && pos4 == 4 && pos6 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 7 && pos4 == 1 && pos6 == 4){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 2 && pos4 == 5 && pos6 == 8){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 2 && pos4 == 8 && pos6 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 5 && pos4 == 2 && pos6 == 8){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos4 == 8 && pos6 == 2){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 8 && pos4 == 5 && pos6 == 2){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 8 && pos4 == 2 && pos6 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 3 && pos4 == 6 && pos6 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 3 && pos4 == 9 && pos6 == 6){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 6 && pos4 == 3 && pos6 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 6 && pos4 == 9 && pos6 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 9 && pos4 == 6 && pos6 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 9 && pos4 == 3 && pos6 == 6){
			printf("A maquina venceu!\n", nomi);break;
		}
		
		do{
		do{
			printf("%s escolha sua posicao ->  ", nome);								//Jogador 1 fazendo sua jogada
			scanf("%d", &pos7);
				
				if(pos7 != 1 && pos7 != 2 && pos7 != 3 && pos7 != 4 && pos7 != 5 && pos7 != 6 && pos7 != 7 && pos7 != 8 && pos7 != 9){
					printf("Digite um numero entre 1 e 9\n");
				}else{
			
				if(pos7 == pos1 || pos7 == pos2 || pos7 == pos3 || pos7 == pos4 || pos7 == pos5 || pos7 == pos6){
					printf("%s ESTA CASA JA FOI MARCADA\n", nome);
					printf("\n");
				}else{
		
		printf("\n");
		printf("\n");
		printf("\n");
		
		if(pos7 == 1){
			matriz[1][1] = 'x';
			matriz[1][5] = 'x';
			matriz[2][2] = 'x';
			matriz[2][4] = 'x';
			matriz[3][3] = 'x';
			matriz[4][2] = 'x';
			matriz[4][4] = 'x';
			matriz[5][1] = 'x';
			matriz[5][5] = 'x';
		}else if(pos7 == 2){
			matriz[1][10] = 'x';
			matriz[1][14] = 'x';
			matriz[2][11] = 'x';
			matriz[2][13] = 'x';
			matriz[3][12] = 'x';
			matriz[4][11] = 'x';
			matriz[4][13] = 'x';
			matriz[5][10] = 'x';
			matriz[5][14] = 'x';
		}if(pos7 == 3){
			matriz[1][19] = 'x';
			matriz[1][23] = 'x';
			matriz[2][20] = 'x';
			matriz[2][22] = 'x';
			matriz[3][21] = 'x';
			matriz[4][20] = 'x';
			matriz[4][22] = 'x';
			matriz[5][19] = 'x';
			matriz[5][23] = 'x';
		}else if(pos7 == 4){
			matriz[9][1] = 'x';
			matriz[9][5] = 'x';
			matriz[10][2] = 'x';
			matriz[10][4] = 'x';
			matriz[11][3] = 'x';
			matriz[12][2] = 'x';
			matriz[12][4] = 'x';
			matriz[13][1] = 'x';
			matriz[13][5] = 'x';
		}if(pos7 == 5){
			matriz[9][10] = 'x';
			matriz[9][14] = 'x';
			matriz[10][11] = 'x';
			matriz[10][13] = 'x';
			matriz[11][12] = 'x';
			matriz[12][11] = 'x';
			matriz[12][13] = 'x';
			matriz[13][10] = 'x';
			matriz[13][14] = 'x';
		}else if(pos7 == 6){
			matriz[9][19] = 'x';
			matriz[9][23] = 'x';
			matriz[10][20] = 'x';
			matriz[10][22] = 'x';
			matriz[11][21] = 'x';
			matriz[12][20] = 'x';
			matriz[12][22] = 'x';
			matriz[13][19] = 'x';
			matriz[13][23] = 'x';
		}if(pos7 == 7){
			matriz[17][1] = 'x';
			matriz[17][5] = 'x';
			matriz[18][2] = 'x';
			matriz[18][4] = 'x';
			matriz[19][3] = 'x';
			matriz[20][2] = 'x';
			matriz[20][4] = 'x';
			matriz[21][1] = 'x';
			matriz[21][5] = 'x';
		}else if(pos7 == 8){
			matriz[17][10] = 'x';
			matriz[17][14] = 'x';
			matriz[18][11] = 'x';
			matriz[18][13] = 'x';
			matriz[19][12] = 'x';
			matriz[20][11] = 'x';
			matriz[20][13] = 'x';
			matriz[21][10] = 'x';
			matriz[21][14] = 'x';
		}if(pos7 == 9){
			matriz[17][19] = 'x';
			matriz[17][23] = 'x';
			matriz[18][20] = 'x';
			matriz[18][22] = 'x';
			matriz[19][21] = 'x';
			matriz[20][20] = 'x';
			matriz[20][22] = 'x';
			matriz[21][19] = 'x';
			matriz[21][23] = 'x';
		}
				}
				}
		jogo(matriz);
		}while(pos7 == pos1 || pos7 == pos2 || pos7 == pos3 || pos7 == pos4 || pos7 == pos5 || pos7 == pos6);
		}while(pos7 != 1 && pos7 != 2 && pos7 != 3 && pos7 != 4 && pos7 != 5 && pos7 != 6 && pos7 != 7 && pos7 != 8 && pos7 != 9);
		
		printf("\n");
		
		// pos1, pos3, pos7.														//posiçoes de vitoria para jogador 1.
		if(pos1 == 1 && pos3 == 2 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos3 == 3 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 2 && pos3 == 1 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 2 && pos3 == 3 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos3 == 1 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos3 == 2 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 4 && pos3 == 5 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 4 && pos3 == 6 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos3 == 4 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos3 == 6 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 6 && pos3 == 4 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 6 && pos3 == 5 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos3 == 8 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos3 == 9 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 8 && pos3 == 7 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 8 && pos3 == 9 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos3 == 7 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos3 == 8 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 1 && pos3 == 4 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos3 == 7 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 4 && pos3 == 1 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 4 && pos3 == 7 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos3 == 4 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos3 == 1 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 2 && pos3 == 5 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 2 && pos3 == 8 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos3 == 2 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos3 == 8 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 8 && pos3 == 5 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 8 && pos3 == 2 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos3 == 6 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos3 == 9 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 6 && pos3 == 3 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 6 && pos3 == 9 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos3 == 6 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos3 == 3 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 1 && pos3 == 5 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos3 == 9 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos3 == 1 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos3 == 9 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos3 == 5 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos3 == 1 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos3 == 5 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos3 == 7 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos3 == 3 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos3 == 7 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos3 == 5 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos3 == 3 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}
		
		//pos1, pos5, pos7.															//posiçoes de vitoria para jogador 1.
		if(pos1 == 1 && pos5 == 2 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos5 == 3 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 2 && pos5 == 1 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 2 && pos5 == 3 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos5 == 1 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos5 == 2 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 4 && pos5 == 5 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 4 && pos5 == 6 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos5 == 4 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos5 == 6 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 6 && pos5 == 4 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 6 && pos5 == 5 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos5 == 8 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos5 == 9 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 8 && pos5 == 7 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 8 && pos5 == 9 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos5 == 7 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos5 == 8 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 1 && pos5 == 4 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos5 == 7 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 4 && pos5 == 1 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 4 && pos5 == 7 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos5 == 4 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos5 == 1 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 2 && pos5 == 5 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 2 && pos5 == 8 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos5 == 2 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos5 == 8 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 8 && pos5 == 5 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 8 && pos5 == 2 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos5 == 6 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos5 == 9 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 6 && pos5 == 3 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 6 && pos5 == 9 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos5 == 6 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos5 == 3 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 1 && pos5 == 5 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos5 == 9 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos5 == 1 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos5 == 9 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos5 == 5 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos5 == 1 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos5 == 5 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos5 == 7 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos5 == 3 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos5 == 7 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos5 == 5 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos5 == 3 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}
		
		//pos3, pos5, pos7.															//posiçoes de vitoria para jogador 1.
		if(pos3 == 1 && pos5 == 2 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 1 && pos5 == 3 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 2 && pos5 == 1 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 2 && pos5 == 3 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 3 && pos5 == 1 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 3 && pos5 == 2 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 4 && pos5 == 5 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 4 && pos5 == 6 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos5 == 4 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos5 == 6 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 6 && pos5 == 4 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 6 && pos5 == 5 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 7 && pos5 == 8 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 7 && pos5 == 9 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 8 && pos5 == 7 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 8 && pos5 == 9 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 9 && pos5 == 7 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 9 && pos5 == 8 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 1 && pos5 == 4 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 1 && pos5 == 7 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 4 && pos5 == 1 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 4 && pos5 == 7 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 7 && pos5 == 4 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 7 && pos5 == 1 && pos7 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 2 && pos5 == 5 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 2 && pos5 == 8 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos5 == 2 && pos7 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos5 == 8 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 8 && pos5 == 5 && pos7 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 8 && pos5 == 2 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 3 && pos5 == 6 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 3 && pos5 == 9 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 6 && pos5 == 3 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 6 && pos5 == 9 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 9 && pos5 == 6 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 9 && pos5 == 3 && pos7 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 1 && pos5 == 5 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 1 && pos5 == 9 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos5 == 1 && pos7 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos5 == 9 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 9 && pos5 == 5 && pos7 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 9 && pos5 == 1 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 3 && pos5 == 5 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 3 && pos5 == 7 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos5 == 3 && pos7 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos5 == 7 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 7 && pos5 == 5 && pos7 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 7 && pos5 == 3 && pos7 == 5){
			printf("%s venceu!\n", nome);break;
		}
				
		printf("A maquina fez sua jogada\n");
		
		printf("\n");
		printf("\n");
		
		for(k=1; k<=9; k++){
		if(k != pos1 && k != pos2 && k != pos3 && k != pos4 && k!= pos5 && k != pos6 && k != pos7){
			pos8 = k;
			break;
		}
	}
		
		if(pos8 == 1){
			matriz[1][2] = 'o';
			matriz[1][3] = 'o';
			matriz[1][4] = 'o';
			matriz[2][1] = 'o';
			matriz[2][5] = 'o';
			matriz[3][1] = 'o';
			matriz[3][5] = 'o';
			matriz[4][1] = 'o';
			matriz[4][5] = 'o';
			matriz[5][2] = 'o';
			matriz[5][3] = 'o';
			matriz[5][4] = 'o';
		}else if(pos8 == 2){
			matriz[1][11] = 'o';
			matriz[1][12] = 'o';
			matriz[1][13] = 'o';
			matriz[2][10] = 'o';
			matriz[2][14] = 'o';
			matriz[3][10] = 'o';
			matriz[3][14] = 'o';
			matriz[4][10] = 'o';
			matriz[4][14] = 'o';
			matriz[5][11] = 'o';
			matriz[5][12] = 'o';
			matriz[5][13] = 'o';
		}if(pos8 == 3){
			matriz[1][20] = 'o';
			matriz[1][21] = 'o';
			matriz[1][22] = 'o';
			matriz[2][19] = 'o';
			matriz[2][23] = 'o';
			matriz[3][19] = 'o';
			matriz[3][23] = 'o';
			matriz[4][19] = 'o';
			matriz[4][23] = 'o';
			matriz[5][20] = 'o';
			matriz[5][21] = 'o';
			matriz[5][22] = 'o';
		}else if(pos8 == 4){
			matriz[9][2] = 'o';
			matriz[9][3] = 'o';
			matriz[9][4] = 'o';
			matriz[10][1] = 'o';
			matriz[10][5] = 'o';
			matriz[11][1] = 'o';
			matriz[11][5] = 'o';
			matriz[12][1] = 'o';
			matriz[12][5] = 'o';
			matriz[13][2] = 'o';
			matriz[13][3] = 'o';
			matriz[13][4] = 'o';
		}if(pos8 == 5){
			matriz[9][11] = 'o';
			matriz[9][12] = 'o';
			matriz[9][13] = 'o';
			matriz[10][10] = 'o';
			matriz[10][14] = 'o';
			matriz[11][10] = 'o';
			matriz[11][14] = 'o';
			matriz[12][10] = 'o';
			matriz[12][14] = 'o';
			matriz[13][11] = 'o';
			matriz[13][12] = 'o';
			matriz[13][13] = 'o';
		}else if(pos8 == 6){
			matriz[9][20] = 'o';
			matriz[9][21] = 'o';
			matriz[9][22] = 'o';
			matriz[10][19] = 'o';
			matriz[10][23] = 'o';
			matriz[11][19] = 'o';
			matriz[11][23] = 'o';
			matriz[12][19] = 'o';
			matriz[12][23] = 'o';
			matriz[13][20] = 'o';
			matriz[13][21] = 'o';
			matriz[13][22] = 'o';
		}if(pos8 == 7){
			matriz[17][2] = 'o';
			matriz[17][3] = 'o';
			matriz[17][4] = 'o';
			matriz[18][1] = 'o';
			matriz[18][5] = 'o';
			matriz[19][1] = 'o';
			matriz[19][5] = 'o';
			matriz[20][1] = 'o';
			matriz[20][5] = 'o';
			matriz[21][2] = 'o';
			matriz[21][3] = 'o';
			matriz[21][4] = 'o';
		}else if(pos8 == 8){
			matriz[17][11] = 'o';
			matriz[17][12] = 'o';
			matriz[17][13] = 'o';
			matriz[18][10] = 'o';
			matriz[18][14] = 'o';
			matriz[19][10] = 'o';
			matriz[19][14] = 'o';
			matriz[20][10] = 'o';
			matriz[20][14] = 'o';
			matriz[21][11] = 'o';
			matriz[21][12] = 'o';
			matriz[21][13] = 'o';
		}if(pos8 == 9){
			matriz[17][20] = 'o';
			matriz[17][21] = 'o';
			matriz[17][22] = 'o';
			matriz[18][19] = 'o';
			matriz[18][23] = 'o';
			matriz[19][19] = 'o';
			matriz[19][23] = 'o';
			matriz[20][19] = 'o';
			matriz[20][23] = 'o';
			matriz[21][20] = 'o';
			matriz[21][21] = 'o';
			matriz[21][22] = 'o';
		}
		jogo(matriz);
		
		printf("\n");
		printf("\n");
		printf("\n");
		
		//pos2, pos4, pos8.															//posiçoes de vitoria para a maquina.
		if(pos2 == 1 && pos4 == 2 && pos8 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 1 && pos4 == 3 && pos8 == 2){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 2 && pos4 == 1 && pos8 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 2 && pos4 == 3 && pos8 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 3 && pos4 == 1 && pos8 == 2){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 3 && pos4 == 2 && pos8 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 4 && pos4 == 5 && pos8 == 6){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 4 && pos4 == 6 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 5 && pos4 == 4 && pos8 == 6){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos4 == 6 && pos8 == 4){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 6 && pos4 == 4 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 6 && pos4 == 5 && pos8 == 4){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 7 && pos4 == 8 && pos8 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 7 && pos4 == 9 && pos8 == 8){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 8 && pos4 == 7 && pos8 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 8 && pos4 == 9 && pos8 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 9 && pos4 == 7 && pos8 == 8){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 9 && pos4 == 8 && pos8 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 1 && pos4 == 4 && pos8 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 1 && pos4 == 7 && pos8 == 4){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 4 && pos4 == 1 && pos8 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 4 && pos4 == 7 && pos8 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 7 && pos4 == 4 && pos8 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 7 && pos4 == 1 && pos8 == 4){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 2 && pos4 == 5 && pos8 == 8){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 2 && pos4 == 8 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 5 && pos4 == 2 && pos8 == 8){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos4 == 8 && pos8 == 2){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 8 && pos4 == 5 && pos8 == 2){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 8 && pos4 == 2 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 3 && pos4 == 6 && pos8 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 3 && pos4 == 9 && pos8 == 6){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 6 && pos4 == 3 && pos8 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 6 && pos4 == 9 && pos8 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 9 && pos4 == 6 && pos8 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 9 && pos4 == 3 && pos8 == 6){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 1 && pos4 == 5 && pos8 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 1 && pos4 == 9 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 5 && pos4 == 1 && pos8 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos4 == 9 && pos8 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 9 && pos4 == 5 && pos8 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 9 && pos4 == 1 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 3 && pos4 == 5 && pos8 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 3 && pos4 == 7 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 5 && pos4 == 3 && pos8 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos4 == 7 && pos8 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 7 && pos4 == 5 && pos8 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 7 && pos4 == 3 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}
		
		//pos2, pos6, pos8.															//posiçoes de vitoria para a maquina.
		if(pos2 == 1 && pos6 == 2 && pos8 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 1 && pos6 == 3 && pos8 == 2){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 2 && pos6 == 1 && pos8 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 2 && pos6 == 3 && pos8 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 3 && pos6 == 1 && pos8 == 2){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 3 && pos6 == 2 && pos8 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 4 && pos6 == 5 && pos8 == 6){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 4 && pos6 == 6 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 5 && pos6 == 4 && pos8 == 6){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos6 == 6 && pos8 == 4){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 6 && pos6 == 4 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 6 && pos6 == 5 && pos8 == 4){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 7 && pos6 == 8 && pos8 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 7 && pos6 == 9 && pos8 == 8){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 8 && pos6 == 7 && pos8 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 8 && pos6 == 9 && pos8 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 9 && pos6 == 7 && pos8 == 8){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 9 && pos6 == 8 && pos8 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 1 && pos6 == 4 && pos8 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 1 && pos6 == 7 && pos8 == 4){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 4 && pos6 == 1 && pos8 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 4 && pos6 == 7 && pos8 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 7 && pos6 == 4 && pos8 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 7 && pos6 == 1 && pos8 == 4){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 2 && pos6 == 5 && pos8 == 8){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 2 && pos6 == 8 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 5 && pos6 == 2 && pos8 == 8){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos5 == 8 && pos8 == 2){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 8 && pos6 == 5 && pos8 == 2){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 8 && pos6 == 2 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 3 && pos6 == 6 && pos8 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 3 && pos6 == 9 && pos8 == 6){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 6 && pos6 == 3 && pos8 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 6 && pos6 == 9 && pos8 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 9 && pos6 == 6 && pos8 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 9 && pos6 == 3 && pos8 == 6){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 1 && pos6 == 5 && pos8 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 1 && pos6 == 9 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 5 && pos6 == 1 && pos8 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos6 == 9 && pos8 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 9 && pos6 == 5 && pos8 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 9 && pos6 == 1 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 3 && pos6 == 5 && pos8 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 3 && pos6 == 7 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 5 && pos6 == 3 && pos8 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 5 && pos6 == 7 && pos8 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos2 == 7 && pos6 == 5 && pos8 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos2 == 7 && pos6 == 3 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}
		
		//pos4, pos6, pos8.															//posiçoes de vitoria para a maquina.
		if(pos4 == 1 && pos6 == 2 && pos8 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 1 && pos6 == 3 && pos8 == 2){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 2 && pos6 == 1 && pos8 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 2 && pos6 == 3 && pos8 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 3 && pos6 == 1 && pos8 == 2){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 3 && pos6 == 2 && pos8 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 4 && pos6 == 5 && pos8 == 6){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 4 && pos6 == 6 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 5 && pos6 == 4 && pos8 == 6){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 5 && pos6 == 6 && pos8 == 4){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 6 && pos6 == 4 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 6 && pos6 == 5 && pos8 == 4){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 7 && pos6 == 8 && pos8 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 7 && pos6 == 9 && pos8 == 8){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 8 && pos6 == 7 && pos8 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 8 && pos6 == 9 && pos8 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 9 && pos6 == 7 && pos8 == 8){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 9 && pos6 == 8 && pos8 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 1 && pos6 == 4 && pos8 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 1 && pos6 == 7 && pos8 == 4){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 4 && pos6 == 1 && pos8 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 4 && pos6 == 7 && pos8 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 7 && pos6 == 4 && pos8 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 7 && pos6 == 1 && pos8 == 4){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 2 && pos6 == 5 && pos8 == 8){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 2 && pos6 == 8 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 5 && pos6 == 2 && pos8 == 8){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 5 && pos6 == 8 && pos8 == 2){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 8 && pos6 == 5 && pos8 == 2){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 8 && pos6 == 2 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 3 && pos6 == 6 && pos8 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 3 && pos6 == 9 && pos8 == 6){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 6 && pos6 == 3 && pos8 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 6 && pos6 == 9 && pos8 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 9 && pos6 == 6 && pos8 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 9 && pos6 == 3 && pos8 == 6){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 1 && pos6 == 5 && pos8 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 1 && pos6 == 9 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 5 && pos6 == 1 && pos8 == 9){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 5 && pos6 == 9 && pos8 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 9 && pos6 == 5 && pos8 == 1){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 9 && pos6 == 1 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 3 && pos6 == 5 && pos8 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 3 && pos6 == 7 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 5 && pos6 == 3 && pos8 == 7){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 5 && pos6 == 7 && pos8 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}if(pos4 == 7 && pos6 == 5 && pos8 == 3){
			printf("A maquina venceu!\n", nomi);break;
		}else if(pos4 == 7 && pos6 == 3 && pos8 == 5){
			printf("A maquina venceu!\n", nomi);break;
		}
		
		do{
		do{
			printf("%s escolha sua posicao ->  ", nome);								//Jogador 1 fazendo sua jogada
			scanf("%d", &pos9);
			
				if(pos9 != 1 && pos9 != 2 && pos9 != 3 && pos9 != 4 && pos9 != 5 && pos9 != 6 && pos9 != 7 && pos9 != 8 && pos9 != 9){
					printf("Digite um numero entre 1 e 9\n");
				}else{
			
				if(pos9 == pos1 || pos9 == pos2 || pos9 == pos3 || pos9 == pos4 || pos9 == pos5 || pos9 == pos6 || pos9 == pos7 || pos9 == pos8){
					printf("%s ESTA CASA JA FOI MARCADA\n", nome);
					printf("\n");
				}else{
		
		if(pos9 == 1){
			matriz[1][1] = 'x';
			matriz[1][5] = 'x';
			matriz[2][2] = 'x';
			matriz[2][4] = 'x';
			matriz[3][3] = 'x';
			matriz[4][2] = 'x';
			matriz[4][4] = 'x';
			matriz[5][1] = 'x';
			matriz[5][5] = 'x';
		}else if(pos9 == 2){
			matriz[1][10] = 'x';
			matriz[1][14] = 'x';
			matriz[2][11] = 'x';
			matriz[2][13] = 'x';
			matriz[3][12] = 'x';
			matriz[4][11] = 'x';
			matriz[4][13] = 'x';
			matriz[5][10] = 'x';
			matriz[5][14] = 'x';
		}if(pos9 == 3){
			matriz[1][19] = 'x';
			matriz[1][23] = 'x';
			matriz[2][20] = 'x';
			matriz[2][22] = 'x';
			matriz[3][21] = 'x';
			matriz[4][20] = 'x';
			matriz[4][22] = 'x';
			matriz[5][19] = 'x';
			matriz[5][23] = 'x';
		}else if(pos9 == 4){
			matriz[9][1] = 'x';
			matriz[9][5] = 'x';
			matriz[10][2] = 'x';
			matriz[10][4] = 'x';
			matriz[11][3] = 'x';
			matriz[12][2] = 'x';
			matriz[12][4] = 'x';
			matriz[13][1] = 'x';
			matriz[13][5] = 'x';
		}if(pos9 == 5){
			matriz[9][10] = 'x';
			matriz[9][14] = 'x';
			matriz[10][11] = 'x';
			matriz[10][13] = 'x';
			matriz[11][12] = 'x';
			matriz[12][11] = 'x';
			matriz[12][13] = 'x';
			matriz[13][10] = 'x';
			matriz[13][14] = 'x';
		}else if(pos9 == 6){
			matriz[9][19] = 'x';
			matriz[9][23] = 'x';
			matriz[10][20] = 'x';
			matriz[10][22] = 'x';
			matriz[11][21] = 'x';
			matriz[12][20] = 'x';
			matriz[12][22] = 'x';
			matriz[13][19] = 'x';
			matriz[13][23] = 'x';
		}if(pos9 == 7){
			matriz[17][1] = 'x';
			matriz[17][5] = 'x';
			matriz[18][2] = 'x';
			matriz[18][4] = 'x';
			matriz[19][3] = 'x';
			matriz[20][2] = 'x';
			matriz[20][4] = 'x';
			matriz[21][1] = 'x';
			matriz[21][5] = 'x';
		}else if(pos9 == 8){
			matriz[17][10] = 'x';
			matriz[17][14] = 'x';
			matriz[18][11] = 'x';
			matriz[18][13] = 'x';
			matriz[19][12] = 'x';
			matriz[20][11] = 'x';
			matriz[20][13] = 'x';
			matriz[21][10] = 'x';
			matriz[21][14] = 'x';
		}if(pos9 == 9){
			matriz[17][19] = 'x';
			matriz[17][23] = 'x';
			matriz[18][20] = 'x';
			matriz[18][22] = 'x';
			matriz[19][21] = 'x';
			matriz[20][20] = 'x';
			matriz[20][22] = 'x';
			matriz[21][19] = 'x';
			matriz[21][23] = 'x';
		}
				}
				}
		jogo(matriz);
		}while(pos9 == pos1 || pos9 == pos2 || pos9 == pos3 || pos9 == pos4 || pos9 == pos5 || pos9 == pos6 || pos9 == pos7 || pos9 == pos8);
		}while(pos9 != 1 && pos9 != 2 && pos9 != 3 && pos9 != 4 && pos9 != 5 && pos9 != 6 && pos9 != 7 && pos9 != 8 && pos9 != 9);

		printf("\n");
		printf("\n");
		printf("\n");
		
		//pos1, pos3, pos9.															//posiçoes de vitoria para jogador 1.
		if(pos1 == 1 && pos3 == 2 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos3 == 3 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 2 && pos3 == 1 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 2 && pos3 == 3 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos3 == 1 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos3 == 2 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 4 && pos3 == 5 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 4 && pos3 == 6 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos3 == 4 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos3 == 6 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 6 && pos3 == 4 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 6 && pos3 == 5 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos3 == 8 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos3 == 9 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 8 && pos3 == 7 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 8 && pos3 == 9 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos3 == 7 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos3 == 8 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 1 && pos3 == 4 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos3 == 7 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 4 && pos3 == 1 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 4 && pos3 == 7 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos3 == 4 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos3 == 1 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 2 && pos3 == 5 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 2 && pos3 == 8 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos3 == 2 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos3 == 8 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 8 && pos3 == 5 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 8 && pos3 == 2 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos3 == 6 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos3 == 9 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 6 && pos3 == 3 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 6 && pos3 == 9 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos3 == 6 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos3 == 3 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 1 && pos3 == 5 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos3 == 9 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos3 == 1 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos3 == 9 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos3 == 5 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos3 == 1 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos3 == 5 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos3 == 7 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos3 == 3 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos3 == 7 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos3 == 5 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos3 == 3 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}
		
		//pos1, pos5, pos9.															//posiçoes de vitoria para jogador 1.
		if(pos1 == 1 && pos5 == 2 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos5 == 3 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 2 && pos5 == 1 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 2 && pos5 == 3 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos5 == 1 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos5 == 2 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 4 && pos5 == 5 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 4 && pos5 == 6 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos5 == 4 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos5 == 6 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 6 && pos5 == 4 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 6 && pos5 == 5 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos5 == 8 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos5 == 9 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 8 && pos5 == 7 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 8 && pos5 == 9 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos5 == 7 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos5 == 8 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 1 && pos5 == 4 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos5 == 7 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 4 && pos5 == 1 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 4 && pos5 == 7 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos5 == 4 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos5 == 1 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 2 && pos5 == 5 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 2 && pos5 == 8 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos5 == 2 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos5 == 8 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 8 && pos5 == 5 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 8 && pos5 == 2 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos5 == 6 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos5 == 9 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 6 && pos5 == 3 && pos9 == 9){
			printf("%s venceu!\n", nome);break;;
		}else if(pos1 == 6 && pos5 == 9 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos5 == 6 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos5 == 3 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 1 && pos5 == 5 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos5 == 9 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos5 == 1 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos5 == 9 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos5 == 5 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos5 == 1 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos5 == 5 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos5 == 7 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos5 == 3 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos5 == 7 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos5 == 5 && pos9 == 3){
				printf("Player 1 venceu!\n");break;
		}else if(pos1 == 7 && pos5 == 3 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}
		
		//pos1, pos7, pos9.															//posiçoes de vitoria para jogador 1.
		if(pos1 == 1 && pos7 == 2 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos7 == 3 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 2 && pos7 == 1 && pos9 == 3){
			printf("%s venceu!\n", nome);break;;
		}else if(pos1 == 2 && pos7 == 3 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos7 == 1 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos7 == 2 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 4 && pos7 == 5 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 4 && pos7 == 6 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos7 == 4 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos7 == 6 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 6 && pos7 == 4 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 6 && pos7 == 5 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos7 == 8 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos7 == 9 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 8 && pos7 == 7 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 8 && pos7 == 9 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos7 == 7 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos7 == 8 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 1 && pos7 == 4 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos7 == 7 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 4 && pos7 == 1 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 4 && pos7 == 7 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos7 == 4 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos7 == 1 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 2 && pos7 == 5 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 2 && pos7 == 8 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos7 == 2 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos7 == 8 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 8 && pos7 == 5 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 8 && pos7 == 2 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos7 == 6 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos7 == 9 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 6 && pos7 == 3 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 6 && pos7 == 9 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos7 == 6 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos7 == 3 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 1 && pos7 == 5 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 1 && pos7 == 9 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos7 == 1 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos7 == 9 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 9 && pos7 == 5 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 9 && pos7 == 1 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 3 && pos7 == 5 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 3 && pos7 == 7 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 5 && pos7 == 3 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 5 && pos7 == 7 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos1 == 7 && pos7 == 5 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos1 == 7 && pos7 == 3 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}
		
		//pos3, pos5, pos9.															//posiçoes de vitoria para jogador 1.
		if(pos3 == 1 && pos5 == 2 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 1 && pos5 == 3 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 2 && pos5 == 1 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 2 && pos5 == 3 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 3 && pos5 == 1 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 3 && pos5 == 2 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 4 && pos5 == 5 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 4 && pos5 == 6 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos5 == 4 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos5 == 6 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 6 && pos5 == 4 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 6 && pos5 == 5 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 7 && pos5 == 8 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 7 && pos5 == 9 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 8 && pos5 == 7 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 8 && pos5 == 9 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 9 && pos5 == 7 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 9 && pos5 == 8 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 1 && pos5 == 4 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 1 && pos5 == 7 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 4 && pos5 == 1 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 4 && pos5 == 7 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 7 && pos5 == 4 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 7 && pos5 == 1 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 2 && pos5 == 5 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 2 && pos5 == 8 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos5 == 2 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos5 == 8 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 8 && pos5 == 5 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 8 && pos5 == 2 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 3 && pos5 == 6 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 3 && pos5 == 9 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 6 && pos5 == 3 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 6 && pos5 == 9 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 9 && pos5 == 6 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 9 && pos5 == 3 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 1 && pos5 == 5 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 1 && pos5 == 9 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos5 == 1 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos5 == 9 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 9 && pos5 == 5 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 9 && pos5 == 1 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 3 && pos5 == 5 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 3 && pos5 == 7 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos5 == 3 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos5 == 7 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 7 && pos5 == 5 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 7 && pos5 == 3 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}
		
		//pos3, pos7, pos9.															//posiçoes de vitoria para jogador 1.
		if(pos3 == 1 && pos7 == 2 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 1 && pos7 == 3 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 2 && pos7 == 1 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 2 && pos7 == 3 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 3 && pos7 == 1 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 3 && pos7 == 2 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 4 && pos7 == 5 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 4 && pos7 == 6 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos7 == 4 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos7 == 6 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 6 && pos7 == 4 && pos9 == 5){
			printf("%s venceu!\n", nome);break;;
		}else if(pos3 == 6 && pos7 == 5 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 7 && pos7 == 8 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 7 && pos7 == 9 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 8 && pos7 == 7 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 8 && pos7 == 9 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 9 && pos7 == 7 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 9 && pos7 == 8 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 1 && pos7 == 4 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 1 && pos7 == 7 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 4 && pos7 == 1 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 4 && pos7 == 7 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 7 && pos7 == 4 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 7 && pos7 == 1 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 2 && pos7 == 5 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 2 && pos7 == 8 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos7 == 2 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos7 == 8 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 8 && pos7 == 5 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 8 && pos7 == 2 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 3 && pos7 == 6 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 3 && pos7 == 9 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 6 && pos7 == 3 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 6 && pos7 == 9 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 9 && pos7 == 6 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 9 && pos7 == 3 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 1 && pos7 == 5 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 1 && pos7 == 9 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos7 == 1 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos7 == 9 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 9 && pos7 == 5 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 9 && pos7 == 1 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 3 && pos7 == 5 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 3 && pos7 == 7 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 5 && pos7 == 3 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 5 && pos7 == 7 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos3 == 7 && pos7 == 5 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos3 == 7 && pos7 == 3 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}
		
		//pos5, pos7, pos9.															//posiçoes de vitoria para jogador 1.
		if(pos5 == 1 && pos7 == 2 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 1 && pos7 == 3 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 2 && pos7 == 1 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 2 && pos7 == 3 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 3 && pos7 == 1 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 3 && pos7 == 2 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 4 && pos7 == 5 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 4 && pos7 == 6 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 5 && pos7 == 4 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 5 && pos7 == 6 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 6 && pos7 == 4 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 6 && pos7 == 5 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 7 && pos7 == 8 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 7 && pos7 == 9 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 8 && pos7 == 7 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 8 && pos7 == 9 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 9 && pos7 == 7 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 9 && pos7 == 8 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 1 && pos7 == 4 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 1 && pos7 == 7 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 4 && pos7 == 1 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 4 && pos7 == 7 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 7 && pos7 == 4 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 7 && pos7 == 1 && pos9 == 4){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 2 && pos7 == 5 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 2 && pos7 == 8 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 5 && pos7 == 2 && pos9 == 8){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 5 && pos7 == 8 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 8 && pos7 == 5 && pos9 == 2){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 8 && pos7 == 2 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 3 && pos7 == 6 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 3 && pos7 == 9 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 6 && pos7 == 3 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 6 && pos7 == 9 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 9 && pos7 == 6 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 9 && pos7 == 3 && pos9 == 6){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 1 && pos7 == 5 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 1 && pos7 == 9 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 5 && pos7 == 1 && pos9 == 9){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 5 && pos7 == 9 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 9 && pos7 == 5 && pos9 == 1){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 9 && pos7 == 1 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 3 && pos7 == 5 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 3 && pos7 == 7 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 5 && pos7 == 3 && pos9 == 7){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 5 && pos7 == 7 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}if(pos5 == 7 && pos7 == 5 && pos9 == 3){
			printf("%s venceu!\n", nome);break;
		}else if(pos5 == 7 && pos7 == 3 && pos9 == 5){
			printf("%s venceu!\n", nome);break;
		}else{
			printf("Deu velha!!!!");break;
		}
		
		
}
}while(res != 's' || res != 'n');													//Se nao digitar s ou n, ele ira repetir a pergunta denovo.

	system("pause");
	return 0;
}


