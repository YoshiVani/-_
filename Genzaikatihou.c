#include <stdio.h>
#include <math.h>
int main(){
	int n,i;
	double r1,FV1,PV1,PV2,TPV1,TFV1=0.0,sub1;

/*メニュー表示*/
	puts("");
	puts("Please choose 1"); //// 1を選択するとPV計算プログラム開始
	printf("\nYou : ");
	scanf("%d",&n);
	if (n==1){
	puts("");
	puts("Type in rate"); // 割引率入力
	printf("r = ");
	scanf("%lf",&r1);
	puts("");
	puts("Type in Future Value (ctcl + C : finish typing)");// 将来価値を入力（Ctrl + Cで終了）
	for(i=0;;i++){
	printf("%d years later : FV =  ",i);　// 「i年後の将来価値」
	if(scanf("%lf", &FV1) == EOF)break;　// 入力終了判定（Ctrl + C）
            TFV1 += FV1;    // 将来価値の合計
            PV1 = FV1/pow(1+r1,i);   // 割引現在価値（単年分）
            TPV1 += PV1;  // 割引現在価値の合計
            sub1 = TFV1 - TPV1;   // 将来価値合計 - 現在価値合計の差
            puts("");
            printf("PV : %lf , Total PV : %lf", PV1, TPV1);    // 現在価値（単年分）と合計
            puts("");
            printf("Total FV : %lf", TFV1);  // 将来価値合計
            puts("");
            printf("Total FV - Total PV : %lf", sub1);  // 差分表示
            puts("");
            puts("");
            printf("~~~~~~~~~~~~~~~~~~~~");
            puts("");
	}
}
	return 0;
}

	
