bool b[n];//����ȫ�������� //trueΪ������false�Ǻ��� 
void is_prime(){
	memset(b,true,sizeof(b));
	b[1]=0;
	for(int i=2;i<=n;i++){
		if(prime[i]){
			for(int j=i*2;i*j<=n;j++){
				b[i*j]=false;
			}
		}
	}
} 
