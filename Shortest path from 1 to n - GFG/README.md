# Shortest path from 1 to n
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Consider a directed graph whose vertices are numbered from 1 to n. There is an edge from a vertex i to a vertex j iff either j = i + 1 or j = 3 * i. The task is to find the minimum number of edges in a path in G from vertex 1 to vertex n.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 9
<strong>Output:</strong>
2
<strong>Explanation</strong>:
9 -&gt; 3 -&gt; 1, so
number of steps are 2. </span></pre>

<p><span style="font-size:18px">â€‹<strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
N = 4
<strong>Output:</strong>
2
<strong>Explanation</strong>:
4 -&gt; 3 -&gt; 1, so
number of steps are 2.
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>minimumStep()</strong>&nbsp;which takes the <strong>N</strong><strong> </strong>as inputs and returns the answer.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(logN)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup></span></p>
 <p></p>
            </div>