#include<iostream>
#include<cstring>
#define MAX 10000
using namespace std;
char a[MAX],b[MAX];
void  High_precision_addition(){
	int a1[MAX]={0};int b1[MAX]={0};
	for(int i=0;i<strlen(a);i++)a1[i]=a[strlen(a)-i-1]-'0';
	for(int i=0;i<strlen(b);i++)b1[i]=b[strlen(b)-i-1]-'0';
	int maxlen=max(strlen(a),strlen(b));
	int ans[MAX+10]={0}; 
	int jin=0;
	for(int i=0;i<maxlen;i++){
		ans[i]=a1[i]+b1[i]+jin;
		if(ans[i]>=10){
			ans[i]%=10;
			jin=1;
		}else{
			jin=0;
		}
	}
	if(jin){
		cout<<jin;
	}
	for(int i=maxlen-1;i>=0;i--){
		cout<<ans[i];
	}
}
int main(){
	cin>>a>>b;
	High_precision_addition();
}
