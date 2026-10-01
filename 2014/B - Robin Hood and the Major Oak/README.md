<h2><a href="https://codeforces.com/contest/2014/problem/B" target="_blank" rel="noopener noreferrer">2014B — Robin Hood and the Major Oak</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2014B](https://codeforces.com/contest/2014/problem/B) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">B. Robin Hood and the Major Oak</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><div class="epigraph"><div class="epigraph-text"><span class="tex-font-style-it">In Sherwood, the trees are our shelter, and we are all children of the forest.</span></div></div><p><span class="tex-font-style-it">The Major Oak in Sherwood is known for its majestic foliage, which provided shelter to Robin Hood and his band of merry men and women.</span></p><p>The Major Oak grows $$$i^i$$$ new leaves in the $$$i$$$-th year. It starts with $$$1$$$ leaf in year $$$1$$$.</p><p>Leaves last for $$$k$$$ years on the tree. In other words, leaves grown in year $$$i$$$ last between years $$$i$$$ and $$$i+k-1$$$ inclusive.</p><p>Robin considers even numbers lucky. Help Robin determine whether the Major Oak will have an even number of leaves in year $$$n$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>Each test case consists of two integers $$$n$$$, $$$k$$$ ($$$1 \le n \le 10^9$$$, $$$1 \le k \le n$$$) — the requested year and the number of years during which the leaves remain.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output one line, "<span class="tex-font-style-tt">YES</span>" if in year $$$n$$$ the Major Oak will have an even number of leaves and "<span class="tex-font-style-tt">NO</span>" otherwise.</p><p>You can output the answer in any case (upper or lower). For example, the strings "<span class="tex-font-style-tt">yEs</span>", "<span class="tex-font-style-tt">yes</span>", "<span class="tex-font-style-tt">Yes</span>", and "<span class="tex-font-style-tt">YES</span>" will be recognized as positive responses.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0031802244688366477" id="id0019766381188811355" class="input-output-copier">Copy</div></div><pre id="id0031802244688366477"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">1 1</div><div class="test-example-line test-example-line-even test-example-line-2">2 1</div><div class="test-example-line test-example-line-odd test-example-line-3">2 2</div><div class="test-example-line test-example-line-even test-example-line-4">3 2</div><div class="test-example-line test-example-line-odd test-example-line-5">4 4</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007365962635844066" id="id008351164260358044" class="input-output-copier">Copy</div></div><pre id="id007365962635844066">NO
YES
NO
NO
YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, there is only $$$1$$$ leaf.</p><p>In the second test case, $$$k=1$$$, so in the $$$2$$$-nd year there will be $$$2^2=4$$$ leaves.</p><p>In the third test case, $$$k=2$$$, so in the $$$2$$$-nd year there will be $$$1+2^2=5$$$ leaves.</p><p>In the fourth test case, $$$k=2$$$, so in the $$$3$$$-rd year there will be $$$2^2 + 3^3 = 4 + 27 = 31$$$ leaves.</p></div>