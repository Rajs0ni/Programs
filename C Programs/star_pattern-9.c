#include<stdio.h>
main()
{
    int i,j,k;
    FILE *fp=fopen("StarFile.txt","a");
    for(i=1;i<=4;i++)
    {
        k='A';
        for(j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i)
               j<4?fprintf(fp,"%c",k++):fprintf(fp,"%c",k--);
            else
                {
                    fputs(" ",fp);
                    if(j==4)
                    k--;
                }
        }
    fputs("\n",fp);
    }
}
