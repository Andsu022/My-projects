#include<stdio.h>
	int main(){
		float d,p,s,t;
		
		d=1000;
		p=d+0.01*d;
		s=p+0.01*p;
		t=s+0.01*s;
		
		printf("valor da conta = %.2f\n", t);
		
		return 0;
	}
