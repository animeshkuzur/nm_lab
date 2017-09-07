#include <stdio.h>

int main(){
	float a[10][10], d[10], x[10], y[10];
    int n=5, m=0, i=0, j=0;

    printf("The size of the matrix: %d",n);
    //scanf("%d",&n);

    for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    		printf("Value at a[%d][%d]: ",i,j);
    		scanf("%f",&a[i][j]);
    	}
    }
    a[0][0] = 1;	a[0][1] = -0.5;	a[0][2] = 0;	a[0][3] = 0;	a[0][4] = 0;
    a[1][0] = -0.5;	a[1][1] = 1;	a[1][2] = -0.5;	a[1][3] = 0;	a[1][4] = 0;
    a[2][0] = 0;	a[2][1] = -0.5;	a[2][2] = 1;	a[2][3] = -0.5;	a[2][4] = 0;
    a[3][0] = 0;	a[3][1] = 0;	a[3][2] = -0.5;	a[3][3] = 1;	a[3][4] = -0.5;
    a[4][0] = 0;	a[4][1] = 0;	a[4][2] = 0;	a[4][3] = -0.5;	a[4][4] = 1;

    printf("Enter Values to the right side of equation\n");
    for(i=0;i<n;i++){
    	printf("Values at d[%d][1]: ",i);
    	scanf("%f",&d[i]);
    }

    printf("Enter initial values of x\n");
    for(i=0;i<n;i++){
    	printf("Values at x[%d]: ",i);
    	scanf("%f",&x[i]);
    }

    printf("Enter the number of Iterations: ");
    scanf("%d",&m);

    while (m > 0){
        for (i = 0; i < n; i++){
            y[i] = (d[i] / a[i][i]);
            for (j = 0; j < n; j++){
	            if (j == i)
	                continue;
	            y[i] = y[i] - ((a[i][j] / a[i][i]) * x[j]);
                x[i] = y[i];
            }
            printf("x%d= %f\n",i,y[i]);
        }
        printf("\n");
        m--;
    }
	return 0;
}