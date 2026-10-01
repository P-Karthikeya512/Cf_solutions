<h2><a href="https://codeforces.com/contest/1999/problem/D" target="_blank" rel="noopener noreferrer">1999D — Slavic's Exam</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1999D](https://codeforces.com/contest/1999/problem/D) |

## Topics
`greedy` `implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">D. Slavic's Exam</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Slavic has a very tough exam and needs your help in order to pass it. Here is the question he is struggling with:</p><p>There exists a string $$$s$$$, which consists of lowercase English letters and possibly zero or more "<span class="tex-font-style-tt">?</span>". </p><p>Slavic is asked to change each "<span class="tex-font-style-tt">?</span>" to a lowercase English letter such that string $$$t$$$ becomes a subsequence (not necessarily continuous) of the string $$$s$$$. </p><p>Output any such string, or say that it is impossible in case no string that respects the conditions exists.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$T$$$ ($$$1 \leq T \leq 10^4$$$) — the number of test cases.</p><p>The first line of each test case contains a single string $$$s$$$ ($$$1 \leq |s| \leq 2 \cdot 10^5$$$, and $$$s$$$ consists only of lowercase English letters and "<span class="tex-font-style-tt">?</span>"-s)  – the original string you have.</p><p>The second line of each test case contains a single string $$$t$$$ ($$$1 \leq |t| \leq |s|$$$, and $$$t$$$ consists only of lowercase English letters)  – the string that should be a subsequence of string $$$s$$$.</p><p>The sum of $$$|s|$$$ over all test cases doesn't exceed $$$2 \cdot 10^5$$$, where $$$|x|$$$ denotes the length of the string $$$x$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, if no such string exists as described in the statement, output "<span class="tex-font-style-tt">NO</span>" (without quotes).</p><p>Otherwise, output "<span class="tex-font-style-tt">YES</span>" (without quotes). Then, output one line — the string that respects all conditions.</p><p>You can output "<span class="tex-font-style-tt">YES</span>" and "<span class="tex-font-style-tt">NO</span>" in any case (for example, strings "<span class="tex-font-style-tt">yEs</span>", "<span class="tex-font-style-tt">yes</span>", and "<span class="tex-font-style-tt">Yes</span>" will be recognized as a positive response).</p><p>If multiple answers are possible, you can output any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009109484982590113" id="id006844173977707922" class="input-output-copier">Copy</div></div><pre id="id009109484982590113"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">?????</div><div class="test-example-line test-example-line-odd test-example-line-1">xbx</div><div class="test-example-line test-example-line-even test-example-line-2">ab??e</div><div class="test-example-line test-example-line-even test-example-line-2">abcde</div><div class="test-example-line test-example-line-odd test-example-line-3">ayy?x</div><div class="test-example-line test-example-line-odd test-example-line-3">a</div><div class="test-example-line test-example-line-even test-example-line-4">ab??e</div><div class="test-example-line test-example-line-even test-example-line-4">dac</div><div class="test-example-line test-example-line-odd test-example-line-5">paiu</div><div class="test-example-line test-example-line-odd test-example-line-5">mom</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009153998649906957" id="id004580739785757363" class="input-output-copier">Copy</div></div><pre id="id009153998649906957">YES
xabax
YES
abcde
YES
ayyyx
NO
NO
</pre></div></div></div>