main()
{

    int i=1,n,sum=0;
    printf("Enter A number\n");
    scanf("%d",&n);
     /*for(i=1;i<n*2;i=i+2)
          sum=sum+i;
     printf("Sum is %d",sum);

     */
     while(i<=n)
     {
       sum=sum+2*i-1;
       i++;
     }
   printf("Sum is %d",sum);
}
