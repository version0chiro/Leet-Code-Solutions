# Total Decoding Messages
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">A top secret message containing letters from<code> A-Z </code>is being encoded to numbers using the following mapping:</span></p>

<div class="highlighter-rouge">
<pre><span style="font-size:18px"><code>'A' -&gt; 1
'B' -&gt; 2
...
'Z' -&gt; 26
</code></span></pre>
</div>

<p><span style="font-size:18px">You are an FBI agent. You have to determine the total number of ways that message can be decoded, as the answer can be large return the answer modulo 10<sup>9</sup>&nbsp;+ 7.<br>
<strong>Note:</strong> An empty digit sequence is considered to have one decoding. It may be assumed that the input contains valid digits from 0 to 9 and If there are leading 0’s, extra trailing 0’s and two or more consecutive 0’s then it is an invalid string.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>str = "123"
<strong>Output: </strong>3
<strong>Explanation: </strong>"123" can be decoded as "ABC"(123),
"LC"(12 3) and "AW"(1 23).</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>str = "27"
<strong>Output: </strong>1
<strong>Explanation: </strong>"27" can be decoded as "BG".</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>CountWays()&nbsp;</strong>which takes the string as str as input parameter and returns the total number of ways the string can be decoded modulo 10<sup>9</sup>&nbsp;+ 7.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(n)<br>
<strong>Expected Space Complexity:&nbsp;</strong>O(n) where n&nbsp; = |str|<br>
<br>
<strong>Constraints:</strong><br>
1 &lt;= |str| &lt;= 10<sup>4</sup></span></p>
 <p></p>
            </div>