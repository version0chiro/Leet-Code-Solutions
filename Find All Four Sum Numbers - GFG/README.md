# Find All Four Sum Numbers
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array of integers and another number. Find all the <strong>unique&nbsp;</strong>quadruple from the given array that sums up to the given number.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5, K = 3
A[] = {0,0,2,1,1}
<strong>Output: </strong>0 0 1 2 $<strong>
Explanation: </strong>Sum of 0, 0, 1, 2 is equal
to K.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 7, K = 23
A[] = {10,2,3,4,5,7,8}
<strong>Output: </strong>2 3 8 10 $2 4 7 10 $3 5 7 8 $<strong>
Explanation: </strong>Sum of 2, 3, 8, 10 = 23,
sum of 2, 4, 7, 10 = 23 and sum of 3,
5, 7, 8 = 23.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>fourSum()</strong>&nbsp;which takes the array arr[] and the integer k as its input and returns an array containing all the quadruples in a lexicographical manner. Also note that all the quadruples should be internally sorted, ie for any quadruple [q1, q2, q3, q4] the following should follow: q1 &lt;= q2 &lt;= q3 &lt;= q4.&nbsp; (In the output each quadruple is separate by $. The printing is done by the driver's code)</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N<sup>3</sup>).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N<sup>2</sup>).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 100<br>
-1000 &lt;= K &lt;= 1000<br>
-100 &lt;= A[] &lt;= 100</span><br>
&nbsp;</p>
 <p></p>
            </div>