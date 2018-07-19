#include<stdio.h>
main()
{
    int i,j;
    FILE *fp=fopen("StarFile.txt","a");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
           {
               j<=6-i?fputs("*",fp):fputs(" ",fp);
           }
    fputs("\n",fp);
    }
}
