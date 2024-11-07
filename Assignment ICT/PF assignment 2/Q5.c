#include <stdio.h>

void input(int *count, int arr[]){
    int i;
    
    for (i = 0; i < *count; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void horizontal(int count, int arr[]){
    int i, j;
    printf("Horizontal Histogram\n");
    for (i = 0; i < count; i++) {
        printf("Value %d: ", arr[i]);
        for (j = 0; j < arr[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void vertical(int count, int arr[]){
    int i, j;
    int max = 0;
    for (i = 0; i < count; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    printf("Vertical Histogram\n");
   
    for (j = max; j > 0; j--) {
        for (i = 0; i < count; i++) {
            if (arr[i] >= j) {
                printf(" * ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    for(i=0;i < count ;i++){
    	printf("%d   ",arr[i]);
	}
}

int main(){
    int count;
    
    do {
        printf("Count: ");
        scanf("%d",&count);
    } while (count <= 0);

    int arr[count];

    input(&count, arr);
    horizontal(count, arr);
    vertical(count, arr);
    
    return 0;
}
