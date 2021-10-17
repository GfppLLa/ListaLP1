#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int index = 5;

void sairE()
{
    printf("Fim de programa");
    exit(0);

}
void aSt()
{

            char ast = {'*'};
            for (int i = 1; i <=index; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    printf("%c",ast);
                }
            printf("\n");
            }
}
void Escreva(int opt)
{
printf("\n-------\nO trabalhador ");

    switch (opt)
    {
    case 1 :
    printf("NAO");
    break;

    case 2 :
    printf(" ");
    break;
    }

    printf(" recebera hora extra\n-----");
}
float calcSal(int hR, float sAl)
{
    float sal1;
    bool ttHe = NULL;
    int opt;
        if (hR >40)
        {
            ttHe = true;
        }else
        {
            if (ttHe <= 40)
            {
                ttHe = false;
            }
        }

    if (ttHe == true)
    {
        opt = 2;
    }else
    {
        if(ttHe == false )
        {
            opt = 1;
        }
    }
    Escreva(opt);
    sal1 = sAl*hR;
    return  sal1;
}
void oP()
{
int hR;
float sAl;
float varHora;

printf("\n ---- \nInsira numero de horas trabalhadas\n=> ");
scanf("%d",&hR);
printf("\n -------\nInsira o valor da hora trabalhada\n=>");
scanf("%f",&sAl);

varHora = roundf(calcSal(hR, sAl));
printf("\nO salario corresponde a \n=> %.2f", varHora);
preOp(1);

}
void preOp(int cond)
{

     char opt = NULL;
    printf("\n-------\nCalculo de Horas trabalhadas\n-------\n");
    if (cond == 1)
        {
            printf("Continuar");
            fflush(stdin);

        }else
        {
            printf("Entrar");
        }
   printf(" ou sair\nC-> ");
        if (cond == 1)
            {
                printf("Continuar");
                fflush(stdin);

            }else
            {
                printf("Entrar");
            }
   printf("\nS-> sair\n");
    opt = getchar();

    if(opt == 'c' || opt =='C')
    {
        oP();
    }else
    {
        if(opt == 's' || opt == 'S')
        {
            sairE();
        }
    }
    preOp(NULL);
}
int main()
{
   preOp(NULL);
}
