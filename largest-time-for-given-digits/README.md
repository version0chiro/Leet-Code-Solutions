<h2>949. Largest Time for Given Digits</h2><h3>Medium</h3><hr><div><p>Given an array&nbsp;<code>arr</code> of 4 digits, find the latest 24-hour time that can be made using each digit <strong>exactly once</strong>.</p>

<p>24-hour times are formatted as <code>"HH:MM"</code>, where <code>HH</code>&nbsp;is between&nbsp;<code>00</code>&nbsp;and&nbsp;<code>23</code>, and&nbsp;<code>MM</code>&nbsp;is between&nbsp;<code>00</code>&nbsp;and&nbsp;<code>59</code>. The earliest 24-hour time is <code>00:00</code>, and the latest is <code>23:59</code>.</p>

<p>Return <em>the latest 24-hour time&nbsp;in&nbsp;<code>"HH:MM"</code> format</em>.&nbsp; If no valid time can be made, return an empty string.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>

<pre><strong>Input:</strong> arr = [1,2,3,4]
<strong>Output:</strong> "23:41"
<strong>Explanation:</strong>&nbsp;The valid 24-hour times are "12:34", "12:43", "13:24", "13:42", "14:23", "14:32", "21:34", "21:43", "23:14", and "23:41". Of these times, "23:41" is the latest.
</pre>

<p><strong>Example 2:</strong></p>

<pre><strong>Input:</strong> arr = [5,5,5,5]
<strong>Output:</strong> ""
<strong>Explanation:</strong>&nbsp;There are no valid 24-hour times as "55:55" is not valid.
</pre>

<p><strong>Example 3:</strong></p>

<pre><strong>Input:</strong> arr = [0,0,0,0]
<strong>Output:</strong> "00:00"
</pre>

<p><strong>Example 4:</strong></p>

<pre><strong>Input:</strong> arr = [0,0,1,0]
<strong>Output:</strong> "10:00"
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>arr.length == 4</code></li>
	<li><code>0 &lt;= arr[i] &lt;= 9</code></li>
</ul>
</div>