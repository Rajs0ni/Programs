#include<stdio.h>
main()
{
    int i,j,flag,k=0,p;
    FILE *fp=fopen("StarFile.txt","a");
    for(i=1;i<=5;i++)
    {
        flag=1;
        if(i%2==1)
            k=k+1;
        else
        {
             k--;
             k=k+i;
        }

        p=k;
        for(j=1;j<=9;j++)
        {
            if(j<=2*i-1)
            {
                if(flag==1)
                {
                     fprintf(fp,"%2d",p);
                      if(i%2)
                      {
                          p++;k++;
                      }
                      else
                        p--;
                }
                else
                     fputs(" *",fp);

              flag=1-flag;
            }

            else
                fputs("  ",fp);
        }
    fputs("\n",fp);
    }
}
