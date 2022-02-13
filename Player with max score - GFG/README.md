# Player with max score
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given an array arr of non-negative integers of size N, 2 players are playing a game. In each move, a player chooses an element from either end of the array, and the size of the array shrinks by one. Both players take alternate chances and the game continues until the size of the array becomes 0. Every time a player chooses an array element the array value is added to the player's score. At the end player with maximum score wins.<br>
If player 1 starts the game, you have to predict whether player 1 will win the game or not. Both players will play optimally.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong></span>:
<span style="font-size:18px">N = 3
arr[] = {2,6,3}
<strong>Output:</strong>
0&nbsp;
<strong>Explanation</strong>:
Initially, player 1 can choose between 2 and 3. 
If he chooses 3 (or 2), then player 2 can choose 
from 2 (or 3) and 6. If player 2 chooses 6,
then player 1 will be left with 2 (or 3). 
So, final score of player 1 is 2 + 3 = 5,
and player 2 is 6. 
Hence, player 1 will never be the winner and 
output is 0.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>is1winner()</strong>&nbsp;which takes the array arr[], its size N<strong> </strong>and returns true if player 1 is the winner and false otherwise.<br>
The driver code itself prints 1 if returned value is true and 0 otherwise.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N*N)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 1000</span><br>
<span style="font-size:18px">0&lt;= arr[i] &lt;= 10<sup>5</sup></span></p>
 <p></p>
            </div>