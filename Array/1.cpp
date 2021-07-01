
#include<bits/stdc++.h>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

// reverse() can also use

	int n;
	cin>>n;

	int a[n],i;
	for(i=0;i<n;i++)
		cin>>a[i];

	int j=n-1;
	i=0;

	while(i<j)
		{
			swap(a[i],a[j]);
			i++;
			j--;
		}

	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	
	return 0;
}  