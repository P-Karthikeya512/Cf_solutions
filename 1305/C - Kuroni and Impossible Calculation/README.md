<h2><a href="https://codeforces.com/contest/1305/problem/C" target="_blank" rel="noopener noreferrer">1305C — Kuroni and Impossible Calculation</a></h2>

| | |
|---|---|
| **Difficulty** | 1600 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1305C](https://codeforces.com/contest/1305/problem/C) |

## Topics
`brute force` `combinatorics` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">C. Kuroni and Impossible Calculation</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>To become the king of Codeforces, Kuroni has to solve the following problem.</p><p>He is given $$$n$$$ numbers $$$a_1, a_2, \dots, a_n$$$. Help Kuroni to calculate $$$\prod_{1\le i \lt j\le n} |a_i - a_j|$$$. As result can be very big, output it modulo $$$m$$$.</p><p>If you are not familiar with short notation, $$$\prod_{1\le i \lt j\le n} |a_i - a_j|$$$ is equal to $$$|a_1 - a_2|\cdot|a_1 - a_3|\cdot$$$ $$$\dots$$$ $$$\cdot|a_1 - a_n|\cdot|a_2 - a_3|\cdot|a_2 - a_4|\cdot$$$ $$$\dots$$$ $$$\cdot|a_2 - a_n| \cdot$$$ $$$\dots$$$ $$$\cdot |a_{n-1} - a_n|$$$. In other words, this is the product of $$$|a_i - a_j|$$$ for all $$$1\le i  \lt  j \le n$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains two integers $$$n$$$, $$$m$$$ ($$$2\le n \le 2\cdot 10^5$$$, $$$1\le m \le 1000$$$) — number of numbers and modulo.</p><p>The second line contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$0 \le a_i \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output the single number — $$$\prod_{1\le i \lt j\le n} |a_i - a_j| \bmod m$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002854328103539959" id="id00785424404724686" class="input-output-copier">Copy</div></div><pre id="id002854328103539959">2 10
8 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00551972691131452" id="id0021041783023799043" class="input-output-copier">Copy</div></div><pre id="id00551972691131452">3</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0018907790966893645" id="id006561691191484654" class="input-output-copier">Copy</div></div><pre id="id0018907790966893645">3 12
1 4 5
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009388656652558787" id="id00882330381522908" class="input-output-copier">Copy</div></div><pre id="id009388656652558787">0</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009134088607359493" id="id006142673074253956" class="input-output-copier">Copy</div></div><pre id="id009134088607359493">3 7
1 4 9
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00060733407521458505" id="id006737210447577067" class="input-output-copier">Copy</div></div><pre id="id00060733407521458505">1</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first sample, $$$|8 - 5| = 3 \equiv 3 \bmod 10$$$.</p><p>In the second sample, $$$|1 - 4|\cdot|1 - 5|\cdot|4 - 5| = 3\cdot 4 \cdot 1 = 12 \equiv 0 \bmod 12$$$.</p><p>In the third sample, $$$|1 - 4|\cdot|1 - 9|\cdot|4 - 9| = 3 \cdot 8 \cdot 5 = 120 \equiv 1 \bmod 7$$$.</p></div>