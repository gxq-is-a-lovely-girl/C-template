#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<climits>
#include<cstring>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[10000];
		int b[10000];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[i]=1;
	}
	int mx=-1;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i-1;j++){
				if(a[j]<a[i])
				b[i]=max(b[j]+1,b[i]);
			}
			mx=max(mx,b[i]);
		}
		cout<<mx;
}

