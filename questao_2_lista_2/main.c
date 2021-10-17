#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdlib.h>
#include <conio.h>

int testCred(float nSaldo, float limC)
{
    int teste;
    if (nSaldo > limC)
    {
        teste = 2;

    }else
    {
        teste = 1;
    }
    return teste;

}
void sairE()
{
    printf("Fim de programa");
    exit(0);

}
void preOp(int  cond)
{
    bool tt1;
    char teste = NULL;
    printf("\n-----\nConta bancaria\n-------");
    printf("\nY para ");
        if (cond == 1)
        {
            printf("continuar");
            fflush(stdin);

        }else
        {
            printf("entrar");
        }

    printf(" no programa \nN para sair \n :");
    teste = getchar();
        if(teste == 'n' || teste == 'N')
        {
            tt1 = false;
        }else
        {
            if (teste == 'Y' || teste == 'y')
            {
                    tt1 = true;
            }
        }
    if (tt1 != false)
    {
        contaL();
    }else
    {
        if(tt1 ==false)
        {

        sairE();
        }
    }

}
void contaL()
{
    int conta;
    float saldoS;

    printf("\nInsira o Numero da conta\n: ");
    scanf("%d", &conta);
    printf("\nInsira o saldo inicial\n: ");
    scanf("%f", &saldoS);
    operacaoP(conta, saldoS);

}
void operacaoP(int conta, float saldoS1)
{
    float totalCb, totalCr, limC;
    printf("\nInsira o total de cobranca\n: ");
    scanf("%f", &totalCb);
    printf("\nInsira o total de creditos\n: ");
    scanf("%f",&totalCr);
    printf("\nInsira o limite de credito\n: ");
    scanf("%f",&limC);

    float nSaldo;
    float saldoInicial = saldoS1;
   // nSaldo = (totalCb + saldoInicial) - totalCr;
    int t2;
    t2 = testCred(nSaldo, limC);

    Escreva(conta, limC, nSaldo,t2);

    preOp(1);


}
void Escreva(int conta, float limiteC, float saldoD, int opt)
{
    printf ("\n ------\n Conta: %d", conta);
    printf("\nLimite de credito: %f", limiteC);
    printf("\nSaldo : %f \n -> Limite de credito ", saldoD);
    switch (opt)
    {
    case 1 :
        printf(" ");
        break;
    case 2:
        printf(" NAO ");
        break;

    }
    printf("Excedido \n------");

}

int main()
{
    preOp(NULL);
  //  Escreva();
  //printf("ola mundo");

}
