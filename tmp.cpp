#include<iostream>
#include<cstdio>
#include<cmath>
#include<queue>
#include<stack>
#include<string>
#include<cstring>
#include<climits>
#define INF INT_MAX
using namespace std;
int main(){
	int n,m;
	int map[1000][1000];
	cin>>n>>m; 
	for(int i=1;i<=999;i++){
		for(int j=1;j<=999;j++){
			if(i==j)map[i][j]=0;
			else map[i][j]=INF;
		}
	}
	for(int i=1;i<=m;i++){
		int a,b,c;
		cin>>a>>b>>c;
		map[a][b]=c;
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(map[i][k]!=INF&&map[k][j]!=INF){
					map[i][j]=min(map[i][j],map[i][k]+map[k][j]);
				}
			}
		}
	}
	cout<<map[1][6];
return 0;
}
