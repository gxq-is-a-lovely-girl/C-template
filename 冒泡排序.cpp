void Bubble sorting(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-1-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}
