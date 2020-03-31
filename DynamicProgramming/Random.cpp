#include <time.h>       /* time */
#include <iostream>
using namespace std;

int main(){

	srand (time(NULL));
	int n = 1000;
	for(int i=0;i<n;i++) cout<<rand()<<" ";

	return 1;
}
