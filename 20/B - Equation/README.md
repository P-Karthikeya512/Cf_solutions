<h2><a href="https://codeforces.com/contest/20/problem/B" target="_blank" rel="noopener noreferrer">20B — Equation</a></h2>

| | |
|---|---|
| **Difficulty** | 2000 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 20B](https://codeforces.com/contest/20/problem/B) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">B. Equation</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard" style="font-weight: bold"><div class="property-title">input</div>stdin</div><div class="output-file output-standard" style="font-weight: bold"><div class="property-title">output</div>stdout</div></div><div><p>You are given an equation: </p><center> <span class="tex-span"><i>Ax</i><sup class="upper-index">2</sup> + <i>Bx</i> + <i>C</i> = 0</span>. </center><p>Your task is to find the number of distinct roots of the equation and print all of them in ascending order.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains three integer numbers <span class="tex-span"><i>A</i>, <i>B</i></span> and <span class="tex-span"><i>C</i></span> (<span class="tex-span"> - 10<sup class="upper-index">5</sup> ≤ <i>A</i>, <i>B</i>, <i>C</i> ≤ 10<sup class="upper-index">5</sup></span>). Any coefficient may be equal to 0.</p></div><div class="output-specification"><div class="section-title">Output</div><p>In case of infinite root count print the only integer <span class="tex-font-style-tt">-1</span>. In case of no roots print the only integer <span class="tex-font-style-tt">0</span>. In other cases print the number of root on the first line and the roots on the following lines in the ascending order. Print roots with at least 5 digits after the decimal point.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004335821361807448" id="id003439616429266731" class="input-output-copier">Copy</div></div><pre id="id004335821361807448">1 -5 6<br></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005801121176154688" id="id0009447031819010632" class="input-output-copier">Copy</div></div><pre id="id005801121176154688">2<br>2.0000000000<br>3.0000000000</pre></div></div></div>