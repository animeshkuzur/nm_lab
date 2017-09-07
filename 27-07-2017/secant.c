#include <stdio.h>
#define EPSILON 0.0001

float fx (float x){
	return ((x*x*x)-(4*x)-9);
}

void secant (float a,float b){
	float m=0;int q=0;float e=1;
	if(fx(a)*fx(b)==0){
		printf("Wrong Intervals");
	}
	while(e>=EPSILON){
		q += 1;
		m = (a*fx(b)-b*fx(a))/(fx(b)-fx(a));
		if(fx(m) == 0)
			break;
		a=b;
		b=m;
		if((b-a)<0)
			e = a-b;
		else
			e=b-a;
		//printf("e=%f\n",e);
		//printf("b-a=%f",abs(b-a));
		
	}
	printf("The value of root : %f\n",m);
	//printf("The solution : %f\n",fx(inter));
	printf("Number of Iterations : %d\n",q);
}

int main(){
	float a=2,b=3;
	printf("Secant Method\n");
	printf("Solving for equation : x^3-4x-9\n");
	secant(a,b);	
	return 0;
}