#include<stdio.h>
void main(){
	int arr[5]={10,20,30,40,50},*ptr,i;
	ptr=arr;
	clrscr();
	for(i=0;i<5;i++){
	printf("%d\n",(*ptr+i));
	}
	}





