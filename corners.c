#include <stdio.h>

int main(){
	int c,n,ANGLE,angle;
	while(1){
	printf("How many corners? : ");
	c=scanf("%d",&n);
	if (c==EOF)break;
	if(n<3){
	printf("\n");
	printf("This number is not correct.\n");
	printf("\n");
	continue;
	}
	ANGLE=180*(n-2);
	angle=ANGLE/n;
	printf("\n");
	printf("corners:%d\n",n);
	printf("total angles:%d\n",ANGLE);
	printf("angle per piece:%d\n",angle);
	printf("\n");
	}
	return 0;
}