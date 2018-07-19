#include<stdio.h>
main()
{
    int i,j,k;
    FILE *fp=fopen("StarFile.txt","a");
    for(i=1;i<=5;i++)
    {
        k=1;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i&&k)
            {
                    fputs("*",fp);
                    k=0;
            }
            else
            {
                fputs(" ",fp);
                k=1;
            }

        }
    fputs("\n",fp);
    }
}
