#include<stdio.h>
main()
{
    int i,j;
    FILE *fp=fopen("StarFile.txt","w");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
                fputs("*",fp);
            else
                fputs(" ",fp);
        }
        fputs("\n",fp);
    }
}
