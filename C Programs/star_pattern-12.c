#include<stdio.h>
main()
{
    int i,j;
    FILE *fp=fopen("StarFile.txt","a");
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            j>=i&&j<=8-i?fputs("*",fp):fputs(" ",fp);
        }
    fputs("\n",fp);
    }
}
