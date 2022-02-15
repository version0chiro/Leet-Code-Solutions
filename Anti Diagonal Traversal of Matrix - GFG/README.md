# Anti Diagonal Traversal of Matrix
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Give a N*N square <strong>matrix</strong>, return an array of its anti-diagonals. Look at the example for more details.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 2
matrix[][] = {{1,2},
              {3,4}}
<strong>Output:</strong>
1 2 3 4
<strong>Explanation:</strong>
Matrix is as below:
1 2
3 4
Printing it in anti-diagonal form will lead
to the output as 1 2 3 4</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3
matrix[][] = {{1,2,3},

              {4,5,6},

              {7,8,9}}
<strong>Output:</strong>
1 2 4 3 5 7 6 8 9
<strong>Explanation: </strong>
Matrix is as below:
1 2 3
4 5 6
7 8 9
Printing it in anti-diagonal form will lead
to the output as 1 2 4 3 5 7 6 8 9 </span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You dont need to read input or print anything. Complete the function <strong>antiDiagonal</strong><strong>Pattern()</strong> that takes matrix as input parameter and returns a list of integers in order of the values visited in the anti-Diagonal&nbsp;pattern.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N * N)<br>
<strong>Expected Auxiliary Space:</strong> O(N * N) for the resultant list only.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 100<br>
1 &lt;= mat[i][j] &lt;= 100</span></p>
 <p></p>
            </div>