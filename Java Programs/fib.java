public class fib
{
	
	public static void main(String [] args)
	{
	  int num=10,i;
	  for(i=0;i<num;i++)
		  System.out.print(fib(i));
	  
	  int fib(int n)
	{
		if(n ==1 || n ==2)
			return 1;
		return(fib(n-1)+fib(n-2));
	}
	  
	}
	
}