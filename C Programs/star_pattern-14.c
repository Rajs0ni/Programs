#include<stdio.h>
main()
{
    int i,j,k;
    FILE *fp=fopen("StarFile.txt","a");
    for(i=1;i<=7;i++)
    {
        k=7-i;
        for(j=1;j<=7;j++)
        {
            if(j<=8-i)
                fprintf(fp,"%d",k--);
            else
                fputs(" ",fp);
        }
   fputs("\n",fp);
    }
}
