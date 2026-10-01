#include<bits/stdc++.h>
using namespace std;
 
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int>a(n);
		for(int i=0;i<n;i++) cin >> a[i] ;
		sort(a.begin(),a.end());
		int product=a[0]+1;
		for(int i=1;i<n;i++) product*=a[i];
		cout << product << endl;
	}
	return 0;
}