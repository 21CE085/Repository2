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
		scanner o = new Scanner(System.in);
		int t = o.nextInt();
		for(int i=o;i<t;i++)
		{
		    int n=o.nextInt();
		    int fac=1;
		    int counter=0;
		    for(int j=1;j<=n;j++)
		    {
		        fac=fac*j;
		    }
		    l:
		    if(fac%10==0)
		    {
		          counter++;
		          fac=fac/10;
		    }
		    else
		    {
		        
		    }
		    goto l;
		}
	}
}
