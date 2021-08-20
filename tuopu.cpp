#include<iostream>
#include<cstdio>
#include<cmath>
#include<queue>
#include<stack>
#include<string>
#include<cstring>
#include<climits>
using namespace std;
bool map[1000][1000]={0};
int dian[10000]={0};
bool vis[10000]={0};
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int a,b;
		cin>>a>>b;
		map[a][b]=1;
		dian[b]++;
	}
	int find;
	while(1){
	bool flag=false;
		for(int i=1;i<=n;i++){
			if(dian[i]==0&&vis[i]==0){
				find=i;
				flag=true;
				vis[i]=1;
				break;
			}
		}
		if(!flag)break;
		for(int j=1;j<=n;j++){
			if(map[find][j]){
				dian[j]--;	
				map[find][j]=0;
			}
		}
		cout<<find<<" ";
 	}
	return 0;
}

