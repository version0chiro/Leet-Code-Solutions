<h2>1312. Minimum Insertion Steps to Make a String Palindrome</h2><h3>Hard</h3><hr><div><p>Given a string <code>s</code>. In one step you can insert any character at any index of the string.</p>

<p>Return <em>the minimum number of steps</em> to make <code>s</code>&nbsp;palindrome.</p>

<p>A&nbsp;<b>Palindrome String</b>&nbsp;is one that reads the same backward as well as forward.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> s = "zzazz"
<strong>Output:</strong> 0
<strong>Explanation:</strong> The string "zzazz" is already palindrome we don't need any insertions.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> s = "mbadm"
<strong>Output:</strong> 2
<strong>Explanation:</strong> String can be "mbdadbm" or "mdbabdm".
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> s = "leetcode"
<strong>Output:</strong> 5
<strong>Explanation:</strong> Inserting 5 characters the string becomes "leetcodocteel".
</pre>

<p><strong>Example 4:</strong></p>

<pre><strong>Input:</strong> s = "g"
<strong>Output:</strong> 0
</pre>

<p><strong>Example 5:</strong></p>

<pre><strong>Input:</strong> s = "no"
<strong>Output:</strong> 1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= s.length &lt;= 500</code></li>
	<li>All characters of <code>s</code>&nbsp;are lower case English letters.</li>
</ul>
</div>