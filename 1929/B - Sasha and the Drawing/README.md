<h2><a href="https://codeforces.com/contest/1929/problem/B" target="_blank" rel="noopener noreferrer">1929B — Sasha and the Drawing</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1929B](https://codeforces.com/contest/1929/problem/B) |

## Topics
`constructive algorithms` `greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Sasha and the Drawing</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Even in kindergarten, Sasha liked a girl. Therefore, he wanted to give her a drawing and attract her attention.</p><p>As a drawing, he decided to draw a square grid of size $$$n \times n$$$, in which some cells are colored. But coloring the cells is difficult, so he wants to color as few cells as possible. But at the same time, he wants <span class="tex-font-style-bf">at least</span> $$$k$$$ diagonals to have at least one colored cell. Note that the square grid of size $$$n \times n$$$ has a total of $$$4n - 2$$$ diagonals.</p><p>Help little Sasha to make the girl fall in love with him and tell him the minimum number of cells he needs to color.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases. The description of the test cases follows.</p><p>The only line of each test case contains two integers $$$n$$$ and $$$k$$$ ($$$2 \leq n \leq 10^8$$$, $$$1 \leq k \leq 4n - 2$$$) — the size of the square grid and the minimum number of diagonals in which there should be at least one colored cell.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the minimum number of cells that need to be colored.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005930901242741418" id="id006738662543686784" class="input-output-copier">Copy</div></div><pre id="id005930901242741418"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">3 4</div><div class="test-example-line test-example-line-even test-example-line-2">3 3</div><div class="test-example-line test-example-line-odd test-example-line-3">3 10</div><div class="test-example-line test-example-line-even test-example-line-4">3 9</div><div class="test-example-line test-example-line-odd test-example-line-5">4 7</div><div class="test-example-line test-example-line-even test-example-line-6">7 11</div><div class="test-example-line test-example-line-odd test-example-line-7">2 3</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005467608248834339" id="id0014575133593904743" class="input-output-copier">Copy</div></div><pre id="id005467608248834339">2
2
6
5
4
6
2
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the pictures below, the colored cells are marked in black, and all diagonals are marked in purple.</p><p>In the first test case, you can color $$$2$$$ cells so that $$$4$$$ diagonals contain at least one colored cell:</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/5fca4926ed815e6edc00918532ed9b2eb20036e0.png" style="max-width: 100.0%;max-height: 100.0%;"> </center><p>In the third test case, you can color $$$6$$$ cells so that all $$$10$$$ diagonals contain at least one colored cell:</p><center> <img class="tex-graphics" src="https://espresso.codeforces.com/17b2f435e526903f0dd8d778ae3b386ae41737ce.png" style="max-width: 100.0%;max-height: 100.0%;"> </center></div>