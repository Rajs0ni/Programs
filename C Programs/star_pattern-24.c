#include<stdio.h>
main()
{
    int i,j;
    FILE *fp=fopen("StarFile.txt","a");
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
            (i==1||i==7||j==1||j==7)||(i>=3&&i<=5&&j>=3&&j<=5)&&(i==3||i==5||j==3||j==5)?fputs("*",fp):fputs(" ",fp);
   fputs("\n",fp);
    }
}
