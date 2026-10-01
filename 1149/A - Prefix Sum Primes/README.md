<h2><a href="https://codeforces.com/contest/1149/problem/A" target="_blank" rel="noopener noreferrer">1149A — Prefix Sum Primes</a></h2>

| | |
|---|---|
| **Difficulty** | 1200 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1149A](https://codeforces.com/contest/1149/problem/A) |

## Topics
`constructive algorithms` `greedy` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">A. Prefix Sum Primes</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>We're giving away nice huge bags containing number tiles! A bag we want to present to you contains $$$n$$$ tiles. Each of them has a single number written on it — either $$$1$$$ or $$$2$$$.</p><p>However, there is one condition you must fulfill in order to receive the prize. You will need to put all the tiles from the bag in a sequence, in any order you wish. We will then compute the sums of all prefixes in the sequence, and then count how many of these sums are prime numbers. If you want to keep the prize, you will need to maximize the number of primes you get.</p><p>Can you win the prize? Hurry up, the bags are waiting!</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains a single integer $$$n$$$ ($$$1 \leq n \leq 200\,000$$$) — the number of number tiles in the bag. The following line contains $$$n$$$ space-separated integers $$$a_1, a_2, \dots, a_n$$$ ($$$a_i \in \{1, 2\}$$$) — the values written on the tiles.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output a permutation $$$b_1, b_2, \dots, b_n$$$ of the input sequence $$$(a_1, a_2, \dots, a_n)$$$ maximizing the number of the prefix sums being prime numbers. If there are multiple optimal permutations, output any.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id001764140860899326" id="id005216488621863387" class="input-output-copier">Copy</div></div><pre id="id001764140860899326">5
1 2 1 2 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id004501327922526709" id="id0001412817649516096" class="input-output-copier">Copy</div></div><pre id="id004501327922526709">1 1 1 2 2
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id008644299560264271" id="id005846726038700498" class="input-output-copier">Copy</div></div><pre id="id008644299560264271">9
1 1 2 1 1 1 2 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007806760954605666" id="id004782081699097739" class="input-output-copier">Copy</div></div><pre id="id007806760954605666">1 1 1 2 1 1 1 2 1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>The first solution produces the prefix sums $$$1, \mathbf{\color{blue}{2}}, \mathbf{\color{blue}{3}}, \mathbf{\color{blue}{5}}, \mathbf{\color{blue}{7}}$$$ (four primes constructed), while the prefix sums in the second solution are $$$1, \mathbf{\color{blue}{2}}, \mathbf{\color{blue}{3}}, \mathbf{\color{blue}{5}}, 6, \mathbf{\color{blue}{7}}, 8, 10, \mathbf{\color{blue}{11}}$$$ (five primes). Primes are marked bold and blue. In each of these cases, the number of produced primes is maximum possible.</p></div>