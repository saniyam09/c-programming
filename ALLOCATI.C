  #include<stdio.h>
  void main()
  {
	int *ptr=(int*)mallac(100*sizeof(int));
	//excessive allocation
	clrscr();
	if(ptr==NULL){
		printf("memory allocation failed\n");
  }else{
	   printf("memory allocation succeeded\n");
	   free(ptr);
	   }
	   }