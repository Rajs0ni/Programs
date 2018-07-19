#include<stdio.h>
int main()
{
    FILE *fp;
    int a,b,c;
    fp=fopen("f1.txt","r");
    fscanf(fp,"%d%d%d",&a,&b,&c);
    printf("a=%d b=%d c=%d",a,b,c);
    fclose(fp);

}
