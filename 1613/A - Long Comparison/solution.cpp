#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        long long x1,p1;
        long long x2,p2;
        cin >> x1 >> p1 ;
        cin >> x2 >> p2 ;
        if(p1 > p2 + 7) cout << ">
";
        else if (p2 > p1 +7)cout << "<
";
        else{
            int m = min(p1,p2);
            p1-=m;
            p2-=m;
            for(int i=0;i<p1;i++) x1*=10;
            for(int i=0;i<p2;i++) x2*=10;
            if(x1>x2) cout << ">
";
            else if(x1 < x2) cout <<"<
";
            else cout << "=
";
        }
    }
    return 0;
}