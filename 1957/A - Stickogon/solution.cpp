#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        map<int,int>m;
        for(int i : v) m[i]++;
        int sum=0;
        for(auto it=m.begin();it!=m.end();++it)sum+=((it->second)/3);
        cout << sum << endl;
    }
    return 0;
}