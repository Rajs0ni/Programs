main()
{
    int i,j,flag,k=0,p;
    for(i=1;i<=5;i++)
    {
        if(i%2==1)
            k=k+1;
        else
        {
             k--;
            k=k+i;
        }

          flag=1;
        p=k;
        for(j=1;j<=9;j++)
        {

            if(j<=2*i-1)
            {
              if(flag==1)
              {
                  printf("%2d",p);
                  if(i%2)
                  {
                      p++;k++;
                  }
                  else
                    p--;
              }

            else
                printf(" *");

           flag=1-flag;

            }

            else
                printf("  ");
        }
        printf("\n");
    }
}

