 #include<stdio.h>
 int main(){

int num;
printf("enter a num:");
scanf("%d",&num );
if(num>=10 && num<=50){
printf("within a range:");
}else{
printf("not in a range:");
}
return 0;
}