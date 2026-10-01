#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int>v(n);
		v[0] = 1; v[1] = 1;
		v[n-1] = 1;
		for(int i=2;i<n-1;i++){
			v[i] = i;
		}
		for(auto it: v) cout << it << ' ';
		cout << endl;
	}
	return 0;
}