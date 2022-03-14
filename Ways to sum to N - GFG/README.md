# Ways to sum to N
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a set of m distinct positive integers and a value ‘N’. Count the total number of ways we can form ‘N’ by&nbsp;&nbsp;adding&nbsp;the array elements. Repetitions and different arrangements are allowed.<br>
<strong>Note: </strong>Answer can be quite large&nbsp;output the answer modulo 10<sup>9</sup>+7.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
m = 3 , N = 7
Arr[] = {1,5,6}
<strong>Output:</strong> 6
<strong>Explanation</strong>: The different ways are:
1+1+1+1+1+1+1
1+1+5
1+5+1
5+1+1
1+6
6+1</span></pre>

<p><br>
<span style="font-size:18px">â€‹<strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
m = 3 , N = 3
Arr[] = {1,2,3}
<strong>Output:</strong> 4
<strong>Explanation</strong>: The different ways are:
1+1+1
1+2
2+1
3  </span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>countWays()&nbsp;</strong>which accepts array arr[],<strong>&nbsp;</strong>its size m and integer N and returns the total number of ways we can form ‘N’ by adding&nbsp;array elements.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N*m)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N , m &lt;= 10<sup>3</sup></span></p>
 <p></p>
            </div>