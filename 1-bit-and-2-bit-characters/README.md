<h2>717. 1-bit and 2-bit Characters</h2><h3>Easy</h3><hr><div><p>We have two special characters. The first character can be represented by one bit <code>0</code>. The second character can be represented by two bits (<code>10</code> or <code>11</code>).  </p>

<p>Now given a string represented by several bits. Return whether the last character must be a one-bit character or not. The given string will always end with a zero.</p>

<p><b>Example 1:</b><br>
</p><pre style="position: relative;"><b>Input:</b> 
bits = [1, 0, 0]
<b>Output:</b> True
<b>Explanation:</b> 
The only way to decode it is two-bit character and one-bit character. So the last character is one-bit character.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p></p>

<p><b>Example 2:</b><br>
</p><pre style="position: relative;"><b>Input:</b> 
bits = [1, 1, 1, 0]
<b>Output:</b> False
<b>Explanation:</b> 
The only way to decode it is two-bit character and two-bit character. So the last character is NOT one-bit character.
<div class="open_grepper_editor" title="Edit &amp; Save To Grepper"></div></pre>
<p></p>

<p><b>Note:</b>
</p><li><code>1 &lt;= len(bits) &lt;= 1000</code>.</li>
<li><code>bits[i]</code> is always <code>0</code> or <code>1</code>.</li>
<p></p></div>