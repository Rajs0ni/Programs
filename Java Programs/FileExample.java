import java.io.*;

public class FileExample
{
   public static void main(String [] args) throws IOException
{
   FileOutputStream fout = new FileOutputStream("myFile.txt",true);
   String S = "Hello Java Developers";
   
   char ch[] = S.toCharArray();
   for(int i=0;i<ch.length;i++)
   fout.write(ch[i]);
   fout.close();
}
   
}