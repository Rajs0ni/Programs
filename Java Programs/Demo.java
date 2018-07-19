package pack2;
import pack1.*;
public class Demo
{ 
 public static void main(String [] args)
   {
	    
	   Pen p = new Pen();
	   p.setDim(5.5f,0.2f,0.001f);
	   p.setPrice(5);
	   p.showDim();
	   System.out.println("Price="+p.getPrice());
   }
 }  