#include<bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int a, b,c;
		cin >> a >> b >> c;
		if(a+b>=10 || b+c>=10 || c+a>=10) cout << "YES
" ;
		else cout << "NO
" ;
	}
	return 0;
}