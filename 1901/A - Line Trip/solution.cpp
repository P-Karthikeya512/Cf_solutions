#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin >> t;
	while(t--){
		int n , x;
		cin >> n >> x;
		vector<int>v(n);
		for(int i=0;i<n;i++) cin >> v[i];
		vector<int>z;
		z.push_back(v[0]-0);
		for(int i=1;i<n;i++){
			z.push_back(v[i]-v[i-1]);
		}
		cout << max(*max_element(z.begin(),z.end()),2*(x-v[n-1])) << endl; 
	}
	return 0;
}