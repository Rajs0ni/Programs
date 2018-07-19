main()
{
   int i,num,A[20];
   printf("Enter num of elements\n");
   scanf("%d",&num);
    printf("Enter %d elements\n",num);
    for(i=0;i<num;i++)
    scanf("%d",&A[i]);

    bubbleSort(A,num);

     for(i=0;i<num;i++)
    printf("%d ",A[i]);


}
void bubbleSort(int A[],int num)
{
   int i,round,temp,flag;

   for(round=1;round<=num-1;round++)
   {
     flag = 0;
     for(i=0;i<=num-1-round;i++)
     {
       if(A[i]>A[i+1])
       {
         temp = A[i];
         A[i] = A[i+1];
         A[i+1] = temp;
         flag = 1;
       }

     }
     if(flag == 0)
     {
       printf("\nRound=%d\n",round);
       return;
     }
   }
}
