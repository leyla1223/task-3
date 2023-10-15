#include <stdio.h>
int main(){
	float cem=0;
	float eded[]={9,9,56,23,34,8};
	float say=sizeof(eded)/sizeof(eded[0]);
	for (int i=0;i<say;++i){
		cem=cem+eded[i];
	}
	float ededorta=cem/say;
	printf("%.2f",ededorta);
	return 0;
}
