bool b[n];//假设全都是质数 //true为质数，false是合数 
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
