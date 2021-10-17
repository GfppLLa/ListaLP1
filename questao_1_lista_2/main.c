#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float l1[] ;
float km1[];
float tx[];


int count=0;
bool tt1 = true, tt2 =false;

void Escreva(int opt,int ps)
{

    printf("\n ");

    switch (opt)
    {
        case 1 :
            printf("A taxa de KM/Litros na %d interacao foi de : %f ", ps, tx[ps]);
            break;
        case 2:
            printf("Programa calculo de combustivel ");
            break;
        case 3 :
            printf("fim de programa");
            break;
        case 4 :
            printf("----------");
            break;



    }
    printf("\n ");

}
float totalComb()
{

float totalKm = 0;
float totalFuel = 0;
float total =0 ;

    for (int i = 1; i<= count; i++)
    {
        totalFuel += l1[i];
        totalKm += km1[i];
    }
total = totalKm/totalFuel;
return total;

}

void c1(int i)
{
    float dist;
    float fuel;
    float kml;

    dist  = km1[i];
    fuel = l1[i];
    kml = dist/fuel;
    tx[i] =kml;
    Escreva(1, i);
}
void Menu (int i)
{
    //count++;

     printf("\n menu  i = %d", i);
    printf("\n  %d * interacao \n", i);
    printf ("Insira os litros consumidos: ");
    scanf("%f", &l1[i]);

    printf("\n Insira os quilometros percorridos: ");
    scanf("%f", &km1[i]);
    c1(i);
}

void preMenu (int i)
{
    bool crt1 = false;
    do
    {

    // printf("\n pre menu i = %d", i);
            char teste;
            printf("\n");
            printf("Inserir valores de combustiveis ou sair!");
            Escreva(4, NULL);
            printf("\n Para Sair digite  = S");
            printf("\n Para Inserir valores de combustiveis digite = E");
            printf("\n ..:");
            scanf(" %c", &teste);
          //  printf("\n teste %c ", teste);

                if (teste =='s' || teste == 'S')
                {
                    //tFinal();
                    tt1 = false;
                    crt1 = true;

                }else
                {
                    if (teste =='E'||teste == 'e')
                    {
                        crt1 = true;
                        Menu(i);

                    }
                }
    }while(crt1 != true);

    if(count >=2)
    {

        tt2 = true;
    }

}
int main()
{


Escreva(2,NULL);
float total;

    do
    {
        count ++;
      //  printf("\n main i = %d", count);
        preMenu(count);


    }while (tt1!= false);

    if (tt2 == true)
    {
        Escreva(4,NULL);
        total  = totalComb();
        printf("\n ");
        printf("A taxa total de litros por KM foi de %f: ", total);
        Escreva(4, NULL);

    }

Escreva(3, NULL);



}
