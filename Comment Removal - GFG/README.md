# Comment Removal
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a piece of code, the task is to remove all the comments from the code.<br>
<strong>Note:&nbsp;</strong><br>
Comments formats can be " /*...*/ " and&nbsp;" //... \n".<br>
Comments cannot be nested.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
<strong>code</strong> =
#include int main(int *argc,char **argv)
{ <strong>//&nbsp;</strong>First line of code<strong>\n</strong> 
printf("Hello World!!! "); return 0; }
<strong>Output:
</strong>#include int main(int *argc,char **argv)
{&nbsp; printf("Hello World!!! "); return 0; }
<strong>Explanation</strong>: Removed the commented area
starting with <strong>// </strong>and ending with <strong>\n</strong>.
</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
<strong>code =</strong>
#include int main(int *argc,char **argv)
{ <strong>/* </strong>First line of code Printing
Hello World <strong>*/ 
</strong>printf("Hello World!!! "); return 0; }</span><span style="font-size:18px">
<strong>Output:
</strong>#include int main(int *argc,char **argv)
{&nbsp; printf("Hello World!!! "); return 0; }
<strong>Explanation</strong>: Removed the commented area
starting with <strong>/* </strong>and ending with <strong>*/</strong>.
</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>removeComments()&nbsp;</strong>which takes the string of code&nbsp;as input and <strong>returns</strong> the updated string of code after removing all the comments from it.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(|code|)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
4 &lt;= |code|&nbsp;&lt;= 100000</span></p>

<p><span style="font-size:18px">|code| denotes the length of the string code.</span></p>
 <p></p>
            </div>