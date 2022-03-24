# Maximum Index
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array <strong>A[]</strong> of <strong>N</strong> positive integers. The task is to&nbsp;find the maximum of <strong>j - i</strong> subjected to the constraint of <strong>A[i] <u>&lt;</u>&nbsp;A[j] and i <u>&lt;</u>&nbsp;j</strong>.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 2
A[] = {1, 10}
<strong>Output:
</strong>1<strong>
Explanation:
</strong>A[0]<u>&lt;</u>A[1] so (j-i) is 1-0 = 1.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 9
A[] = {34, 8, 10, 3, 2, 80, 30, 33, 1}
<strong>Output:
</strong>6<strong>
Explanation:
</strong>In the given array A[1] &lt; A[7]
satisfying the required 
condition(A[i] <u>&lt;</u> A[j]) thus giving 
the maximum difference of j - i 
which is 6(7-1).</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function <strong>maxIndexDiff</strong>() which finds and returns maximum index difference. Printing the output will be handled by driver code. Return <strong>-1</strong> in case no such index is found.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>7</sup><br>
0 ≤ A[i] ≤ 10<sup>9</sup></span></p>

<p>&nbsp;</p>
 <p></p>
            </div>