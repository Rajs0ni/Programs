#include<stdio.h>
main()
{
    int i,j,k=64;
    FILE *fp=fopen("StarFile.txt","a");
    for(i=1;i<=5;i++)
    {
        k=k+2*(i-1)+1;

        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
                fprintf(fp,"%c",k--);
            else
               fputs(" ",fp);
        }
    fputs("\n",fp);
    }
}
