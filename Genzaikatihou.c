#include <stdio.h>
#include <math.h>
int main(){
	int n,i;
	double r1,FV1,PV1,PV2,TPV1,TFV1=0.0,sub1;
	puts("");
	puts("Please choose 1");
	printf("\nYou : ");
	scanf("%d",&n);
	if (n==1){
	puts("");
	puts("Type in rate");
	printf("r = ");
	scanf("%lf",&r1);
	puts("");
	puts("Type in Future Value (ctcl + C : finish typing)");//収益入力
	for(i=0;;i++){
	printf("%d years later : FV =  ",i);
	if(scanf("%lf", &FV1) == EOF)break;
	TFV1 += FV1;
	TPV1 += FV1/pow(1+r1,i);
	PV1 = FV1/pow(1+r1,i);
	sub1 = TFV1-TPV1;
	puts("");
	printf("PV : %lf , Total PV : %lf",PV1,TPV1);
	puts("");
	printf("Total FV : %lf",TFV1);
	puts("");
	printf("Total FV - Total PV : %lf",sub1);
	puts("");
	puts("");
	printf("~~~~~~~~~~~~~~~~~~~~");
	puts("");
	}
}
	return 0;
}

	
