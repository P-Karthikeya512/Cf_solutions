#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
    	int n,m,l,r;
        cin >> n >> m >> l >> r;
        int total_left = -l;
        int total_right = r;
        int L1 = max(0, m - total_right);
        int R1 = m - L1;
        cout << -L1 << " " << R1 << "
";
    }
    return 0;
}