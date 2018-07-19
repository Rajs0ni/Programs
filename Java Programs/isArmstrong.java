public class isArmstrong
{
	public static void main(String [] args)
	{
		int num = 163,reminder,sum=0,qube,n;
		n = num;
		while(n!= 0)
		{
			reminder = n % 10;
			qube = reminder * reminder *reminder;
			sum = sum + qube;
			n = n / 10;
		}
		if(sum == num )
			System.out.println("Armstrong number");
		else
			System.out.println("Not a Armstrong number");
	}
}