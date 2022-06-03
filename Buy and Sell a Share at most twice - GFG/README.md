# Buy and Sell a Share at most twice
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">In daily share trading, a buyer buys shares in the morning and sells them on the same day. If the trader is allowed to make at most 2 transactions in a day, whereas the second transaction can only start after the first one is complete (Buy-&gt;sell-&gt;Buy-&gt;sell). The stock prices throughout the day&nbsp;&nbsp;are represented&nbsp;in the form of&nbsp;an array <strong>price</strong>.&nbsp;</span></p>

<p><span style="font-size:18px">Given an array <strong>price</strong> of size <strong>N</strong>, find out the <strong>maximum</strong> profit that a share trader could have made.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
6
10 22 5 75 65 80
<strong>Output:</strong>
87
<strong>Explanation:</strong>
Trader earns 87 as sum of 12, 75&nbsp;
Buy at 10, sell at 22,&nbsp;
Buy at 5 and sell at 80</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong></span>
<span style="font-size:18px">7
2 30 15 10 8 25 80
<strong>Output:</strong></span>
<span style="font-size:18px">100</span>
<span style="font-size:18px"><strong>Explanation:</strong></span>

<span style="font-size:18px">Trader earns 100 as sum of 28 and 72
Buy at price 2, sell at 30,
Buy at 8 and sell at 80</span></pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong></p>

<p><span style="font-size:18px">Complete the function <strong>maxProfit()</strong> which takes an integer array <strong>price</strong> as the only argument and returns an integer, representing the maximum profit, if only two transactions are allowed.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)</span></p>

<p><span style="font-size:18px"><strong>Expected Space Complexity:</strong> O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span></p>

<ul>
	<li><span style="font-size:18px">1 &lt;= N &lt;= 10<sup>5</sup></span></li>
	<li><span style="font-size:18px">1 &lt;= price[i] &lt;= 10<sup>5</sup></span></li>
</ul>
 <p></p>
            </div>