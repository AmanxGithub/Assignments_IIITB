#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

#define size 100

int main(){
	
	char buff[size];
	char c;
	int i=0;
	int fd = open("abc_3.c",O_RDONLY);
	while(1){
		int rd = getLine(fd,buff,100);
		printf("%s\n",buff);
		//printf("%c",c);
		/*if(rd<=0){
			break;
		}	
		else if(c=='\n'){
			buff[i]='\0';
			
			i=0;
		}
		else{
			buff[i++]=c;
		}*/	
	}

	close(fd);
	return 0;
}


