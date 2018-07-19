import java.util.Scanner;

class Node
{
	private int data;
	private Node next;
	
	Node()
	{
	   data = 0;
	   next = null;
	}
	
	Node(int d,Node n)
	{
	   data = d;
	   next = n;
	}
	
	public void setData(int d)
	{
		data = d;
	}
	
	public void setNext(Node n)
	{
		next = n;
	}
	
	public int getData()
	{
		return data;
	}
	
	public Node getNext()
	{
		return next;
	}
}

class LinkedList
{
		private int size;
		private Node start;
		
		LinkedList()
		{
			size = 0;
			start = null;
		}
		
		public boolean isEmpty()
		{
			if(start == null)
				return true;
			else
				return false;
		}
		
		public int getListSize()
		{
			return size;
		}
		
		public void insertAtFirst(int val)
		{
			
			Node n = new Node();
			n.setData(val);
			
			if(isEmpty())
			{
				start = n;
				size++;
			}
			else
			{
			    n.setNext(start);
				start = n;
				size++;
			}
		}
		
		public void insertAtLast(int val)
		{
			Node t,n = new Node();
			n.setData(val);
			t = start;
			
			if(isEmpty())
				start = n;	
			else
			{
				while(t.getNext()!=null)
					t = t.getNext();
				t.setNext(n);
			}
			size++;
		}
		
		public void insertAtPos(int val,int pos)
		{
		    if(pos==1)
				insertAtFirst(val);
			else if(pos == size+1)
				insertAtLast(val);
			else if(pos>1 && pos<=size)
			{
				Node n,t;
				n = new Node(val,null);
				t = start;
				
				for(int i=1;i<pos-1;i++)
					t=t.getNext();
				n.setNext(t.getNext());
				t.setNext(n);
				size++;
			}
			else 
				System.out.println("Insertion not possible at position "+pos);
		}
		
		public void deleteAtFirst()
		{
			if(isEmpty())
				System.out.println("List is already Empty");
			else
			{
				start = start.getNext();
				size--;
			}
		}
		
		public void deleteAtLast()
		{
			if(isEmpty())
				System.out.println("List is already Empty");
			else if(size ==1)
			{
				start = null;
				size--;
			}
			else
			{
				Node t;
				t = start;
				for(int i=1;i<size-1;i++)
					t = t.getNext();
				t.setNext(null);
				size--;
			}
		}
		
		public void deleteAtPos(int pos)
		{
			if(isEmpty())
				System.out.println("List is already Empty");
			else if(pos<1||pos>size)
				System.out.println("Deletion not possible");
			else if(pos==1)
				deleteAtFirst();
			else if(pos==size)
				deleteAtLast();
			else
			{
				Node t,t1;
				t = start;
				for(int i=1;i<pos-1;i++)
					t = t.getNext();
				t1 = t.getNext();
				t.setNext(t1.getNext());
				size--;		
			}			
		}
		
		void viewList()
		{
			if(isEmpty())
				System.out.println("List is Empty");
			else
			{
				Node t;
				t = start;
				for(int i=1;i<=size;i++)
				{
					System.out.print(t.getData()+" ");
					t=t.getNext();
				}
			}
			
		}
}

public class ListTest
{
	public static void main(String [] args)
	{
		Scanner sc = new Scanner(System.in);
		LinkedList list = new LinkedList();
		boolean flag = true;
		while(flag)
		{
			int choise,val,pos;
			
			System.out.println("");
			System.out.println("1. Add Item At First");
			System.out.println("2. Add Item At Last");
			System.out.println("3. Add Item At Position");
			System.out.println("4. Remove Item At First");
			System.out.println("5. Remove Item At Last");
			System.out.println("6. Remove Item At Position");
			System.out.println("7. View List");
			System.out.println("8. Get List Size");
			System.out.println("9. Exit");
			System.out.print("Feed a choise: ");
			choise = sc.nextInt();
			
			switch(choise)
			{
				case 1:
						System.out.println("Feed List Item");
						val = sc.nextInt();
						list.insertAtFirst(val);
						break;
				case 2:
						System.out.println("Feed List Item");
						val = sc.nextInt();
						list.insertAtLast(val);
						break;
				case 3:
						System.out.println("Feed a Position");
						pos = sc.nextInt();
						System.out.println("Feed List Item");
						val = sc.nextInt();
						list.insertAtPos(val,pos);
						break;
				case 4:
						list.deleteAtFirst();
						break;
				case 5:
						list.deleteAtLast();
						break;
				case 6:
						System.out.println("Feed a Position");
						pos = sc.nextInt();
						list.deleteAtPos(pos);
						break;
				case 7:
						list.viewList();
						break;
				case 8:
						System.out.println("No. of Items in List is "+list.getListSize());
						break;
				case 9:
						flag = false;
						break;
				default:
						System.out.println("Invalid Choise");
			}
		}
		
	}
}