#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        int sum = accumulate(v.begin(),v.end(),0);
        if(sum){
            cout << "YES
";
            sort(v.begin(),v.end());
            if(sum > 0) reverse(v.begin(),v.end());
            for(int i=0;i<n;i++) cout << v[i] << " ";
            cout << endl;
        }
        else cout << "NO
";
    }
    return 0;
}