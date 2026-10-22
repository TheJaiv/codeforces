<h2><a href="https://codeforces.com/contest/1454/problem/D" target="_blank" rel="noopener noreferrer">1454D — Number into Sequence</a></h2>

| | |
|---|---|
| **Difficulty** | 1300 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1454D](https://codeforces.com/contest/1454/problem/D) |

## Topics
`constructive algorithms` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">D. Number into Sequence</div><div class="time-limit"><div class="property-title">time limit per test</div>3 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an integer $$$n$$$ ($$$n  \gt  1$$$).</p><p>Your task is to find a sequence of integers $$$a_1, a_2, \ldots, a_k$$$ such that:</p><ul> <li> each $$$a_i$$$ is strictly greater than $$$1$$$; </li><li> $$$a_1 \cdot a_2 \cdot \ldots \cdot a_k = n$$$ (i. e. the product of this sequence is $$$n$$$); </li><li> $$$a_{i + 1}$$$ is divisible by $$$a_i$$$ for each $$$i$$$ from $$$1$$$ to $$$k-1$$$; </li><li> $$$k$$$ is the <span class="tex-font-style-bf">maximum</span> possible (i. e. the length of this sequence is the <span class="tex-font-style-bf">maximum</span> possible). </li></ul><p>If there are several such sequences, any of them is acceptable. It can be proven that at least one valid sequence always exists for any integer $$$n  \gt  1$$$.</p><p>You have to answer $$$t$$$ independent test cases.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$t$$$ ($$$1 \le t \le 5000$$$) — the number of test cases. Then $$$t$$$ test cases follow.</p><p>The only line of the test case contains one integer $$$n$$$ ($$$2 \le n \le 10^{10}$$$).</p><p>It is guaranteed that the sum of $$$n$$$ does not exceed $$$10^{10}$$$ ($$$\sum n \le 10^{10}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the answer: in the first line, print one positive integer $$$k$$$ — the <span class="tex-font-style-bf">maximum</span> possible length of $$$a$$$. In the second line, print $$$k$$$ integers $$$a_1, a_2, \ldots, a_k$$$ — the sequence of length $$$k$$$ satisfying the conditions from the problem statement.</p><p>If there are several answers, you can print any. It can be proven that at least one valid sequence always exists for any integer $$$n  \gt  1$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004409569215914293" id="id004006972051072145" class="input-output-copier">Copy</div></div><pre id="id004409569215914293">4
2
360
4999999937
4998207083
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001798490991182019" id="id00623979757598913" class="input-output-copier">Copy</div></div><pre id="id001798490991182019">1
2 
3
2 2 90 
1
4999999937 
1
4998207083 
</pre></div></div></div>