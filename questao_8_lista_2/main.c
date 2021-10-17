#include <stdio.h>
#include <stdlib.h>
void sairE()
{
    printf("\n=>fim de programa<=\n");
    exit(0);
}
void Escreva(int side)
{
char ast = '*';
     for (int i = 1; i<=side; i++)
    {
      if(i== 1 || i==side)
        {

        for (int j = 1; j <= side; j++)
        {
            printf("%c", ast);
        }
        printf("\n");
        }else

            {
                for (int k = 1; k <= side; k++)
                {
                    //(k<2||k==side-1)? printf("%c",ast):printf(" ");


                    if(k <2|| k==side-1)
                    {
                        printf("%c", ast);
                    }else
                    {
                        printf(" ");
                        //printf("\n");
                    }
                   // printf("\n");

                }//printf("\n");
              printf("\n");
            }
    }
}
void oP()
{
    int side;
    printf("\n------\n=>Digite o valor do lado do quadrado<=\n------\n");
    scanf("%d",&side);
        if (side <0 || side>20)
        {
            printf("\n==>atencao<==\n----\napenas numeros entre 0 e 20\nVV\n");
            oP();
        }else
        {
        Escreva(side);
        }
    preOp(1);
}
void preOp(int cnt)
{
    char opt;
    printf("\n----\noperacao quadrado vazio\n------\n\n\nS =>para sair\nE => para ");
        if(cnt == 1)
        {
            printf("Continuar\n:");
        }else
        {
            printf("Entrar\n:");
        }
    opt = getchar();
    if (opt =='s' || opt =='S')
    {
        sairE();
    }else
    {
        if(opt =='e' || opt =='E')
        {
            oP();
        }
    }

}
int main()
{
    preOp(NULL);
   //Escreva(5);
}






/*
int main(void){

    for(int continuar = 1, lado;;){
        do{ //Enquanto o usuario digitar um numero menor que -1 e maior que 20 este bloco repete
            printf("Digite o tamnho do lado do quadrado entre 0 e 20 (-1 para sair): ");
            scanf("%d", &lado);
        }while(lado < -1 || lado > 20);

        if(lado == -1) //Se o usuario digitar -1 o programa acaba
            return 0;

        for(int i = 0; i < lado; i++){ //Este bloco imprime os asteriscos na tela
            if(i == 0 || i == lado - 1){
                for(int j = 0; j < lado; j++){
                    printf("*");
                }
            }else{
                for(int c = 0; c < lado; c++){
                    (c < 1 || c == lado - 1) ? printf("*") : printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}*/
