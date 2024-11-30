#include<stdio.h>
int main ()
{
	FILE *file;
	char data[500];
	int lines =0;
	char ch;

	printf("enter a line to append :\n");
	gets(data);

	file=fopen("output1.txt","a");
	if(file==NULL){
		printf("error opening file!\n");
		return 1;
	}

	 //printf(file,"\n%s",data);
	 //fclose(file);
	 while((ch=fgets(file))!=EOF){
	   if(ch=="\n");
	   lines++;
	   }
	 }
	 fclose(file);

	 printf("total number of lines :%d\n",lines + 1);
	 return 0:
	 }

