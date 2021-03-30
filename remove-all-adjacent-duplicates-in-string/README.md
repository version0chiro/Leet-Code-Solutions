<h2>1047. Remove All Adjacent Duplicates In String</h2><h3>Easy</h3><hr><div><p>Given a string <code>S</code> of lowercase letters, a <em>duplicate removal</em> consists of choosing two adjacent and equal letters, and removing&nbsp;them.</p>

<p>We repeatedly make duplicate removals on S until we no longer can.</p>

<p>Return the final string after all such duplicate removals have been made.&nbsp; It is guaranteed the answer is unique.</p>

<p>&nbsp;</p>

<p><strong>Example 1:</strong></p>

<pre><strong>Input: </strong><span id="example-input-1-1">"abbaca"</span>
<strong>Output: </strong><span id="example-output-1">"ca"</span>
<strong>Explanation: </strong>
For example, in "abbaca" we could remove "bb" since the letters are adjacent and equal, and this is the only possible move.&nbsp; The result of this move is that the string is "aaca", of which only "aa" is possible, so the final string is "ca".
</pre>

<p>&nbsp;</p>

<p><strong>Note:</strong></p>

<ol>
	<li><code>1 &lt;= S.length &lt;= 20000</code></li>
	<li><code>S</code> consists only of English lowercase letters.</li>
</ol>
</div>