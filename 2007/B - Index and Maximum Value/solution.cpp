#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        vector<int>v(n),a;
        for(int i=0;i<n;i++) cin >> v[i];
        int c=*max_element(v.begin(),v.end());
        while(m--){
            string s;
            int l,r;
            cin >> s >> l >> r;
            if(s=="+" && l<=c && r>=c) c++;
            else if(s=="-" && l<=c && r>=c) c--;
            a.push_back(c);
        }
        for(int i=0;i<a.size();i++) cout << a[i] << " ";
        cout << endl;
    }
    return 0;
}