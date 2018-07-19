#include<stdio.h>
main()
{
    int i,j,k=0;
    FILE *fp=fopen("StarFile.txt","a");
    for(i=1;i<=4;i++)
    {
        k=i;
        for(j=1;j<=7;j++)
        {

          if(j>=5-i&&j<=3+i)
             {
              fprintf(fp,"%d",k);
              j<4?k++:k--;
              }
        else
           fputs(" ",fp);
        }
    fputs("\n",fp);
    }
}
