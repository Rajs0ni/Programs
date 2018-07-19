int fact(int n);
main()
{
   int n;
   printf("Enter a Number: ");
   scanf("%d",&n);

   printf("factorial is %d",fact(n));

}

int fact(int n)
{
    int f=1;
    while(n)
    {
        f=f*n;
        n--;
    }
    return (f);
    /*int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
  */}
