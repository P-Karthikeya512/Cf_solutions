#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t;
cin >> t;
while(t--){
int n,x;
cin >> n >> x;
int c = __builtin_popcountll(x);
if(n <= c) cout << x << endl;
else if((n-c)%2 == 0) cout << x + n - c << endl;
else{
if(x>1) cout << x + n - c + 1 << endl;
else if(x==1) cout << 3 + n << endl;
else{
if(n==1) cout << -1 << endl;
else cout << n + 3 << endl;
}
}
}
return 0;
}