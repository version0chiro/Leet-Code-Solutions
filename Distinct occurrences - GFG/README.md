# Distinct occurrences
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given two strings <strong>S </strong>and<strong> T</strong> of length <strong>n</strong> and <strong>m</strong> respectively.&nbsp;find count of distinct occurrences of T in S as a sub-sequence.&nbsp;</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
S = "banana" , T = "ban"
<strong>Output:</strong> 3
<strong>Explanation</strong>: There are 3&nbsp;sub-sequences:
[ban], [ba n], [b an].</span>
</pre>

<p><span style="font-size:18px">â€‹<strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
S = "geeksforgeeks" , T = "ge"
<strong>Output:</strong> 6
<strong>Explanation</strong>: There are 6 sub-sequences:
[ge], [ ge], [g e], [g e] [g e] and [ g e].</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything.Your task is to complete the function&nbsp;<strong>subsequenceCount()</strong> which takes two strings as argument&nbsp;S and T and returns the count of the sub-sequences&nbsp;modulo&nbsp;10<sup>9</sup> + 7.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(n*m).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(n*m).<br>
<br>
<strong>Constraints:</strong><br>
1 ≤ length of(T) ≤ 100<br>
1 ≤ length of(S) ≤ 8000</span></p>
 <p></p>
            </div>