#include <stdio.h>

int main(){
	int c,n,ANGLE,angle;
	while(1){
	printf("How many corners? : ");   // ユーザーから角の数を入力
	c=scanf("%d",&n);
	if (c==EOF)break;    // 入力が終了（Ctrl+Zなど）ならループを抜ける
	if(n<3){   // 3未満の値は多角形の角の数として不正
	printf("\n");
	printf("This number is not correct.\n");  // エラーメッセージ表示
	printf("\n");
	continue;  // もう一度入力を促すためループの先頭へ戻る
	}
	ANGLE=180*(n-2);   // 多角形の内角の合計を計算
	angle=ANGLE/n;    // 1つの角の大きさを計算（正多角形を想定）
	printf("\n");
	printf("corners:%d\n",n);  // 角の数を表示
	printf("total angles:%d\n",ANGLE);　// 内角の合計を表示
	printf("angle per piece:%d\n",angle);　// 1つの角の大きさを表示
	printf("\n");
	}
	return 0;
}
