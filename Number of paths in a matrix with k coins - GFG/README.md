# Number of paths in a matrix with k coins
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a <strong>N x N</strong> matrix such that&nbsp;each of its&nbsp;cells contains some&nbsp;coins. Count the number of ways to collect <strong>exactly K coins</strong> while moving from&nbsp;top left corner of the matrix&nbsp;to the&nbsp;bottom right. From a cell (i, j), you can only move to (i+1, j) or (i, j+1).</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
K = 12, N = 3
arr[] = [[1, 2, 3], 
&nbsp;        [4, 6, 5], 
&nbsp;        [3, 2, 1]]
<strong>Output:</strong>&nbsp;2
<strong>Explanation</strong>: 
There are 2 possible paths 
with exactly K coins, (1 + 4 + 
3 + 2 + 1) and (1 + 2 + 3 + 5 + 1).</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
K = 16, N = 3
arr[] = [[1, 2, 3],&nbsp;
&nbsp;        [4, 6, 5],&nbsp;
&nbsp;        [9, 8, 7]</span><span style="font-size:18px">]
<strong>Output: </strong>0 
<strong>Explanation: </strong>
There are no possible paths that lead 
to sum=16
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>numberOfPath()</strong>&nbsp;which takes N, K&nbsp;and 2D&nbsp;matrix&nbsp;arr[][]&nbsp;as input parameters and returns the number of possible&nbsp;paths.</span><br>
<br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(n*n*k)<br>
<strong>Expected Auxiliary Space:</strong> O(n*n*k)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span></p>

<p><span style="font-size:18px">1 &lt;= K &lt;= 200<br>
1 &lt;= N &lt;= 200<br>
1 &lt;= arr<sub>ij</sub> &lt;= 200</span></p>

<p>&nbsp;</p>
 <p></p>
            </div>