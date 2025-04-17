#include <stdio.h>
#include <math.h>
int main(){
	int n,i;
	double r1,r2,FV1,R2,PV1,PV2,TPV1,NeR2,TFV1=0.0,TR2=0.0,sub1;
	puts("");
	puts("Please choose 1 or 2");
	puts("1 : calculate PV");
	puts("2 : calculate NPV");
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
	if(n==2){puts("r = ");//利益と費用、その比較を求める
	scanf("%f",&r2);//利子率入力
	}
	return 0;
}

	