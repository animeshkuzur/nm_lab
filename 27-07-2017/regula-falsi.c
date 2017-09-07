#include <stdio.h>
#define EPSILON 0.0001

float fx(float x){
	return ((x*x*x)-(4*x)-9);
}

void regula_falsi(float a,float b){
	float m=1;int q=0;float temp=0;float e=1;
	if(fx(a)*fx(b)==0){
		printf("wrong intervals");
	}
	while(e >= EPSILON){
		q += 1;
		temp = m;
		m = (a*fx(b)-b*fx(a))/(fx(b)-fx(a));
		if(fx(m) == 0){
			break;
		}
		else if(fx(m)<0){
			a=m;
		}
		else{
			b=m;
		}
		if(temp-m<0)
			e=m-temp;
		else
			e=temp-m;
		//printf("b-a=%f\na-b=%f\n",b-a,a-b);
	}
	printf("The value of root : %f\n",m);
	printf("Number of Iterations : %d\n",q);
	
}

int main(){
	float a=2,b=3;
	printf("Regula-Falsi Method\n");
	printf("Solving for equation : x^3-4x-9\n");
	regula_falsi(a,b);	
	return 0;
}