#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin >> t;
	while(t--){
		vector<int>v(2);
		for(int i=0;i<2;i++) cin >> v[i];
		cout << (*min_element(v.begin(),v.end())) << " "<< (*max_element(v.begin(),v.end())) << "
";
	}
	return 0;
}