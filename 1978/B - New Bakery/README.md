<h2><a href="https://codeforces.com/contest/1978/problem/B" target="_blank" rel="noopener noreferrer">1978B — New Bakery</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1978B](https://codeforces.com/contest/1978/problem/B) |

## Topics
`binary search` `greedy` `math` `ternary search`

---

## Problem Statement

<div class="header"><div class="title">B. New Bakery</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Bob decided to open a bakery. On the opening day, he baked $$$n$$$ buns that he can sell. The usual price of a bun is $$$a$$$ coins, but to attract customers, Bob organized the following promotion:</p><ul><li> Bob chooses some integer $$$k$$$ ($$$0 \le k \le \min(n, b)$$$).</li><li> Bob sells the first $$$k$$$ buns at a modified price. In this case, the price of the $$$i$$$-th ($$$1 \le i \le k$$$) sold bun is $$$(b - i + 1)$$$ coins.</li><li> The remaining $$$(n - k)$$$ buns are sold at $$$a$$$ coins each.</li></ul><p>Note that $$$k$$$ can be equal to $$$0$$$. In this case, Bob will sell all the buns at $$$a$$$ coins each.</p><p>Help Bob determine the maximum profit he can obtain by selling all $$$n$$$ buns.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. The description of the test cases follows.</p><p>The only line of each test case contains three integers $$$n$$$, $$$a$$$, and $$$b$$$ ($$$1 \le n, a, b \le 10^9$$$) — the number of buns, the usual price of a bun, and the price of the first bun to be sold at a modified price.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer — the maximum profit that Bob can obtain.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005432343543185066" id="id0020421984001229043" class="input-output-copier">Copy</div></div><pre id="id005432343543185066"><div class="test-example-line test-example-line-even test-example-line-0">7</div><div class="test-example-line test-example-line-odd test-example-line-1">4 4 5</div><div class="test-example-line test-example-line-even test-example-line-2">5 5 9</div><div class="test-example-line test-example-line-odd test-example-line-3">10 10 5</div><div class="test-example-line test-example-line-even test-example-line-4">5 5 11</div><div class="test-example-line test-example-line-odd test-example-line-5">1000000000 1000000000 1000000000</div><div class="test-example-line test-example-line-even test-example-line-6">1000000000 1000000000 1</div><div class="test-example-line test-example-line-odd test-example-line-7">1000 1 1000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005792207394583329" id="id0044155770028955843" class="input-output-copier">Copy</div></div><pre id="id005792207394583329">17
35
100
45
1000000000000000000
1000000000000000000
500500
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, it is optimal for Bob to choose $$$k = 1$$$. Then he will sell one bun for $$$5$$$ coins, and three buns at the usual price for $$$4$$$ coins each. Then the profit will be $$$5 + 4 + 4 + 4 = 17$$$ coins.</p><p>In the second test case, it is optimal for Bob to choose $$$k = 5$$$. Then he will sell all the buns at the modified price and obtain a profit of $$$9 + 8 + 7 + 6 + 5 = 35$$$ coins.</p><p>In the third test case, it is optimal for Bob to choose $$$k = 0$$$. Then he will sell all the buns at the usual price and obtain a profit of $$$10 \cdot 10 = 100$$$ coins.</p></div>