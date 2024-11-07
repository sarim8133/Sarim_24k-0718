#include <stdio.h>

int firstMove(int N) {
    if (N % 5 == 0) {
        return -1;
    }
    return N % 5;
}

int main() {
    int N;
    
	printf("Enter the number of matchsticks(N): ");
    scanf("%d", &N);
    
	int result = firstMove(N);
   
    if (result == -1) {
        printf("It's impossible for A to win.\n");
    } else {
        printf("A should pick %d on the first turn to win.\n",result);
    }
    
    return 0;
}
