<h2><a href="https://codeforces.com/contest/1299/problem/A" target="_blank" rel="noopener noreferrer">1299A — Anu Has a Function</a></h2>

| | |
|---|---|
| **Difficulty** | 1500 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1299A](https://codeforces.com/contest/1299/problem/A) |

## Topics
`brute force` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Anu Has a Function</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Anu has created her own function $$$f$$$: $$$f(x, y) = (x | y) - y$$$ where $$$|$$$ denotes the <a href="https://en.wikipedia.org/wiki/Bitwise_operation#OR">bitwise OR operation</a>. For example, $$$f(11, 6) = (11|6) - 6 = 15 - 6 = 9$$$. It can be proved that for any nonnegative numbers $$$x$$$ and $$$y$$$ value of $$$f(x, y)$$$ is also nonnegative. </p><p>She would like to research more about this function and has created multiple problems for herself. But she isn't able to solve all of them and needs your help. Here is one of these problems.</p><p>A value of an array $$$[a_1, a_2, \dots, a_n]$$$ is defined as $$$f(f(\dots f(f(a_1, a_2), a_3), \dots a_{n-1}), a_n)$$$ (see notes). You are given an array with <span class="tex-font-style-bf">not necessarily distinct</span> elements. How should you reorder its elements so that the value of the array is maximal possible?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$n$$$ ($$$1 \le n \le 10^5$$$).</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$0 \le a_i \le 10^9$$$). Elements of the array are <span class="tex-font-style-bf">not guaranteed</span> to be different.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output $$$n$$$ integers, the reordering of the array with maximum value. If there are multiple answers, print any.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005636118993056923" id="id00591646416236261" class="input-output-copier">Copy</div></div><pre id="id005636118993056923">4
4 0 11 6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0017471038511185966" id="id0017785354414534438" class="input-output-copier">Copy</div></div><pre id="id0017471038511185966">11 6 4 0</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009402441216492812" id="id009272699910191646" class="input-output-copier">Copy</div></div><pre id="id009402441216492812">1
13
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006254363273338482" id="id00983698774159068" class="input-output-copier">Copy</div></div><pre id="id006254363273338482">13 </pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first testcase, value of the array $$$[11, 6, 4, 0]$$$ is $$$f(f(f(11, 6), 4), 0) = f(f(9, 4), 0) = f(9, 0) = 9$$$.</p><p>$$$[11, 4, 0, 6]$$$ is also a valid answer.</p></div>