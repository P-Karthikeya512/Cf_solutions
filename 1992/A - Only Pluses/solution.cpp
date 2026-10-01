#include <bits/stdc++.h>
using namespace std;
 
int maxProduct(int a, int b, int c, int k) {
    vector<int> values;
    values.push_back(a);values.push_back(b);values.push_back(c);
    while (k > 0) {
        vector<int>::iterator minElement = min_element(values.begin(), values.end());
        (*minElement)++;
        k--;
    }
    return values[0] * values[1] * values[2];
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int k = 5;
        cout << maxProduct(a, b, c, k) << endl;
    }
 
    return 0;
}