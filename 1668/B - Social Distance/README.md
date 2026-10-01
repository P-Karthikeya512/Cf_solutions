<h2><a href="https://codeforces.com/contest/1668/problem/B" target="_blank" rel="noopener noreferrer">1668B — Social Distance</a></h2>

| | |
|---|---|
| **Difficulty** | 900 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1668B](https://codeforces.com/contest/1668/problem/B) |

## Topics
`greedy` `math` `sortings`

---

## Problem Statement

<div class="header"><div class="title">B. Social Distance</div><div class="time-limit"><div class="property-title">time limit per test</div>1.5 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>$$$m$$$ chairs are arranged in a circle sequentially. The chairs are numbered from $$$0$$$ to $$$m-1$$$. $$$n$$$ people want to sit in these chairs. The $$$i$$$-th of them wants at least $$$a[i]$$$ empty chairs both on his right and left side. </p><p>More formally, if the $$$i$$$-th person sits in the $$$j$$$-th chair, then no one else should sit in the following chairs: $$$(j-a[i]) \bmod m$$$, $$$(j-a[i]+1) \bmod m$$$, ... $$$(j+a[i]-1) \bmod m$$$, $$$(j+a[i]) \bmod m$$$.</p><p>Decide if it is possible to sit down for all of them, under the given limitations.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 5 \cdot 10^4$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains two integers $$$n$$$ and $$$m$$$ ($$$2 \leq n \leq 10^5$$$, $$$1 \leq m \leq 10^9$$$) — the number of people and the number of chairs.</p><p>The next line contains $$$n$$$ integers, $$$a_1$$$, $$$a_2$$$, ... $$$a_n$$$ ($$$1 \leq a_i \leq 10^9$$$) — the minimum number of empty chairs, on both sides of the $$$i$$$-th person.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases will not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case print "YES" (without quotes) if it is possible for everyone to sit down and fulfil the restrictions, and "NO" (without quotes) otherwise.</p><p>You may print every letter in any case you want (so, for example, the strings "yEs", "yes", "Yes" and "YES" will all be recognized as positive answers).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0035474980762950703" id="id004237855342144412" class="input-output-copier">Copy</div></div><pre id="id0035474980762950703">6
3 2
1 1 1
2 4
1 1
2 5
2 1
3 8
1 2 1
4 12
1 2 1 3
4 19
1 2 1 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009089437569291056" id="id007078741525790808" class="input-output-copier">Copy</div></div><pre id="id009089437569291056">NO
YES
NO
YES
NO
YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Test case $$$1$$$: $$$n \gt m$$$, so they can not sit down.</p><p>Test case $$$2$$$: the first person can sit $$$2$$$-nd and the second person can sit in the $$$0$$$-th chair. Both of them want at least $$$1$$$ empty chair on both sides, chairs $$$1$$$ and $$$3$$$ are free, so this is a good solution.</p><p>Test case $$$3$$$: if the second person sits down somewhere, he needs $$$2$$$ empty chairs, both on his right and on his left side, so it is impossible to find a place for the first person, because there are only $$$5$$$ chairs.</p><p>Test case $$$4$$$: they can sit in the $$$1$$$-st, $$$4$$$-th, $$$7$$$-th chairs respectively.</p></div>