#include<iostream>
#include<cstdio>
#include<cmath>
#include<queue>
#include<stack>
#include<string>
#include<cstring>
#include<climits>
#define MAX 10000 
using namespace std;
char a[MAX];
int k;
void High_precision_Division(){
	int a1[MAX];
	long long  ans[MAX];
	for(int i=0;i<strlen(a);i++)a1[i]=a[i]-'0';
	long long tmp =0;
	for(int i=0;i<strlen(a);i++){
	tmp=tmp*10+a1[i];
	ans[i]=tmp/k;
	tmp=tmp%k;
	}
	bool flag =true;
	for(int i=0;i<strlen(a);i++){
		if(ans[i]==0&&flag){
			continue;
		}else{
			flag =false;
		}
		cout<<ans[i];
	}
	if(flag){
		cout<<0;
	}
}
int main(){
    cin>>a>>k;
    if(k==0){
    	cout<<0;
    	return 0;
	}
     High_precision_Division();
    return 0;
}

