#include <iostream>
#include <vector>
using namespace std;



int main(){

	int n;
	cin >> n;

	vector<int> vec;
	vec.resize(n);
	
	vec[0] = 1;
	vec[1] = 2;

	for(int i = 2; i<n;i++){
		vec[i] = vec[i-1] + vec[i-2];
	}

	cout<<vec[n-1];

	return 0;
}
