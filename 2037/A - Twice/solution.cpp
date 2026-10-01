#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,score = 0;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        map<int, int> m;
        for(int i = 0; i < n; i++) {
            m[v[i]]++;
        }
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second > 1) score += (it->second)/2;
        }
        cout << score << endl;
    }
    return 0;
}