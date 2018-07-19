public class isPalindrome
{
	public static void main(String [] args)
	{
		int num = 16461, n,sum = 0,reminder;
		n = num;
		while(n != 0)
		{
			reminder = n % 10;
			sum = sum * 10 + reminder;
			n = n / 10;
		}
		if( sum == num)
			System.out.println("Palindromic Number");
		else
			System.out.println("Not a Palindromic Number");
	}
}