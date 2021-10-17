#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sairE()
{
    printf("Fim de programa");
    exit(0);

}
float cC(int dias, float varEmp, float txJ)
{
    float diaS;
    float varTotal;

    diaS=((float)dias/365);
    printf("\n v1 %f \nv2 %f \nv3 %f\n", diaS, varEmp, txJ);
    varTotal= varEmp*txJ*diaS;

    printf("\nO valor dos juros e de\n:");
    return varTotal;
}
void oP()
{
    fflush(stdin);
    float varEmp, txJ, diaS, varTotal;
    int dias;

    printf("\n Insira o valor do emprestimo\n: ");
    scanf("%f", &varEmp);
    printf("\nInsira a taxa de juros\n: ");
    scanf("%f", &txJ);
    printf("\nInsira o periodo do emprestimo em dias\n: ");
    scanf("%d", dias);

    varTotal = cC(dias, varEmp, txJ);
    printf("\nO valor dos juros e de\n:%f", varTotal);
    preOp(1);
}
void preOp(int cond)
{
     char opt = NULL;
    printf("\n-------\nCalculo de Juros\n-------\n");
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
    preOp(NULL);
}
int main()
{
    preOp(NULL);
}
