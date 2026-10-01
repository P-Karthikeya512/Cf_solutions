<h2><a href="https://codeforces.com/contest/1944/problem/A" target="_blank" rel="noopener noreferrer">1944A — Destroying Bridges</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1944A](https://codeforces.com/contest/1944/problem/A) |

## Topics
`graphs` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Destroying Bridges</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There are $$$n$$$ islands, numbered $$$1, 2, \ldots, n$$$. Initially, every pair of islands is connected by a bridge. Hence, there are a total of $$$\frac{n (n - 1)}{2}$$$ bridges. </p><p>Everule lives on island $$$1$$$ and enjoys visiting the other islands using bridges. Dominater has the power to destroy at most $$$k$$$ bridges to minimize the number of islands that Everule can reach using (possibly multiple) bridges.</p><p>Find the minimum number of islands (including island $$$1$$$) that Everule can visit if Dominater destroys bridges optimally.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 10^3$$$) — the number of test cases. The description of the test cases follows.</p><p>The first and only line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le n \le 100$$$, $$$0 \le k \le \frac{n \cdot (n - 1)}{2}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output the minimum number of islands that Everule can visit if Dominater destroys bridges optimally.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002705982022875735" id="id005728648300206912" class="input-output-copier">Copy</div></div><pre id="id002705982022875735"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">2 0</div><div class="test-example-line test-example-line-even test-example-line-2">2 1</div><div class="test-example-line test-example-line-odd test-example-line-3">4 1</div><div class="test-example-line test-example-line-even test-example-line-4">5 10</div><div class="test-example-line test-example-line-odd test-example-line-5">5 3</div><div class="test-example-line test-example-line-even test-example-line-6">4 4</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005487441529584768" id="id0047190585210695835" class="input-output-copier">Copy</div></div><pre id="id005487441529584768">2
1
4
1
5
1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, since no bridges can be destroyed, all the islands will be reachable.</p><p>In the second test case, you can destroy the bridge between islands $$$1$$$ and $$$2$$$. Everule will not be able to visit island $$$2$$$ but can still visit island $$$1$$$. Therefore, the total number of islands that Everule can visit is $$$1$$$.</p><p>In the third test case, Everule always has a way of reaching all islands despite what Dominater does. For example, if Dominater destroyed the bridge between islands $$$1$$$ and $$$2$$$, Everule can still visit island $$$2$$$ by traveling by $$$1 \to 3 \to 2$$$ as the bridges between $$$1$$$ and $$$3$$$, and between $$$3$$$ and $$$2$$$ are not destroyed.</p><p>In the fourth test case, you can destroy all bridges since $$$k = \frac{n \cdot (n - 1)}{2}$$$. Everule will be only able to visit $$$1$$$ island (island $$$1$$$).</p></div>