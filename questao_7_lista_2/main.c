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
        for (int j = 1; j <= side; j++)
        {
            printf("%c", ast);
        }
        printf("\n");
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
    printf("\n----\ncada um no seu quadrado\n------\n\n\nS =>para sair\nE => para ");
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
}
