void main()
{
   int i, A[20],item,num;

   printf("Enter Number of elements\n");
   scanf("%d",&num);
    printf("Enter %d elements\n",num);
    for(i=0;i<num;i++)
        scanf("%d",&A[i]);

    printf("Enter Item to be Searched\n");
    scanf("%d",&item);
    binarySearch(A,item,num);
}

void binarySearch(int A[],int item,int num)
{
    int BEG,END,MID,i;

    BEG =0;
    END =num-1;
for(i=0;i<num;i++)
    {
        if(END>BEG)
        {
            MID=(BEG+END)/2;

            if(item == A[MID])
            {printf("Found at %d",MID+1);break;}

                else
                {
                 if(item<A[MID])
                    END = MID-1;
                    else
                        BEG = MID+1;
                        }
        }
           else
           {
              printf("Not Found\n");
              break;
           }

        }

    }


