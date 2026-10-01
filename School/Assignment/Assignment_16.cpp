#include<stdio.h>
int main()
{
    int N,S,temp;
    printf("Enter a starting number: ");
    scanf("%d",&N);
    printf("Enter a step size: ");
    scanf("%d",&S);
   if(S<=0 || S>N)
   {
       printf("Error");
       return 0;
   }

    temp=N;
    while(temp>=0)
    {
       printf("%d\n",temp);
       temp = temp-S;
    }
    return 0;
}