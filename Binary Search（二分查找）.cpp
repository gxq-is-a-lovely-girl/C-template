int Binary Search(int a[],int n,int k){//nΪ���鳤��,kΪ���ҵ��� 
	int l=0,r=n+1;
	int y;//y��ʾ����������С�ڵ���k������� 
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

