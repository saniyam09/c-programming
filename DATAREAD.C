#include<stdio.h>
int main()
{
FILE*file;
char data [500];

   file =fopen ("outout.txt","r");
   if(file==NULL){
       printf("error opening file !\n");
	return 1;
}
//fprintf(file,"%s",data);
//fclose(file);
	while(fgets(data,500,file)!=NULL){
	printf("%s",data);
	}
	fclose(file);

//	printf("data written to file successfully\n");
	return 0;
}