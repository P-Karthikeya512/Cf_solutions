<h2><a href="https://codeforces.com/contest/1997/problem/A" target="_blank" rel="noopener noreferrer">1997A — Strong Password</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1997A](https://codeforces.com/contest/1997/problem/A) |

## Topics
`brute force` `implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Strong Password</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>512 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Monocarp's current password on Codeforces is a string $$$s$$$, consisting of lowercase Latin letters. Monocarp thinks that his current password is too weak, so he wants to <span class="tex-font-style-bf">insert exactly one lowercase Latin letter</span> into the password to make it stronger. Monocarp can choose any letter and insert it anywhere, even before the first character or after the last character.</p><p>Monocarp thinks that the password's strength is proportional to the time it takes him to type the password. The time it takes to type the password is calculated as follows:</p><ul> <li> the time to type the first character is $$$2$$$ seconds; </li><li> for each character other than the first, the time it takes to type it is $$$1$$$ second if it is the same as the previous character, or $$$2$$$ seconds otherwise. </li></ul><p>For example, the time it takes to type the password <span class="tex-font-style-tt">abacaba</span> is $$$14$$$; the time it takes to type the password <span class="tex-font-style-tt">a</span> is $$$2$$$; the time it takes to type the password <span class="tex-font-style-tt">aaabacc</span> is $$$11$$$.</p><p>You have to help Monocarp — insert a lowercase Latin letter into his password so that the resulting password takes the maximum possible amount of time to type.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains one integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases.</p><p>Each test case consists of one line containing the string $$$s$$$ ($$$1 \le |s| \le 10$$$), consisting of lowercase Latin letters.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print one line containing the new password — a string which can be obtained from $$$s$$$ by inserting one lowercase Latin letter. The string you print should have the maximum possible required time to type it. If there are multiple answers, print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00012484473829769915" id="id009565969654647335" class="input-output-copier">Copy</div></div><pre id="id00012484473829769915"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">a</div><div class="test-example-line test-example-line-even test-example-line-2">aaa</div><div class="test-example-line test-example-line-odd test-example-line-3">abb</div><div class="test-example-line test-example-line-even test-example-line-4">password</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005985480198109138" id="id006319351344892056" class="input-output-copier">Copy</div></div><pre id="id005985480198109138">wa
aada
abcb
pastsword
</pre></div></div></div>