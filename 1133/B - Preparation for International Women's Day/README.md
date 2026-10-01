<h2><a href="https://codeforces.com/contest/1133/problem/B" target="_blank" rel="noopener noreferrer">1133B — Preparation for International Women's Day</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1133B](https://codeforces.com/contest/1133/problem/B) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Preparation for International Women's Day</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>International Women's Day is coming soon! Polycarp is preparing for the holiday.</p><p>There are $$$n$$$ candy boxes in the shop for sale. The $$$i$$$-th box contains $$$d_i$$$ candies.</p><p>Polycarp wants to prepare the maximum number of gifts for $$$k$$$ girls. Each gift will consist of <span class="tex-font-style-bf">exactly two</span> boxes. The girls should be able to share each gift equally, so the total amount of candies in a gift (in a pair of boxes) should be divisible by $$$k$$$. In other words, two boxes $$$i$$$ and $$$j$$$ ($$$i \ne j$$$) can be combined as a gift if $$$d_i + d_j$$$ is divisible by $$$k$$$.</p><p>How many boxes will Polycarp be able to give? Of course, each box can be a part of no more than one gift. Polycarp cannot use boxes "partially" or redistribute candies between them. </p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains two integers $$$n$$$ and $$$k$$$ ($$$1 \le n \le 2 \cdot 10^5, 1 \le k \le 100$$$) — the number the boxes and the number the girls.</p><p>The second line of the input contains $$$n$$$ integers $$$d_1, d_2, \dots, d_n$$$ ($$$1 \le d_i \le 10^9$$$), where $$$d_i$$$ is the number of candies in the $$$i$$$-th box.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the maximum number of the boxes Polycarp can give as gifts.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0023595361077178179" id="id007765502830779859" class="input-output-copier">Copy</div></div><pre id="id0023595361077178179">7 2
1 2 2 3 2 4 10
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006373741656516039" id="id007737505080186674" class="input-output-copier">Copy</div></div><pre id="id006373741656516039">6
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0016134889588113233" id="id00591739624599812" class="input-output-copier">Copy</div></div><pre id="id0016134889588113233">8 2
1 2 2 3 2 4 6 10
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00725178995649983" id="id008872853887832322" class="input-output-copier">Copy</div></div><pre id="id00725178995649983">8
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008299518428691157" id="id007569562377330341" class="input-output-copier">Copy</div></div><pre id="id008299518428691157">7 3
1 2 2 3 2 4 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0022973668061584385" id="id003120068232719897" class="input-output-copier">Copy</div></div><pre id="id0022973668061584385">4
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example Polycarp can give the following pairs of boxes (pairs are presented by <span class="tex-font-style-bf">indices of corresponding boxes</span>): </p><ul> <li> $$$(2, 3)$$$; </li><li> $$$(5, 6)$$$; </li><li> $$$(1, 4)$$$. </li></ul><p>So the answer is $$$6$$$.</p><p>In the second example Polycarp can give the following pairs of boxes (pairs are presented by <span class="tex-font-style-bf">indices of corresponding boxes</span>): </p><ul> <li> $$$(6, 8)$$$; </li><li> $$$(2, 3)$$$; </li><li> $$$(1, 4)$$$; </li><li> $$$(5, 7)$$$. </li></ul><p>So the answer is $$$8$$$.</p><p>In the third example Polycarp can give the following pairs of boxes (pairs are presented by <span class="tex-font-style-bf">indices of corresponding boxes</span>): </p><ul> <li> $$$(1, 2)$$$; </li><li> $$$(6, 7)$$$. </li></ul><p>So the answer is $$$4$$$.</p></div>