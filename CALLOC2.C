  #include<stdio.h>
  void main()
  {
	int *arr=(int*)calloc(100*sizeof(int));

	clrscr();
	if(arr==NULL){
		printf("memory allocation failed\n");
  }else{
	   printf("memory allocation succeeded\n");
	   free(arr);
	   }
	   }