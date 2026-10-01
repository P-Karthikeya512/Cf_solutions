#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,s,m,gap=0;
        cin >> n >> s >> m;
        vector<pair<int,int> >v(n);
        for(int i=0;i<n;i++){
            cin >> v[i].first >> v[i].second;
        }
        bool found = false;
        if(v[0].first >= s) found = true;
        for(int i=1;i<n;i++){
            if(v[i].first - v[i-1].second >= s) found=true;
        }
        if( m -v[n-1].second >= s) found = true;
        if(found) cout << "YES
";
        else cout << "NO
";
    }
    return 0;
}