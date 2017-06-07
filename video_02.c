#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include <windows.h>
#include <locale.h>

/*
NOME: Jeferson Lima dos Santos RA: 2216104918
NOME: Jeferson Lima dos Santos RA: 2216104918
NOME: Jeferson Lima dos Santos RA: 2216104918
NOME: Jeferson Lima dos Santos RA: 2216104918
*/
void contagem ( int seconds )
{
  clock_t endwait;
  endwait = clock () + seconds * CLK_TCK;
  while (clock() < endwait) {}
}

int main(){

	char nomeat[100];
	char s[30];
	
	int pomo,n;
	int sec=0;
	int min=0;
	int hora=0;
	int i=0;
	
	printf("Nome da atividade que vai realizar:\n");
	gets(nomeat);
	
	printf("\nPOMORIDIS: ");
	scanf("%d",&pomo);
	printf("Atividade:%s - %d pomoridis\n\n",nomeat,pomo);
	printf("INICIAR ATIVIDADE %s, DIGITE SIM para comecar:\n",nomeat);
	
	
		scanf("%s",&s);
		if (strcmp (s,"sim") == 0){
			printf("\nCOMECANDO...\n");
			for (n=3;n>0;n--){
			printf("%d\n",n);
			contagem(1);
			}	
		}
	
	
	do{
		system("cls");
		printf("ATIVIDADE %s COMECOU AS %s\n\n",nomeat,__TIME__);
		printf("JA SE PASSARAM %d MINUTOS %ds\n",min,sec);
		
		if(sec==60){
			sec=0;
			min++;
		}
		if(min==25){
			min=0;
			hora++;
			break;
		}
		Sleep(1000);
		sec++;
	}
	while(i==0);
	printf("\nATIVIDADE %s TERMINOU\n",nomeat);
	
	
	do{
		system("cls");
		printf("****DESCANSE POR 5 MINUTOS****\n");
		printf("%d MINUTOS PARA O DESCANSO TERMINAR\n",min);
		
		if(sec==60){
			sec=0;
			min++;
		}
		if(min==5){
			min=0;
			hora++;
			break;
		}
		Sleep(1000);
		sec++;
	}	
	while(i==0);
	printf("\nDESCANSO %s TERMINADO\n",nomeat);
	
	system("pause");
	return 0;
}

