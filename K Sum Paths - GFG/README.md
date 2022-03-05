# K Sum Paths
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a binary tree and an integer K. Find the number of paths in the tree which have their sum equal to K.<br>
A path may start from any node and end at any node in the downward direction.</span></p>

<p><br>
<strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:      </strong>
Tree = 
          1                               
        /   \                          
       2     3</span>
<span style="font-size:18px">K = 3</span>
<span style="font-size:18px"><strong>Output:</strong> 2</span>
<span style="font-size:18px"><strong>Explanation:</strong>
Path 1 : 1 + 2 = 3
Path 2 : only leaf node 3</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input: </strong>
Tree = 
           1
        /     \
      3        -1
    /   \     /   \
   2     1   4     5                        
        /   / \     \                    
       1   1   2     6    
K = 5                    
<strong>Output:</strong> 8</span>
<span style="font-size:18px"><strong>Explanation:</strong>
The following paths sum to K.  
3 2 
3 1 1 
1 3 1 
4 1 
1 -1 4 1 
-1 4 2 
5 
1 -1 5 </span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong> &nbsp;<br>
You don't need to read input or print anything. Complete the function <strong>sumK()</strong> which takes root node and integer K as input parameters and returns the number of paths that have sum K. Since the answer may be very large, compute it modulo 10<sup>9</sup>+7.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(Height of Tree)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
-10<sup>5</sup> ≤ Node Value ≤ 10<sup>5</sup><br>
-10<sup>9</sup> ≤ k ≤ 10<sup>9</sup></span></p>
 <p></p>
            </div>