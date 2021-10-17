#include <stdio.h>
#include <stdlib.h>
int Maior(float nums[], int tam)
{
    int ref;
    float max;


    for (int i = tam; i <=1; i--)
    {
        if(nums[i] >max)
        {
        max=nums[i];
        ref = i;
        }

    }

    return ref;

}
float Recebe(int parm)
{
    float cnt;
    printf("\n=>insira o numero da %d posicao<=\n:", parm);
    scanf("%f",&cnt);
    return cnt;
}
void oP(int cont)
{
    float nums[cont];
    int posix;
    float max;

    for (int i = 1; i<= cont-1; i++)
    {
        //float aux=
        nums[i] = Recebe(i);

    }
    for (int j = cont-1; j >=1; j--)
    {
        if(nums[j] >max)
        {
        max=nums[j];
        posix= j;
        }
    }

    //cont = Maior(nums, cont);
   printf("\n-----\nO maior numero\n-----\n=> %f", nums[posix]);



}

int main()
{
   int index;
   index = 11;
   oP(index);
}
