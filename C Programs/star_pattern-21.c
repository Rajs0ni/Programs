#include<stdio.h>
main()
{
    int i,j;
    FILE *fp=fopen("StarFile.txt","a");
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=8;j++)
            j>=5-i&&j<=9-i?fputs("*",fp):fputs(" ",fp);

    fputs("\n",fp);
    }
}
