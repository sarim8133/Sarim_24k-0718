#include <stdio.h>

int main() {
    int i, j, k,size;
	printf("Enter odd(1-19): ");
	scanf("%d",&size);
	while(size<1 || size>19){
		printf("Enter odd(1-19): ");
		scanf("%d",&size);
	}
    for (i = 1; i <= size; i++) { 
        for (j =i; j < size; j++) { 
            printf("  ");
        }
        for (k = 1; k <= (2*i - 1); k++) { 
            printf("* ");
        }
        printf("\n");
}
    for (i = size-1; i >=1; i--) { 
        for (j = size;j>i;j--) { 
            printf("  ");
        }
        for (k = 1; k <=2*i-1 ; k++) {  
            printf("* ");		
        }
        printf("\n");
    }

    return 0;
}


