
#include<bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n,k;
	cin>>n>>k;

	int a[n],i;
	
	for(i=0;i<n;++i)
		cin>>a[i];

	sort(a,a+n);

	cout<<a[k-1]<<" "<<a[n-k];
	
	return 0;
}  

// binary search tree
// can be inplemented for this