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
        long long count_one=0,sum=0 ;
        for(int x : v){
            sum+=x;
            if(x==1) count_one++ ;
        }
        if(sum >= (n+count_one) && n>1) cout << "YES
";
        else cout << "NO
";
    }
    return 0;
}