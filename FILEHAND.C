#include<stdio.h>

int main ()
{
	FILE *file;
	//char data[500];
	int lines =0;
	char ch;
	 clrscr();
	//printf("enter a line to append :\n");
	//gets(data);

	file=fopen("C:\\TURBOC3\\BIN\\output.txt","rt");
	if(file==NULL){
		printf("error opening file!\n");
		return 1;
	}

	 //printf(file,"\n%s",data);
	 //fclose(file);
	 while((ch=fgetc(file))!=EOF){
	 putchar(ch);
	   if(ch=='\n'){
	   lines++;
	   }
	   printf("newline found current count : %d\n",lines);

	 }
	 fclose(file);

	 printf("total number of lines : %d\n",lines + 1);
	 return 0;
	 }



