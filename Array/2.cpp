
#include<bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int n;
	cin>>n;

	int a[n],i;
	
	for(i=0;i<n;++i)
		cin>>a[i];

	int min=INT_MAX,max=INT_MIN;

	for ( i = 0; i < n; ++i)
	{
		if(min>a[i])
			min=a[i];
	}


for ( i = 0; i < n; ++i)
	{
		if(max<a[i])
			max=a[i];
	}


cout<<min<<" "<<max;

	
	return 0;
}  

// tc:o(n)