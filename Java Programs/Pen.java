package pack1;
public class Pen
{
   
   protected float height=3.0f,radius=2.0f,niddleSize=.01f;
   private int price;
   
   public void setDim(float h,float r,float ns)
   {
	   height = h;
	   radius = r;
	   niddleSize = ns;
   }
   public void setPrice(int prc)
   {
	   price = prc;
   }
   
   public void showDim()
   {
	   System.out.println("Height="+height);
	   System.out.println("Radius="+radius);
	   System.out.println("Nobe="+niddleSize);
   }
   public int getPrice()
   {
	   return price;
   }
   
 
}
