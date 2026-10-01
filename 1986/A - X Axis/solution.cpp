#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t,x1,x2,x3;
	cin >> t;
	while(t--){
		cin >> x1>>x2>>x3;
		vector<int>v;
		v.push_back(std::abs(x1-x2)+std::abs(x2-x2)+std::abs(x3-x2));
		v.push_back(std::abs(x1-x3)+std::abs(x2-x3)+std::abs(x3-x3));
		v.push_back(std::abs(x1-x1)+std::abs(x2-x1)+std::abs(x3-x1));
		cout<< *min_element(v.begin(),v.end()) <<endl;
	}
	return 0;
}