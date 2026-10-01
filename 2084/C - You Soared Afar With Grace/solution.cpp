#include <bits/stdc++.h>
using namespace std;
#define int long long
#define inVec(v) for(auto &x : v) cin >> x;
 
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> A(n), B(n);
        int eq = 0, eqIdx = -1;
        unordered_map<int, int> mp;
        inVec(A); inVec(B);
        bool bad = false;
        for (int i = 0; i < n; i++) {
            if (A[i] == B[i]) { eq++; eqIdx = i; }
        }
        if ((n % 2 == 1 && eq != 1) || (n % 2 == 0 && eq > 0))
            bad = true;
        for (int i = 0; i < n; i++) {
            if (mp.count(A[i])) {
                if (mp[A[i]] != B[i] || mp[B[i]] != A[i])
                    bad = true;
            } else {
                mp[A[i]] = B[i];
                mp[B[i]] = A[i];
            }
        }
        if (bad) { cout << -1 << "
"; continue; }
        unordered_map<int, int> idx;
        for (int i = 0; i < n; i++)
            idx[A[i]] = i;
        vector<pair<int,int>> ops;
        if (n % 2 == 1) {
            int mid = n / 2;
            if (eqIdx != mid) {
                swap(A[eqIdx], A[mid]);
                swap(B[eqIdx], B[mid]);
                idx[A[eqIdx]] = eqIdx;
                idx[A[mid]] = mid;
                ops.push_back({eqIdx+1, mid+1});
            }
        }
        for (int i = 0; i < n/2; i++) {
            int tar = n - i - 1, pairVal = mp[A[i]], cur = idx[pairVal];
            if (cur != tar) {
                int temp = A[tar];
                idx[pairVal] = tar;
                idx[temp] = cur;
                swap(A[cur], A[tar]);
                swap(B[cur], B[tar]);
                ops.push_back({cur+1, tar+1});
            }
        }
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (A[i] != B[n-i-1]) { ok = false; break; }
        }
        if (!ok) { cout << -1 << "
"; continue; }
        cout << ops.size() << "
";
        for (auto &p : ops)
            cout << p.first << " " << p.second << "
";
    }
    return 0;
}