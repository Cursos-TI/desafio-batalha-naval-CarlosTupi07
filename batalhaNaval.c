#include <stdio.h>


void idcoluna(){

        // Função para imprimir as letras das colunas (A a J)
     char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; 

        printf("   ");
        for (int i = 0; i < 10; i++)
        {   
           
            printf("%2c", coluna[i]);
        }
            printf("\n");

    }




    void idtabuleiro(){ //recursividade para organizar o codigo

         const int tamanhotabuleiro = 10;
         int tabuleiro[10][10];
        
            for (int i = 0; i < tamanhotabuleiro; i++){
                 // Imprime o tabuleiro com os números das linhas
                 printf("%2d|", i + 1);

                for ( int j = 0; j < tamanhotabuleiro; j++)
             { 
                tabuleiro[i][j] = 0;
                

                 // Posiciona os "navios" no tabuleiro com o valor 1
                tabuleiro[1][2] = 1; tabuleiro[1][3] = 1; tabuleiro[1][4] = 1;
                tabuleiro[5][2] = 1; tabuleiro[6][2] = 1; tabuleiro[7][2] = 1;
                tabuleiro[3][7] = 1; tabuleiro[2][8] = 1; tabuleiro[1][9] = 1;


                 // Imprime os valores 0 ou 1
                 printf("%2d", tabuleiro[i][j]);
             }
                 printf("\n");
            }

        }

   
int main(){

       printf("--------------------------------------------\n");
       printf("\n");
       printf("BEM VINDO AO BATALHA NAVAL\n");
       printf("\n");
    


         idcoluna();
         idtabuleiro();
     
    
        
        
         printf("--------------------------------------------");



    return 0;
}