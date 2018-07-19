
int MIN(int A[],int k,int N)
{
   int LOC,j,MIN;
    MIN = A[k];
    LOC = k;

    for(j=k+1;j<N;j++)
    {
      if(A[j]<MIN)
      {
        MIN = A[j];
        LOC = j;
      }
    }
    return LOC;
 }

 selection(int A[],int N)
 {

     int i,temp,LOC;
     for(i=0;i<N-1;i++)
     {
        LOC = MIN(A,i,N);

        temp = A[i];
        A[i]=A[LOC];
        A[LOC] = temp;
     }
 }

 main()
 {

    int i,num,A[20];
    system("cls");

    printf("Enter number of elements\n");
    scanf("%d",&num);

    printf("Enter %d numbers\n",num);

    for(i=0;i<num;i++)
    scanf("%d",&A[i]);

    system("cls");

    printf("Unsorted Elements\n");
    for(i=0;i<num;i++)
    printf(" %d",A[i]);

    selection(A,num);

    printf("\nSorted Elements\n");
    for(i=0;i<num;i++)
    printf(" %d",A[i]);

 }
