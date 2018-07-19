public class isPrime
{
	public static void main(String [] args)
	{
		int num = 7,i;
	
		for(i=2;i<=num-1;i++)
		{
			if(num%i==0)
			break;  
		}	  
	if(i==num)
		System.out.println(num+" is Prime Number");
	else
		System.out.println(num+" is not a Prime Number");
	}	
}