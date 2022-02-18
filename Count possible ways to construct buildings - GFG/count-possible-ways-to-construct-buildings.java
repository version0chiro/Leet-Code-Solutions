// { Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while(T-->0)
        {
            int N = Integer.parseInt(br.readLine().trim());
            Solution ob = new Solution();
            int ans = ob.TotalWays(N);
            System.out.println(ans);           
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution
{
public int TotalWays(int N)
{
long a=0,b=1;

for(int i=2;i<=N+3;i++)
{

long c=(a+b) % 1000000007;
a=b % 1000000007;
b=c % 1000000007;

}

long k= (a*a) % 1000000007 ;

return (int)k;
}
}