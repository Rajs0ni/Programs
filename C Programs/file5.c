#include<stdio.h>
int main()
{
    int a,b;
    FILE *fp;
    fp=fopen("f1.txt","w");
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    fprintf(fp,"Sum of %d & %d is %d",a,b,a+b);
    fclose(fp);
}
