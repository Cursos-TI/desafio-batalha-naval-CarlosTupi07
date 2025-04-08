#include <stdio.h>

#define linhas 10
#define colunas 10


void idcoluna(){

        // Função para imprimir as letras das colunas (A a J)
     char coluna[colunas] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; 

        printf("   ");
        for (int i = 0; i < 10; i++)
        {   
           
            printf("%2c", coluna[i]);
        }
            printf("\n");

    }




    void idtabuleiro(){ //recursividade para organizar o codigo

         const int tamanhotabuleiro = 10;
         int tabuleiro[linhas][colunas];
         int soma;
        
            for (int i = 0; i < tamanhotabuleiro; i++){
                 // Imprime o tabuleiro com os números das linhas
                 printf("%2d|", i + 1);

                for ( int j = 0; j < tamanhotabuleiro; j++){ 
                tabuleiro[i][j] = 0;
                 soma = i + j ;


                 // Posiciona os "navios" no tabuleiro com o valor 1
                tabuleiro[5][1] = 3; tabuleiro[5][2] = 3; tabuleiro[5][3] = 3;
                tabuleiro[9][7] = 3; tabuleiro[9][8] = 3; tabuleiro[9][9] = 3;
                


                // função para imprimir o navio na diagonal (tamanho 3)
                    for (int i = 0; i <= 2; i++)
                        {
                        
                            if (soma == 9)
                            {
                                tabuleiro[i][j] = 3;

                            }else if(soma == 3)
                            {
                                tabuleiro[i][j] = 3;
                            }
                            else{
                                tabuleiro[i][j] = 0;
                            }
                        }



                

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