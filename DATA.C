#include<stdio.h>
int main()
{
FILE*file;
char data [500];
       printf ("enter data to write the file \n");
       gets(data);
   file =fopen ("SANIYA M.txt","w");
   if(file==NULL){
       printf("error opening file \n");
	return 1;
}
	fprintf(file,"%s\n",data);

	fclose(file);

	printf("data written to file successfully\n");
	return 0;
}