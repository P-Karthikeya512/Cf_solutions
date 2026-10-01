<h2><a href="https://codeforces.com/contest/1937/problem/A" target="_blank" rel="noopener noreferrer">1937A — Shuffle Party</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1937A](https://codeforces.com/contest/1937/problem/A) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Shuffle Party</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a_1, a_2, \ldots, a_n$$$. Initially, $$$a_i=i$$$ for each $$$1 \le i \le n$$$.</p><p>The operation $$$\texttt{swap}(k)$$$ for an integer $$$k \ge 2$$$ is defined as follows: </p><ul> <li> Let $$$d$$$ be the largest divisor$$$^\dagger$$$ of $$$k$$$ which is not equal to $$$k$$$ itself. Then swap the elements $$$a_d$$$ and $$$a_k$$$. </li></ul><p>Suppose you perform $$$\texttt{swap}(i)$$$ for each $$$i=2,3,\ldots, n$$$ in this exact order. Find the position of $$$1$$$ in the resulting array. In other words, find such $$$j$$$ that $$$a_j = 1$$$ after performing these operations.</p><p>$$$^\dagger$$$ An integer $$$x$$$ is a divisor of $$$y$$$ if there exists an integer $$$z$$$ such that $$$y = x \cdot z$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 10^4$$$). The description of the test cases follows.</p><p>The only line of each test case contains one integer $$$n$$$ ($$$1 \le n \le 10^9$$$) — the length of the array $$$a$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the position of $$$1$$$ in the resulting array.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008006273708895904" id="id006515914097411258" class="input-output-copier">Copy</div></div><pre id="id008006273708895904"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-odd test-example-line-3">5</div><div class="test-example-line test-example-line-even test-example-line-4">120240229</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008944253753107614" id="id0008035109345283342" class="input-output-copier">Copy</div></div><pre id="id008944253753107614">1
4
4
67108864
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, the array is $$$[1]$$$ and there are no operations performed.</p><p>In the second test case, $$$a$$$ changes as follows:</p><ul> <li> Initially, $$$a$$$ is $$$[1,2,3,4]$$$. </li><li> After performing $$$\texttt{swap}(2)$$$, $$$a$$$ changes to $$$[\underline{2},\underline{1},3,4]$$$ (the elements being swapped are underlined). </li><li> After performing $$$\texttt{swap}(3)$$$, $$$a$$$ changes to $$$[\underline{3},1,\underline{2},4]$$$. </li><li> After performing $$$\texttt{swap}(4)$$$, $$$a$$$ changes to $$$[3,\underline{4},2,\underline{1}]$$$. </li></ul><p>Finally, the element $$$1$$$ lies on index $$$4$$$ (that is, $$$a_4 = 1$$$). Thus, the answer is $$$4$$$.</p></div>