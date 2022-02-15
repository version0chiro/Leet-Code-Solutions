# Height of Spiral Tree
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a special Binary Tree&nbsp;whose leaf nodes are connected to form a circular doubly linked list. Find the height of this special Binary Tree.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
&nbsp;       1
&nbsp;     /   \
&nbsp;    2     3
&nbsp;   /
&nbsp;  4<strong>
Output: </strong>3<strong>
â€‹Explanation: </strong>There are 3 edges and 4
nodes in spiral tree where leaf nodes
4 and 3 are connected in circular
doubly linked list form. Thus the
height of spiral tree is 3.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
&nbsp;       1
      /   \
&nbsp;    2     3
&nbsp;   / \
&nbsp;  4   5
&nbsp; /
&nbsp;6<strong>
Output: </strong>4</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>findTreeHeight()&nbsp;</strong>which takes the root of the special Binary Tree as its input and returns the Height of this special Binary Tree.<br>
In a special Binary Tree, the leaf nodes form a circular doubly linked list.<br>
<strong>For Example:</strong></span></p>

<p><span style="font-size:18px">&nbsp; &nbsp; &nbsp; 1<br>
&nbsp; &nbsp; &nbsp;/&nbsp;&nbsp; \&nbsp;<br>
&nbsp; &nbsp; 2&nbsp;&nbsp;&nbsp; 3<br>
&nbsp; &nbsp;/&nbsp; \<br>
&nbsp; 4&nbsp; 5<br>
&nbsp;/&nbsp;&nbsp;<br>
6&nbsp;</span></p>

<p><span style="font-size:18px">In the above binary tree, 6, 5 and 3 are leaf nodes and they form a circular doubly linked list. Here, the left pointer of leaf node will act as a previous pointer of circular doubly linked list and its right pointer will act as next pointer of circular doubly linked list.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(Height of the Tree).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(Height of the Tree).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= Number of nodes&nbsp;&lt;= 10<sup>4</sup></span></p>
 <p></p>
            </div>