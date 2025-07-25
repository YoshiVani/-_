/*
 * 実行方法（Windows のコマンドプロンプトの場合）：
 *   gcc decipher.c -o 任意の実行ファイル名.exe 
 *   任意の実行ファイル名.exe 
 *
 * ※ 詳細な環境や補足情報は README.md をご参照ください。 
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char true_pass[20],pass[20],c,d,choose[10],choose1[10],choose2[10];
	strcpy(true_pass,"cyber_security"); // 正しいパスワードを設定
	strcpy(choose1,"show"); // 「show」コマンド用文字列
	strcpy(choose2,"write"); // 「write」コマンド用文字列
	printf("\nif you can decipher,information will showed.\n");  // 使い方の説明
	printf("\nshow : show cryptography\nwrite : write password\n");
	while(1){
		printf("\nYOU : ");
		d=scanf("%s",choose); // コマンド入力受付
		if (d==EOF){
			printf("\nyou canceled\n"); // 入力キャンセル時のメッセージ
			break;
		}
		if(strcmp(choose,choose1)==0){
			printf("\ncryptography : FBEHU_VHFXULWB\n"); // 暗号表示
		}
		if(strcmp(choose,choose2)==0){
			while(1){
			printf("\npassword : ");
			c=scanf("%19s",pass); // パスワード入力受付
		if(strcmp(pass, true_pass) == 0){
			printf("your password is correct\n");  // 正解メッセージ
			printf("secret information is GongMear\n"); // 秘密情報表示
		exit( 0 );
	}
		if (c==EOF){
			printf("\nyou canceled\n"); // 入力キャンセル時のメッセージ
			printf("\nif you can decipher,information will showed.\n");
			printf("\nshow : show cryptography\nwrite : write password\n");
			break;
		}
		if(strcmp(pass, true_pass) != 0){
			printf("this is not correct.\n"); // 間違いメッセージ
		}
		
	}
}
	}
	return 0;
}
