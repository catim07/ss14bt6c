#include<stdio.h>
#include<string.h>
int main(){
	char string[]="cuong le ca tim",count=0;
	int size=strlen(string),n;
	printf("%s\n",string);
	printf("moi ban dem so chu cai ben tren: ");
	scanf("%d",&n);
	for(int i=0;i<size;i++){
		if('a'<=string[i]&&'z'>=string[i]||'A'<=string[i]&&'Z'>=string[i]){
			count+=1;
		}
	}
	if(count==n){
		printf("ban dem dung");
	}else{
		printf("ban dem sai");
	}
	return 0;
}
