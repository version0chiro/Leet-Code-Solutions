# Fixing Two nodes of a BST
## Hard 
<div class="problem-statement">
                <p></p><div><span style="font-size:18px">You are given the <strong>root</strong> of a binary search tree(BST), where exactly t</span><span style="font-size:18px">wo nodes were&nbsp;swapped by mistake. Fix (or correct) the BST by swapping them back. Do not change the structure of the tree.</span></div>

<div><span style="font-size:18px"><strong>Note:</strong> It is guaranteed that&nbsp;the given input will form BST, except for 2 nodes that will be wrong. All changes must be reflected in the original linked list.</span></div>

<div>&nbsp;</div>

<div><span style="font-size:18px"><strong>Example 1:</strong></span></div>

<pre><span style="font-size:18px"><strong>Input:
</strong>       10
&nbsp;    /    \
&nbsp;   5      8
&nbsp;  / \
&nbsp; 2   20
<strong>Output: </strong>1<strong>
Explanation:
 </strong><img alt="" src="https://media.geeksforgeeks.org/wp-content/uploads/20190528095934/FixNodes.jpg" style="height:252px; width:374px" class="img-responsive"></span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
&nbsp;        </strong>11
&nbsp;      /    \
&nbsp;     3      17
&nbsp;      \    /
&nbsp;       4  10
<strong>Output: </strong>1 
<strong>Explanation:</strong> 
By swapping nodes 11 and 10, the BST 
can be fixed.
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to take any input. Just complete the function <strong>correctBst()&nbsp;</strong>that takes root node as <strong>parameter</strong>. The function should not return anything,&nbsp;all the changes must be done in the existing tree only.&nbsp;BST will then be checked by driver code and 0 or 1 will be printed.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(n)</span><br>
<span style="font-size:18px"><strong>Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 ≤ Number of nodes ≤ 10<sup>3</sup></span></p>
 <p></p>
            </div>