# Max possible amount
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a row of <strong>n</strong> coins of values <strong>arr[1],</strong> <strong>arr[2], </strong>... <strong>arr[n]</strong>, where <strong>n</strong> is even. Geek plays a game against an opponent by alternating turns.&nbsp;In each turn, a player selects either the first or last coin from the row, removes it from the row permanently, and&nbsp;receives the value of the coin. Determine the <strong>maximum</strong> <strong>possible amount </strong>geek can get if he moves first.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong> Both of them play optimally</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: N = 4, arr[] = {5, 3, 7, 10}
<strong>Output:</strong> 15
<strong>Explanation</strong>: </span>
<span style="font-size:18px">Geek chooses 10.
Opponent chooses 7.
Geek chooses 5.
Opponent chooses 3.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>N = 4, arr[] = {8, 15, 3, 7}
<strong>Output: </strong>22
<strong>Explanation</strong>: 
Geek chooses 7.
Opponent chooses 8.
Geek chooses 15.
Opponent chooses 3.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Complete the function <strong><code>maxAmount</code>()&nbsp;</strong>which takes <strong>N</strong>&nbsp; and array <strong>arr</strong> as input parameter and returns the maximum value geek can get.<br>
<br>
<strong>Expected Time Complexity:</strong> O(<strong>N<sup>2</sup></strong>)<br>
<strong>Expected Auxiliary Space:</strong> O(<strong>N<sup>2</sup></strong>)<br>
<br>
<strong>Constraints:</strong><br>
2 ≤ N ≤ 10<sup>3</sup></span><br>
<span style="font-size:18px">1 ≤ arr[i] ≤ 10<sup>5</sup></span></p>
 <p></p>
            </div>