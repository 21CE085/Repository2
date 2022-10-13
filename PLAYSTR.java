/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc= new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0)
		{
		    int f1=0,f2=0;
		    int n=sc.nextInt();
		    String a=sc.next();
		    String b=sc.next();
		    for(int i=0;i<n;i++){
		     if(a.charAt(i)=='1'){
		        f1++;
		    }
		    }
		    for(int i=0;i<n;i++){
		    if(b.charAt(i)=='1'){
		        f2++;
		    }
		    }
		    if(f1==f2)
		    System.out.println("YES");
		    else
		    System.out.println("NO");
		    
		    
		    
		}
	}
}
