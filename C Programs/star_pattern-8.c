#include<stdio.h>
main()
{
    int i,j,k;
    FILE *fp=fopen("StarFile.txt","a");
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
                j<4?fprintf(fp,"%d",k++):fprintf(fp,"%d",k--);
                else
                    fputs(" ",fp);
        }
    fputs("\n",fp);
    }

}
