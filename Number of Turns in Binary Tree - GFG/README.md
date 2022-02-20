# Number of Turns in Binary Tree
## Hard 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a binary tree and data value of two of its nodes. Find the number of turns needed to reach from one node to another in the given binary tree.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:      </strong>
Tree = 
           1
        /    \
       2       3
     /  \     /  \
    4    5   6    7                        
   /        / \                        
  8        9   10   </span>
<span style="font-size:18px">first node = 5
second node = 10</span>
<span style="font-size:18px"><strong>Output:</strong> 4</span>
<span style="font-size:18px"><strong>Explanation: 
</strong>Turns will be at 2, 1, 3, 6.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:      </strong>
Tree = 
           1
        /     \
       2        3
     /  \      /  \
    4    5    6    7                        
   /         / \                        
  8         9   10   </span>
<span style="font-size:18px">first node = 1
second node = 4  </span>
<span style="font-size:18px"><strong>Output:</strong> -1</span>
<span style="font-size:18px"><strong>Explanation: </strong>No turn is required since 
they are in a straight line.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task: &nbsp;</strong><br>
You don't need to read input or print anything. Complete the function <strong>NumberOFTurns()</strong> which takes root node and data value of 2 nodes as input parameters and returns the number of turns required to navigate between them. If the two nodes are in a straight line, ie- the path does not involve any turns, return -1.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space: </strong>O(Height of Tree)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>3</sup></span></p>
 <p></p>
            </div>