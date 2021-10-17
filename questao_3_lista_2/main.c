#include <stdio.h>
#include <stdlib.h>
void sairE()
{
    printf("Fim de programa");
    exit(0);

}
float calc(float venda, float sal)
{
    float total, total1;
    total = (venda*0.09);
    total1 = sal+total;
    return total1;


}
void oP()
{
    float varVenda, varFinal, sAl;
    printf("\n Insira o valor do salario\n:");
    scanf("%f", &sAl);
    printf("\n Insira o valor da venda\n:");
    scanf("%f",&varVenda);
    varFinal = calc(varVenda, sAl);
    printf("\nValor do salario\n:%.2f", varFinal);
    preOp(1);

}
void preOp(int cond )
{
    char opt = NULL;
    printf("\n-------\nCalculo de porcentagem da venda\n-------\n");
    if (cond == 1)
        {
            printf("Continuar");
            fflush(stdin);

        }else
        {
            printf("Entrar");
        }
   printf(" ou sair\nC-> continuar\nS-> sair\n");
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
}

int main()
{
    preOp(NULL);
}
