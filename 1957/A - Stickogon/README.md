<h2><a href="https://codeforces.com/contest/1957/problem/A" target="_blank" rel="noopener noreferrer">1957A — Stickogon</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1957A](https://codeforces.com/contest/1957/problem/A) |

## Topics
`constructive algorithms` `greedy`

---

## Problem Statement

<div class="header"><div class="title">A. Stickogon</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given $$$n$$$ sticks of lengths $$$a_1, a_2, \ldots, a_n$$$. Find the maximum number of regular (equal-sided) polygons you can construct simultaneously, such that: </p><ul> <li> Each side of a polygon is formed by exactly one stick. </li><li> No stick is used in more than $$$1$$$ polygon. </li></ul><p>Note: Sticks cannot be broken.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 100$$$) — the number of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \leq n \leq 100$$$) — the number of sticks available.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \leq a_i \leq 100$$$) — the stick lengths.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer on a new line — the maximum number of regular (equal-sided) polygons you can make simultaneously from the sticks available.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007094404534831368" id="id0009309757167554367" class="input-output-copier">Copy</div></div><pre id="id007094404534831368"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">2</div><div class="test-example-line test-example-line-even test-example-line-2">1 1</div><div class="test-example-line test-example-line-odd test-example-line-3">6</div><div class="test-example-line test-example-line-odd test-example-line-3">2 2 3 3 3 3</div><div class="test-example-line test-example-line-even test-example-line-4">9</div><div class="test-example-line test-example-line-even test-example-line-4">4 2 2 2 2 4 2 4 4</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id002701656202753625" id="id009770188744226262" class="input-output-copier">Copy</div></div><pre id="id002701656202753625">0
0
1
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, we only have one stick, hence we can't form any polygon.</p><p>In the second test case, the two sticks aren't enough to form a polygon either.</p><p>In the third test case, we can use the $$$4$$$ sticks of length $$$3$$$ to create a square.</p><p>In the fourth test case, we can make a pentagon with side length $$$2$$$, and a square of side length $$$4$$$.</p></div>