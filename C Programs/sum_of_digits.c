main()
{
     int x,r,sum=0;
    printf("Enter a number\n");
    scanf("%d",&x);

    while(x!=0)
    {

    r=x%10;
    sum=sum+r;
    x=x/10;

    }
    printf("Sum of digits is %d",sum);
}
