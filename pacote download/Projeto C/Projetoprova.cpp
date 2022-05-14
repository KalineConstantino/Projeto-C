#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>



struct Infor_videos
{
	char titulo[200];
	char nome_canal[100];
	char visulizacoes [50];
	char duracao_video[20];
	
};


 
 Infor_videos Listagem_videos()
 {
 	setlocale(LC_ALL,"portuguese");
	Infor_videos vet_t[10]={{"French Montana - Mopstick (Lyrics)"},{"Sam Smith - Stay With Me (Lyrics)"},{"Marron 5 - Memories (Official Video)"},{"OneRepublic - Counting Stars (Lyrics)"},{"Sean Kingston - Beautiful Girls (official HD Video)"}};
 	Infor_videos vet_n[10]={{"Good Vibes Only"},{"Poptrack"},{"Maroon 5"},{"Wavy Vibes"},{"seankingston"}};
    Infor_videos vet_v[10]={{"277.707"},{"4.300"},{"825.381.448"},{"1.964.431"},{"951.606.430"}};
    Infor_videos vet_d[10]={{"4:36"},{"2:52"},{"3:15"},{"5:21"},{"4:21"}};
    
    system("color 80");
	int C1;
    
    printf("\n Informações dos Videos: \n");
     for (C1=0; C1<5; C1++){
    	printf("\n Titulo do Video: %s\n Nome do Canal: %s\n Visualizações: %s\n Duração do Video: %s\n", vet_t[C1],vet_n[C1],vet_v[C1],vet_d[C1]);
    	printf(" ------------------------------------\n");
    	} 
    
}
 
 Infor_videos Visualizacoes()
{   
    setlocale(LC_ALL,"portuguese");
    Infor_videos Titulo[4]={{"Sean Kingston - Beautiful Girls (official HD Video)"},{"Marron 5 - Memories (Official Video)"},{"OneRepublic - Counting Stars (Lyrics)"},{"French Motana - Mopstick (Lyrics)"}};
    Infor_videos Visu[4]={{"951.606.430 Milhões"},{"825.381.448 Milhões"},{"1.964.431 Milhões"},{"277.707 Mil"}};
	
	system("color 70");
	int A1;
	    printf("\n Videos Com Mais de 100 MIl Visualizações\n\n");
		for (A1=0; A1<4; A1++){
			printf("\n Titulo do Video: %s\n Visualizações:   %s\n", Titulo[A1],Visu[A1]);
			printf("\n -------------------------------------\n");
   }
} 
 
Infor_videos Maior_duracao()
{
	Infor_videos T[1]={"OneRepublic - Counting Stars (Lyrics)"};
	Infor_videos Duracao[1]={"5:21"};
	
	system("color f0");
	int B1;
	    printf("\n Video Com Maior Duração:\n\n");
			printf("\n Titulo do Video: %s\n Duração:   %s\n", T[B1],Duracao[B1]);
			printf("\n -------------------------------------\n");
}

int main ()
{
	
	int opcao;
    Infor_videos result;
	setlocale(LC_ALL,"portuguese");
	
 	do{
 	   system("color 07");
 	   printf("|============================================================|\n");
       printf("|                 MENU    DE    VIDEOS                       |\n");
	   printf("|============================================================|\n");
	   printf("| [1] Para Listar os videos e Suas Informações               |\n");
	   printf("| [2] Para Listar os Videos Com Mais de 100 Mil Visualizações|\n");
	   printf("| [3] Para Listar o Video Com a Maior Duração                |\n");
	   printf("| [4] Sair                                                   |\n");
	   printf("|============================================================|\n");

	   printf("\n Qual opção? ");
	   scanf("%d", &opcao);
	   system("cls");
    
		switch(opcao) {
		       
			   case 1 :
			       result =  Listagem_videos();
			         printf("%s",result);
			         printf("\n");
			         system(" pause");
			         system("cls");
			       break;
			   
			   case 2 :
			       result =  Visualizacoes();
			         printf("%s",result);
			         printf("\n\n");
			         system(" pause");
			         system("cls");
			        break;
			       
			   case 3 :
			    	result = Maior_duracao();
			    	  printf("%s",result);
			          printf("\n\n");
			          system(" pause");
			          system("cls");
			         break;
					 
		       case 4 : 
			         printf(" ");
					 break;
					 			 
		       default: 
			   		printf("\n Opção Invalida!!!\n\n");
			   		  system(" pause");
			          system(" cls");
			   		break;   		 					    
			   
		}
		    
				   	  
	}while(opcao!=4);
 
}
