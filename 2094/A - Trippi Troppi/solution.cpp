#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t;
	cin >> t;
	while(t--){
		vector<string> v(3);
		for(int i=0;i<3;i++) cin>>v[i];
		string c;
		for(int i=0;i<3;i++) c+=v[i][0];
		cout << c << endl;
	}
	return 0;
}