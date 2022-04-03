# Max sum in the configuration
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array(0-based indexing), you have to find&nbsp;the&nbsp;max sum of i*A[i] where A[i]&nbsp;is the element at index i in the array.&nbsp;The only operation allowed is to rotate(clock-wise or counter clock-wise)&nbsp;the array any number of times.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 4
A[] = {8,3,1,2}
<strong>Output: </strong>29<strong>
Explanation: </strong>Above&nbsp;the configuration
possible by rotating&nbsp;elements are
3 1 2 8 here sum is&nbsp;3*0+1*1+2*2+8*3&nbsp;= 29
1 2 8 3 here sum is&nbsp;1*0+2*1+8*2+3*3&nbsp;= 27
2 8 3 1 here sum is&nbsp;2*0+8*1+3*2+1*3&nbsp;= 17
8 3 1 2 here sum is&nbsp;8*0+3*1+1*2+2*3&nbsp;=&nbsp;11
Here&nbsp;the max sum is&nbsp;29&nbsp;</span>
</pre>

<p><span style="font-size:18px"><strong>Your&nbsp;Task:</strong><br>
Your task is to complete the function <strong>max_sum</strong> which takes two&nbsp;arguments which is the array A [ ] and its size and returns an integer value denoting the required max sum.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=N&lt;=10<sup>4</sup><br>
1&lt;=A[]&lt;1000</span></p>
 <p></p>
            </div>