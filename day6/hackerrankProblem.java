import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int t,i,l,j;
        String e="", o="";
         t=sc.nextInt();
        String []s= new String[t];
        for(i=0;i<t;i++)
        {
            s[i]=sc.next();
            
            l=s[i].length();
            
            char c[]=s[i].toCharArray();
            for(j=0;j<l;j++)
            {
                if(j%2==0)
                {
                    e+=c[j];
                }
                else
                {
                    o+=c[j];
                }
            }
            
        System.out.println(e+" "+o);
            e="";o="";
        }

    }
}