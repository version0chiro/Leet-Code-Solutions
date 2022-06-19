// { Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main(String[] args) throws IOException
	{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        while(t-->0)
        {
            String str = br.readLine();
            
            Solution obj = new Solution();
            System.out.println(obj.findSubString(str));
            
        }
	}
}

// } Driver Code Ends


//User function Template for Java

class Solution {
    public int findSubString( String str) {
        HashMap<Character, Integer> hm = new HashMap<>();
        for (int i = 0; i < str.length(); i++)
            hm.put(str.charAt(i), 1);
        int i = 0, j = 0, res = Integer.MAX_VALUE, count = hm.size();
        while (j < str.length()) {
            char ch = str.charAt(j);
            hm.put(ch, hm.get(ch) - 1);
            if (hm.get(ch) == 0)
                count--;
            if (count == 0) {
                while (i < str.length() && count == 0) {
                    res = Math.min(res, j - i + 1);
                    hm.put(str.charAt(i), hm.get(str.charAt(i)) + 1);
                    if (hm.get(str.charAt(i)) > 0)
                        count++;
                    i++;
                }
            }
            j++;
        }
        return res;
    }
}