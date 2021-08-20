int Binary Search(int a[],int n,int k){//n为数组长度,k为查找的数 
	int l=0,r=n+1;
	int y;//y表示的是容器中小于等于k的最大数 
	while(l<=r){
		int mid=(r+l)/2;
		if(a[mid]<=k){
			y=mid;
			l=mid+1;
		}else{
			r=mid-1;
		}
	} 
	return y; 
}

