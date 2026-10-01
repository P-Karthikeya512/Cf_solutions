#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        set<int>st(a.begin(),a.end());
        if(st.size()==1) cout << "No
";
        else {
            cout << "Yes
";
            int maxi = *max_element(a.begin(),a.end());
            for(int i=0;i<n;i++){
                if(a[i]==maxi) cout << 2 << " ";
                else cout << 1 << " ";
            }
            cout << endl;
        }
    }
    return 0;
}