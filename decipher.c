#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char true_pass[20],pass[20],c,d,choose[10],choose1[10],choose2[10];
	strcpy(true_pass,"cyber_security");
	strcpy(choose1,"show");
	strcpy(choose2,"write");
	printf("\nif you can decipher,information will showed.\n");
	printf("\nshow : show cryptography\nwrite : write password\n");
	while(1){
		printf("\nYOU : ");
		d=scanf("%s",choose);
		if (d==EOF){
			printf("\nyou canceled\n");
			break;
		}
		if(strcmp(choose,choose1)==0){
			printf("\ncryptography : FBEHU_VHFXULWB\n");
		}
		if(strcmp(choose,choose2)==0){
			while(1){
			printf("\npassword : ");
			c=scanf("%19s",pass);
		if(strcmp(pass, true_pass) == 0){
			printf("your password is correct\n");
			printf("secret information is GongMear\n");
		exit( 0 );
	}
		if (c==EOF){
			printf("\nyou canceled\n");
			printf("\nif you can decipher,information will showed.\n");
			printf("\nshow : show cryptography\nwrite : write password\n");
			break;
		}
		if(strcmp(pass, true_pass) != 0){
			printf("this is not correct.\n");
		}
		
	}
}
	}
	return 0;
}
