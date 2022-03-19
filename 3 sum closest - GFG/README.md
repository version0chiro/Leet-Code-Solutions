# 3 sum closest
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array <strong>A[]</strong>&nbsp;of&nbsp;<strong>N</strong>&nbsp;integers and an integer&nbsp;<strong>X</strong>.&nbsp;The task is to find the sum of three integers in <strong>A[]</strong>&nbsp;such that it is closest to&nbsp;<strong>X</strong>.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 4
A[] = {-1 , 2, 1, -4}
X = 1
<strong>Output:</strong> 2
<strong>Explaination:</strong> 
Sums of triplets:
(-1) + 2 + 1 = 2
(-1) + 2 + (-4) = -3
2 + 1 + (-4) = -1
2 is closest to 1.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5
A[] = {1, 2, 3, 4, -5}
X = 10
<strong>Output:</strong> 9
<strong>Explaination:</strong> 
Sums of triplets:
1 + 2 + 3 = 6
2 + 3 + 4 = 9
1 + 3 + 4 = 7
...
9 is closest to 10.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>closest3Sum()</strong>&nbsp;which takes the array <strong>Arr[]</strong> and its size <strong>N </strong>and <strong>X&nbsp;</strong>as input parameters&nbsp;and returns the sum which is closest to&nbsp;<strong>X</strong>.</span></p>

<p><span style="font-size:18px"><strong>NOTE:&nbsp;</strong>If there exists more than one answer then return the maximum sum.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N<sup>2</sup>)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
3 ≤ N ≤ 10<sup>3</sup><br>
-10<sup>3</sup> ≤ Arr[i]&nbsp;≤ 10<sup>3</sup><br>
-10<sup>4</sup> ≤ X&nbsp;≤ 10<sup>4</sup></span></p>
 <p></p>
            </div>