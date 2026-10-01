#include<bits/stdc++.h>
using namespace std;
 
int maxi(vector<int>v,int c){
    int count = 0;
    for(int i=0;i<v.size();i++){
        if(v[i]>c) count++;
    }
    return count;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n),c;
        for(int i=0;i<n;i++) cin >> v[i];
        for(int i=0;i<n;i++){
            int u = maxi(v,v[i]);
            c.push_back(i+u);
        }
        if(c.empty()) cout << 0 << endl;
        else cout << *min_element(c.begin(),c.end()) << endl;
    }
    return 0;
}