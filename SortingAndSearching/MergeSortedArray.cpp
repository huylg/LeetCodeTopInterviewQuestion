#include <iostream>
#include <vector>
using namespace std;

int main(){
	int m,n;
	vector<int> nums1,nums2;

	vector<int> result;

	result.resize(m+n);

	int i,j,k;
	i=j=k = 0;

	while(i<n+m){
		if( k >= n  ||  j<m && nums1[j]<nums2[k]){
			result [i] = nums1[j]
			j++;
		}else{
			reult[i] = nums2[k];
			k++;
		}
		i++;
	}



	return 0;
}
