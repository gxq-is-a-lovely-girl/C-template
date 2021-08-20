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
char a[MAX],b[MAX];
void High_precision_multiplication(){
	int a1[MAX],b1[MAX],pana=0,panb=0;
	bool  k;
	if(a[0]=='-'&&b[0]!='-'){
		pana=1;
		 k=1;
	}else if(a[0]=='-'&&b[0]=='-'){
		pana=1;panb=1;
		k=0;
	}
	else if(a[0]!='-'&&b[0]=='-'){
		panb=1;
		k=1;
	}
	else{
		k=0;
	}
	for(int i=0;i<strlen(a);i++)a1[i]=a[strlen(a)-1-i]-'0';
	for(int i=0;i<strlen(b);i++)b1[i]=b[strlen(b)-1-i]-'0';
	int ans[MAX+10];
	
	for(int i=0;i<strlen(a)-pana;i++){
		for(int j=0;j<strlen(b)-panb;j++){
		ans[i+j]+=a1[i]*b1[j];
		if(ans[i+j]>=10){
			ans[i+j+1]+=ans[i+j]/10;
			ans[i+j]%=10;
		}
		}
	}
	if(k){
		cout<<"-";
	}
	bool flag=true;
	for(int i=strlen(a)+strlen(b)-1-pana-panb;i>=0;i--){
		if(flag&&ans[i]==0){
			continue;
		}else{
			flag =false;
		}
		cout<<ans[i];
	}
	
} 
int main(){
cin>>a>>b;
if(strcmp(a,"0")==0||strcmp(b,"0")==0){
	cout<<0;
	return 0;
}
High_precision_multiplication();
return 0;

}

