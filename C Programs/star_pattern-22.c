#include<stdio.h>
main()
{
    int i,j,k,t;
    FILE *fp=fopen("StarFile.txt","a");
    for(i=1;i<=4;i++)
    {
        k='A';t=1;
        for(j=1;j<=7;j++)
            j>=5-i&&j<=3+i?j<=4?fprintf(fp,"%d",t++):fprintf(fp,"%c",k++):fputs(" ",fp);
        fputs("\n",fp);
    }
}
