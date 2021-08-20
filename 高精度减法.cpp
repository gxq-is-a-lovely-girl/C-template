#include<iostream>
#include<cstdio>
#include<cstring> 
#define MAX 100000
using namespace std;
char a[MAX];
char b[MAX];
void High_precision_subtraction(){
	int ans[MAX]={0};
	int a1[MAX]={0},b1[MAX]={0};
	for(int i=0;i<strlen(a);i++)a1[i]=a[strlen(a)-i-1]-'0';
	for(int i=0;i<strlen(b);i++)b1[i]=b[strlen(b)-i-1]-'0';

	if(strlen(a)<strlen(b)||strlen(a)==strlen(b)&&strcmp(a,b)<0){
		swap(a1,b1);
	    cout<<"-";
	}
	if(strcmp(a,b)==0){
		cout<<0;
		return 0;
	}
	int maxlen=max(strlen(a),strlen(b));
	int jie=0;
	for(int i=0;i<maxlen;i++){
		if(a1[i]<b1[i]){
			a1[i]+=10;
			a1[i+1]--;
		}
			ans[i]=a1[i]-b1[i];
	}
	bool flag=true;
	for(int i=maxlen-1;i>=0;i--){
		if(ans[i]==0&&flag){
			continue;
		}else{
			flag =0;
		}
	cout<<ans[i];	
	}
}
int main(){
	cin>>a>>b;
	High_precision_subtraction();
return 0;
}
