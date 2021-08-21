int n;
int a[100000]={0};
int visit[100000]={0};
void Prefix_and(){
	for(int i=1;i<=n;i++){
		visit[i]+=a[i];
		visit[i+1]+=visit[i];
	}
	for(int i=1;i<=m;i++){//m为求和次数 
		int  l,r;
		cin>>l>>r;
		cout<<visit[r]-l[l-1]<<endl;
	}
}

