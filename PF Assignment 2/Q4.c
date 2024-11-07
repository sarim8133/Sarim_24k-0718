# include <stdio.h>
# include <string.h>

void anagram(char array[][10], int n);
int main() {
    char transaction[20][10];
    int n = 0;
    printf("Enter the number of transactions: ");
    scanf("%d", &n); 
    for (int i = 0; i < n; i++) {
        printf("Enter the word(Less Than 10 Letters): ");
        scanf("%s", transaction[i]);
    }

    anagram(transaction, n);
    return 0;
}

void anagram(char array[][10],int n){

	int duplicate[20]={0};
	char temp[10];
	int j =0;
	char sorted1[10], sorted2[10];
	printf("[");
	
	for(int i=0;i<n;i++){
		if (duplicate[i]==0){
			printf("['%s'",array[i]);
			duplicate[i]=1;	
		
		for(j=i+1;j<n;j++){
			if (duplicate[j]==0){
				
				strcpy(temp,array[i]);
				strcpy(sorted1,temp);
				strcpy(sorted2,array[j]);
				
				qsort(sorted1,strlen(sorted1),sizeof(char),strcmp);
				qsort(sorted2,strlen(sorted2),sizeof(char),strcmp);
				
				if(strcmp(sorted1,sorted2)==0){
					printf(",'%s'",array[j]);
					duplicate[j]=1;
				}
			}	
		}
		printf("],");
	}
	}
	printf("]")	;
}
	
