<h2><a href="https://codeforces.com/contest/1285/problem/C" target="_blank" rel="noopener noreferrer">1285C — Fadi and LCM</a></h2>

| | |
|---|---|
| **Difficulty** | 1400 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1285C](https://codeforces.com/contest/1285/problem/C) |

## Topics
`brute force` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">C. Fadi and LCM</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Today, Osama gave Fadi an integer $$$X$$$, and Fadi was wondering about the minimum possible value of $$$max(a, b)$$$ such that $$$LCM(a, b)$$$ equals $$$X$$$. Both $$$a$$$ and $$$b$$$ should be positive integers.</p><p>$$$LCM(a, b)$$$ is the smallest positive integer that is divisible by both $$$a$$$ and $$$b$$$. For example, $$$LCM(6, 8) = 24$$$, $$$LCM(4, 12) = 12$$$, $$$LCM(2, 3) = 6$$$.</p><p>Of course, Fadi immediately knew the answer. Can you be just like Fadi and find any such pair?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first and only line contains an integer $$$X$$$ ($$$1 \le X \le 10^{12}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print two positive integers, $$$a$$$ and $$$b$$$, such that the value of $$$max(a, b)$$$ is minimum possible and $$$LCM(a, b)$$$ equals $$$X$$$. If there are several possible such pairs, you can print any.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003459457927394143" id="id008780268594142115" class="input-output-copier">Copy</div></div><pre id="id003459457927394143">2
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id001453981228923673" id="id003956285172529497" class="input-output-copier">Copy</div></div><pre id="id001453981228923673">1 2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0009744949296281791" id="id003677730014577314" class="input-output-copier">Copy</div></div><pre id="id0009744949296281791">6
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008603351146557819" id="id009171742233476583" class="input-output-copier">Copy</div></div><pre id="id008603351146557819">2 3
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0009397835119213949" id="id0007915598929287992" class="input-output-copier">Copy</div></div><pre id="id0009397835119213949">4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0040738413878396884" id="id008922810295723951" class="input-output-copier">Copy</div></div><pre id="id0040738413878396884">1 4
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0014310585462038972" id="id004708401823204734" class="input-output-copier">Copy</div></div><pre id="id0014310585462038972">1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0040102117988279407" id="id00149460869287534" class="input-output-copier">Copy</div></div><pre id="id0040102117988279407">1 1
</pre></div></div></div>