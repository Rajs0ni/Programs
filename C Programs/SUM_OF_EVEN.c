#include<stdio.h>
int main()
{

    int i=2,sum=0,N;
    printf("Enter a natural num");
    scanf("%d",&N);
    while(i<=2*N)
    {
        sum=sum+i;
        i=i+2;
    }
    printf("Sum of first %d natural num is %d",N,sum);
}
