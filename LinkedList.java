import java.util.*;
public class LinkedList
{
    int x;
    LinkedList next;
    public static LinkedList push(int a, LinkedList first)
    {
        LinkedList node=new LinkedList();
        node.x=a;
        if(first==null)
        {
            first=node;
            node.next=null;
        }
        else
        {
            LinkedList i;
            for(i=first;i.next!=null;i=i.next);
            i.next=node;
            node.next=null;
        }
        return first;
    }
    public static void display(LinkedList first)
    {
        for(LinkedList i=first;i!=null;i=i.next)
        {
            System.out.print(i.x+" ");
        }
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        LinkedList first=null;
        boolean f=true;
        do
        {
            System.out.println("Enter a Number");
            int n=sc.nextInt();
            first=push(n,first);

            System.out.println("Do you want to enter more? 1/0");
            int g=sc.nextInt();
            if(g!=1)
                f=false;
        }while(f);
        display(first);

        sc.close();
    }
}