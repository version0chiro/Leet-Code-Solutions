# Validate an IP Address
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Write a program to Validate an IPv4 Address. According to Wikipedia,&nbsp;<a href="http://en.wikipedia.org/wiki/IP_address" target="_blank">IPv4 addresses&nbsp;</a>are canonically represented in dot-decimal notation, which consists of four decimal numbers, each ranging from 0 to 255, separated by dots, e.g., 172.16.254.1 . The generalized form of an IPv4 address is<strong> (0-255).(0-255).(0-255).(0-255). </strong>Here we are considering numbers only from 0 to 255 and any additional leading zeroes will be considered invalid.</span></p>

<p><span style="font-size:18px">Your task is &nbsp;to complete the function<strong> isValid </strong>which returns 1&nbsp;if the ip address is valid else returns 0. The function takes a&nbsp;string <strong>s&nbsp;</strong>as its only&nbsp;argument .</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>ip = 222.111.111.111
<strong>Output: </strong>1
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>ip = 5555..555
<strong>Output: </strong>0<strong>
Explanation: </strong>5555..555 is not a valid
ip address, as the middle two portions
are missing.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the function <strong>isValid()</strong> which takes the string <strong>s</strong>&nbsp;as an input parameter and returns 1 if this is a valid ip address otherwise returns 0.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N), N = length of string.<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)<br>
<br>
<strong>Constraints:</strong><br>
1&lt;=length of string &lt;=50</span><br>
<br>
<span style="font-size:18px"><strong>Note:</strong>The <strong>Input/Ouput</strong> format and <strong>Example</strong> given are used for system's internal purpose, and should be used by a user for <strong>Expected Output</strong> only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.</span></p>
 <p></p>
            </div>