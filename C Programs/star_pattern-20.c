#include<stdio.h>
main()
{
    int i,j,k,t;
     FILE *fp=fopen("StarFile.txt","a");
    for(i=1;i<=4;i++)
    {
        k='A';t=1;
        for(j=1;j<=8;j++)
        {
            if(j>=5-i&&j<=4+i)
                    j<=4?fprintf(fp,"%c",k++):fprintf(fp,"%d",t++);
            else
                fputs(" ",fp);
        }
    fputs("\n",fp);
    }
}
