#include <stdio.h>
#include <math.h>
#define EPSILON 0.0001

float fx (float x){
	return (7/3 - (cos(1 - x) + (1 - x)) * sqrt(2*x - x*x));
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
	}
	printf("The value of root : %f\n",m);
	printf("Number of Iterations : %d\n",q);
}

int main(){
	float a=0,b=2;
	printf("Secant Method\n");
	printf("Solving for equation : x^3-4x-9\n");
	secant(a,b);	
	return 0;
}