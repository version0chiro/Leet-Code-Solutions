<h2>804. Unique Morse Code Words</h2><h3>Easy</h3><hr><div><p>International Morse Code defines a standard encoding where each letter is mapped to a series of dots and dashes, as follows: <code>"a"</code> maps to <code>".-"</code>, <code>"b"</code> maps to <code>"-..."</code>, <code>"c"</code> maps to <code>"-.-."</code>, and so on.</p>

<p>For convenience, the full table for the 26 letters of the English alphabet is given below:</p>

<pre>[".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]</pre>

<p>Now, given a list of words, each word can be written as a concatenation of the Morse code of each letter. For example, "cab" can be written as "-.-..--...", (which is the concatenation "-.-." + ".-" + "<code>-...</code>"). We'll call such a concatenation, the transformation&nbsp;of a word.</p>

<p>Return the number of different transformations among all words we have.</p>

<pre><strong>Example:</strong>
<strong>Input:</strong> words = ["gin", "zen", "gig", "msg"]
<strong>Output:</strong> 2
<strong>Explanation: </strong>
The transformation of each word is:
"gin" -&gt; "--...-."
"zen" -&gt; "--...-."
"gig" -&gt; "--...--."
"msg" -&gt; "--...--."

There are 2 different transformations, "--...-." and "--...--.".
</pre>

<p><strong>Note:</strong></p>

<ul>
	<li>The length of <code>words</code> will be at most <code>100</code>.</li>
	<li>Each <code>words[i]</code> will have length in range <code>[1, 12]</code>.</li>
	<li><code>words[i]</code> will only consist of lowercase letters.</li>
</ul>
</div>