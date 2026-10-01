<h2><a href="https://codeforces.com/contest/1983/problem/A" target="_blank" rel="noopener noreferrer">1983A — Array Divisibility</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1983A](https://codeforces.com/contest/1983/problem/A) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Array Divisibility</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>An array of integers $$$a_1,a_2,\cdots,a_n$$$ is beautiful subject to an integer $$$k$$$ if it satisfies the following: </p><ul> <li> The sum of $$$a_{j}$$$ over all $$$j$$$ such that $$$j$$$ is a multiple of $$$k$$$ and $$$1 \le j \le n $$$, itself, is a multiple of $$$k$$$. </li><li> More formally, if $$$\sum_{k | j} a_{j}$$$ is divisible by $$$k$$$ for all $$$1 \le j \le n$$$ then the array $$$a$$$ is beautiful subject to $$$k$$$. Here, the notation $$${k|j}$$$ means $$$k$$$ divides $$$j$$$, that is, $$$j$$$ is a multiple of $$$k$$$. </li></ul> Given $$$n$$$, find an array of positive nonzero integers, with each element less than or equal to $$$10^5$$$ that is beautiful subject to all $$$1 \le k \le n$$$.<p>It can be shown that an answer always exists.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 100$$$). The description of the test cases follows.</p><p>The first and only line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 100$$$) — the size of the array.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print the required array as described in the problem statement.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009537357181234855" id="id0033086497782849134" class="input-output-copier">Copy</div></div><pre id="id009537357181234855">3
3
6
7
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004510871752943575" id="id005475766576845699" class="input-output-copier">Copy</div></div><pre id="id004510871752943575">4 22 18
10 6 15 32 125 54
23 18 27 36 5 66 7</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the second test case, when $$$n = 6$$$, for all integers $$$k$$$ such that $$$1 \le k \le 6$$$, let $$$S$$$ be the set of all indices of the array that are divisible by $$$k$$$.</p><ul> <li> When $$$k = 1$$$, $$$S = \{1, 2, 3,4,5,6\}$$$ meaning $$$a_1+a_2+a_3+a_4+a_5+a_6=242$$$ must be divisible by $$$1$$$. </li><li> When $$$k = 2$$$, $$$S = \{2,4,6\}$$$ meaning $$$a_2+a_4+a_6=92$$$ must be divisible by $$$2$$$. </li><li> When $$$k = 3$$$, $$$S = \{3,6\}$$$ meaning $$$a_3+a_6=69$$$ must divisible by $$$3$$$. </li><li> When $$$k = 4$$$, $$$S = \{4\}$$$ meaning $$$a_4=32$$$ must divisible by $$$4$$$. </li><li> When $$$k = 5$$$, $$$S = \{5\}$$$ meaning $$$a_5=125$$$ must divisible by $$$5$$$. </li><li> When $$$k = 6$$$, $$$S = \{6\}$$$ meaning $$$a_6=54$$$ must divisible by $$$6$$$. </li></ul> The array $$$a = [10, 6, 15, 32, 125, 54]$$$ satisfies all of the above conditions. Hence, $$$a$$$ is a valid array.</div>