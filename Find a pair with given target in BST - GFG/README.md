# Find a pair with given target in BST
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a Binary Search Tree and a target sum. Check whether there's a pair of Nodes in the BST with value summing up to the target sum.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
&nbsp;       </strong>2<strong>
</strong>      /   \
&nbsp;    1     3
sum = 5
<strong>Output: </strong>1 
<strong>Explanation: </strong>
Nodes with value 2 and 3 sum up to 5.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>           6
&nbsp;         /    
&nbsp;        5     
&nbsp;       /
&nbsp;      3 
&nbsp;    /  \
&nbsp;   1    4<strong>
</strong>sum = 2
<strong>Output: </strong>0 
<strong>Explanation: </strong>
There's no pair that sums up to 2.
</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function</span><span style="font-size:18px">&nbsp;<strong>isPairPresent()&nbsp;</strong>that takes <strong>a root node </strong>and a target value as a parameter and returns 1 if there's a pair of Nodes in the BST with values summing up to the target sum, else returns 0.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(Height of the BST).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ Number of Nodes ≤ 10<sup>5</sup><br>
1 ≤ Sum ≤ 10<sup>6</sup></span></p>
 <p></p>
            </div>