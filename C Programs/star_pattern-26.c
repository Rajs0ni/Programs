#include<stdio.h>
main()
{
    int i,j,k;
    FILE *fp=fopen("StarFile.txt","a");
    for(i=1;i<=4;i++)
    {
        k=64+i;
        for(j=1;j<=4;j++)
            j<=i?fprintf(fp,"%c",k--):fputs(" ",fp);
    fputs("\n",fp);
    }
}
