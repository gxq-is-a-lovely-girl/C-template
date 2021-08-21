long long n,m,q;//q为求和次数 
long long a[10000][10000]={0};
long long b[10000][10000]={0};
void  Prefix_and_two_dimensional(){
	cin>>n>>m>>q;
	for(int i=1;i<=n;i++){
	 	for(int j=1;j<=m;j++){
	 		cin>>a[i][j];
	 		b[i][j]=b[i-1][j]+b[i][j-1]-b[i-1][j-1]+a[i][j];
		}
	}
	 for(int i=1;i<=q;i++){
	 	int x1,y1,x2,y2;
		 cin>>x1>>y1>>x2>>y2;
		 cout<<b[x2][y2]-b[x1-1][y2]-b[x2][y1-1]+b[x1-1][y1-1]<<endl; 
	 }
}
