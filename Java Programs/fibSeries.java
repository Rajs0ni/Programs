public class fibSeries
{
	public static void main(String [] args)
	{
		int a=-1,b=1,sum=0,i;
		for(i=0;i<10;i++)
		{
			
			sum = a + b;
			System.out.print(sum+" ");
			a=b;
			b=sum;
		}
	}
}