#include<stdio.h>
main()
{
    int i,j,k=0,t;
    FILE *fp=fopen("StarFile.txt","a");
    for(i=1;i<=9;i++)
    {
        t=1;
        i<=5?k++:k--;
        for(j=1;j<=5;j++)
        {
            j>=6-k?fprintf(fp,"%d",t++):fputs(" ",fp);
        }
    fputs("\n",fp);
    }
}
