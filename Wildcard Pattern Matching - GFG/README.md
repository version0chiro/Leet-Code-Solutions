# Wildcard Pattern Matching
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given two strings&nbsp;'<strong>str'</strong> and a wildcard pattern '<strong>pattern' </strong>of length N and M respectively,&nbsp; You have to print '1' if the wildcard pattern is matched with str&nbsp;else print&nbsp;'0' .<br>
<br>
The wildcard pattern can include the characters ‘?’ and ‘*’<br>
‘?’ – matches any single character<br>
‘*’ – Matches any sequence of characters (including the empty sequence)</span></p>

<p><span style="font-size:18px"><strong>Note:&nbsp;</strong>The matching should cover the entire str&nbsp;(not partial str).</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
pattern = "ba*a?"
str = "baaabab"
<strong>Output:</strong> 1
<strong>Explanation: </strong>replace '*' with "aab" and 
'?' with 'b'. 
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
pattern = "a*ab"
str = "baaabab"
<strong>Output:</strong> 0
<strong>Explanation</strong>: Because of'a' at first position,
pattern and str can't be matched. 
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>wildCard()</strong>&nbsp;which takes the two strings 'pattern' and 'str' as input parameters&nbsp;and returns the answer.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong>: O(N*M)<br>
<strong>Expected Auxiliary Space</strong>: O(N*M)<br>
<br>
<strong>Constraints:</strong><br>
1 &lt;= length of(str,pat) &lt;= 200</span></p>
 <p></p>
            </div>