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
        for(int i:v) m[i]++;
        int x = m.size();
        if((x%2==0 && n%2==0)||(x%2 && n%2)) cout << x << endl;
        else cout << x-1 << endl;
    }
    return 0;
}