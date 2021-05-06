<h2>1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence</h2><h3>Easy</h3><hr><div><p>Given a <code>sentence</code>&nbsp;that consists of some words separated by a&nbsp;<strong>single space</strong>, and a <code>searchWord</code>.</p>

<p>You have to check if <code>searchWord</code> is a prefix of any word in <code>sentence</code>.</p>

<p>Return <em>the index of the word</em> in <code>sentence</code> where <code>searchWord</code> is a prefix of this word (<strong>1-indexed</strong>).</p>

<p>If <code>searchWord</code> is&nbsp;a prefix of more than one word, return the index of the first word <strong>(minimum index)</strong>. If there is no such word return <strong>-1</strong>.</p>

<p>A <strong>prefix</strong> of a string&nbsp;<code>S</code> is any leading contiguous substring of <code>S</code>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> sentence = "i love eating burger", searchWord = "burg"
<strong>Output:</strong> 4
<strong>Explanation:</strong> "burg" is prefix of "burger" which is the 4th word in the sentence.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> sentence = "this problem is an easy problem", searchWord = "pro"
<strong>Output:</strong> 2
<strong>Explanation:</strong> "pro" is prefix of "problem" which is the 2nd and the 6th word in the sentence, but we return 2 as it's the minimal index.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> sentence = "i am tired", searchWord = "you"
<strong>Output:</strong> -1
<strong>Explanation:</strong> "you" is not a prefix of any word in the sentence.
</pre>

<p><strong>Example 4:</strong></p>

<pre><strong>Input:</strong> sentence = "i use triple pillow", searchWord = "pill"
<strong>Output:</strong> 4
</pre>

<p><strong>Example 5:</strong></p>

<pre><strong>Input:</strong> sentence = "hello from the other side", searchWord = "they"
<strong>Output:</strong> -1
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= sentence.length &lt;= 100</code></li>
	<li><code>1 &lt;= searchWord.length &lt;= 10</code></li>
	<li><code>sentence</code> consists of lowercase English letters and spaces.</li>
	<li><code>searchWord</code>&nbsp;consists of lowercase English letters.</li>
</ul>
</div>