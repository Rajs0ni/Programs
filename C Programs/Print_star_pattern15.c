main()
{
   int i,j,x,k=0;
   for(i=1;i<=9;i++)
   {
       i<6?k++:k--;
       x=1;
       for(j=1;j<=5;j++)
       {
             if(j>=6-k)
             {
                 printf("%d",x);
                 x++;
             }

             else
                printf(" ");
       }
       printf("\n");
   }

}
