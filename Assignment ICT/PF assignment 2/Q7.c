# include <stdio.h>
# include <string.h>
# include <time.h>
# include <stdlib.h>

void generate(char arr[6][5],int last[]){
	int i ,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			arr[i][j]= 'A'+ rand() % 26;
		}
	}
	for(j=0;j<4;j++){
			arr[5][j]= '0' + last[j];			
	}
	arr[5][4]= 'A'+rand()%26;
		
}
void printing(char arr[6][5]){
	int i,j;
	for(i=0;i<6;i++){
		for(j=0;j<5;j++){
			printf("%c ",arr[i][j]);
		}
		puts("");
	}
}
int search(char arr[6][5],char str[]){
	int i,j,k;
	int len = strlen(str);
	//horizontal
	for(i=0;i<6;i++){
		for(j=0; j<6-len ;j++){
			for(k=0;k < len;k++){
				if(arr[i][j+k] != str[k]){
					break;
				}
			}
			if(k==len){
				return 1;
			}
		}
	}
	//vertical
	for(i=0;i<7-len;i++){
		for(j=0;j<5;j++){
			for(k=0;k<len;k++){
				if(arr[i+k][j]!=str[k]){
					break;
				}
			}
			if(k==len){
				return 1;
			}
		}
	}
	return 0;
}
int main (){
	int last[4]={0,7,1,8};
	char arr[6][5];
	char str[50];
	int score = 0;
	
	srand(time(0));
	
	while(1){
		generate(arr,last);
		printing(arr);
		
		printf("Search Str= ");
		scanf("%s",str);
		strupr(str);
		if(strcmp(str,"END")==0){
			break;
		}
		if(search(arr,str)){
			score++;
			printf("%s is present Score %d\n",str,score);
		}
		else{
			score--;
			printf("%s is not present Score %d\n",str,score);
		}
		
	}
	return 0;
}
