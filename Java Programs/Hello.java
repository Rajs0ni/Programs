public class Pen
{
   
   private float height,radius,niddleSize;
   private int price;
   
   void setDim(float h,float r,float ns)
   {
	   height = h;
	   radius = r;
	   niddleSize = ns;
   }
   void setPrice(int prc)
   {
	   price = prc;
   }
   
   void showDim()
   {
	   System.out.println("Height="+height);
	   System.out.println("Radius="+radius);
	   System.out.println("Nobe="+niddleSize);
   }
   int getPrice()
   {
	   return price;
   }
   
   public static void main(String [] args)
   {
	    
	   Pen p = new Pen();
	   p.setDim(5.5f,0.2f,0.001f);
	   p.setPrice(5);
	   p.showDim();
	   System.out.println("Price="+p.getPrice);
   }
}
