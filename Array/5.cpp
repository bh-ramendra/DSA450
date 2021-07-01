// will keep 3 variable so that count 
// occurance of 0 then 1 and then 2.

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

	int j=0;

	for ( i = 0; i < n; ++i)
	{
		if (a[i]<0)
		{
			/* code */
			swap(a[i],a[j]);
			j++;

		}
	}
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<a[i]<<" ";
	}

	return 0;
}  