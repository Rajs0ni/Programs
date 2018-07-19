#include<stdio.h>
main()
{
    int i,j,k;
    FILE *fp=fopen("StarFile.txt","a");
    for(i=1;i<=6;i++)
    {
        k=1;
        for(j=1;j<=6;j++)
        {
            if(j<=i)
                {
                        fprintf(fp,"%d",k);
                        k=1-k;
                }
            else
                fputs(" ",fp);
        }
    fputs("\n",fp);
    }
}
