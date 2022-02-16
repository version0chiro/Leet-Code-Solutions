# Reverse alternate nodes in Link List
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a linked list, you have to perform&nbsp;the following task:</span></p>

<ol>
	<li><span style="font-size:18px">Extract the&nbsp;alternative nodes&nbsp;starting from second node.</span></li>
	<li><span style="font-size:18px">Reverse the extracted list.</span></li>
	<li><span style="font-size:18px">Append the extracted list at the end of the original list.</span></li>
</ol>

<p><span style="font-size:18px">â€‹<strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>LinkedList = 10-&gt;4-&gt;9-&gt;1-&gt;3-&gt;5-&gt;9-&gt;4
<strong>Output: </strong>10 9 3 9 4 5 1 4<strong>
Explanation: </strong>Reversing the alternative
nodes from the given list, and then
appending them to the end of the list
results in a list with the elements as
10 9 3 9 4 5 1 4.</span>
</pre>

<p><span style="font-size:18px">â€‹<strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>LinkedList = 1-&gt;2-&gt;3-&gt;4-&gt;5
<strong>Output: </strong>1 3 5 4 2&nbsp;<strong>
Explanation:</strong></span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't have to read input or print anything. Your&nbsp;task is to complete the function&nbsp;<strong>rearrange</strong>() which takes the head of the linked list as input and&nbsp;rearranges the list as required.</span></p>

<p><span style="font-size:18px"><strong>Note</strong>: Try to solve the problem without using any extra memory.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>5</sup><br>
0 &lt;= Node_value &lt;= 1000</span></p>
 <p></p>
            </div>