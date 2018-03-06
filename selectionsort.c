#include<stdio.h>
#include<stdlib.h>

int get_rand(void){
	int r = 0+rand()%100;
	return r;
}
int main(int n,char* v[]){
	int value = 0;
	switch(n){
		case 1:
		printf("Argument must be!\n");
		break;
		case 2:
		value = 1;
		break;
		default:
		printf("Only one argument!\n");
		break;
	}
	if(value==1){
		int lenght = atoi(v[1]);
		int integ[lenght-1];
		for(int i = 0;i<lenght;i++){
			integ[i]=get_rand();
		}
		//Algorithm
		for(int i = 0;i<lenght;i++){
			for(int j = i;j<lenght;j++){
				if(integ[i]>integ[j]){
					int tm = integ[i];
					integ[i]=integ[j];
					integ[j]=tm;
				}
			}
		}
		//checking
		for(int i = 0;i<lenght;i++){
			printf("%d\n", integ[i]);
		}
	}
}