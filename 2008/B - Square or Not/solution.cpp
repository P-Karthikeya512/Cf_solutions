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
        cin>>n;
        string s;
        cin >> s;
        int x1 = sqrt(n);
        int z_count = count(s.begin(),s.end(),'0');
        if(n!=(x1*x1)) cout << "No
";
        else if(z_count == ((x1-2)*(x1-2))) cout << "Yes
";
        else cout << "No
";
    }
    return 0;
}