# Binary Tree to CDLL
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a Binary Tree of<strong> N</strong> edges. The task is to convert this to a Circular Doubly Linked List(<strong>CDLL</strong>) in-place. The left and right pointers in nodes are to be used as previous and next pointers respectively in converted CDLL. The order of nodes in CDLL must be same as Inorder of the given Binary Tree. The first node of Inorder traversal (left most node in BT) must be head node of the CDLL.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>&nbsp; &nbsp; &nbsp; 1
 &nbsp; &nbsp;/&nbsp; &nbsp;\
 &nbsp; 3&nbsp; &nbsp; &nbsp;2
<strong>Output:
</strong>3 1 2&nbsp;
2 1 3<strong>
Explanation: </strong>After converting tree to CDLL
when CDLL is is traversed from head to
tail and then tail to head, elements
are displayed as in the output.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>&nbsp; &nbsp;&nbsp; 10
 &nbsp; /&nbsp; &nbsp; \
 &nbsp;20&nbsp; &nbsp; 30
 /&nbsp; \
40 &nbsp;60
<strong>Output:
</strong>40 20 60 10 30&nbsp;
30 10 60 20 40<strong>
Explanation:</strong>After converting tree to CDLL,
when CDLL is is traversed from head to
tail and then tail to head, elements
are displayed as in the output.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't have to take input. Complete the function <strong>bTreeToCList()&nbsp;</strong>that takes root as a parameter and <strong>returns </strong>the <strong>head of the list</strong>. The printing is done by the driver code. </span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>3</sup><br>
1 &lt;= Data of a node &lt;= 10<sup>4</sup></span></p>

<p><span style="font-size:18px"><strong>Expected time complexity:&nbsp;</strong>O(N)</span></p>

<p><span style="font-size:18px"><strong>Expected auxiliary space:&nbsp;</strong>O(h) , where h = height of tree</span></p>
 <p></p>
            </div>