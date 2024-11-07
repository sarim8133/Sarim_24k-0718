#include <stdio.h>

int main() {
    int num,i, j;
     printf("Enter the number of slogans: ");
    scanf("%d", &num);
	char slogans[num][50];
    
	for (int i = 0; i < num; i++) {
        printf("Enter slogan %d(less than 50 word): ", i + 1);
        scanf(" %[^\n]s", slogans[i]);

}
    for (i = 0; i < num; i++) {
        int freq[256] = {0};
        
		for (j = 0; slogans[i][j] != '\0'; j++) {
            freq[slogans[i][j]]++;
        }
        
        printf("For \"%s\": {", slogans[i]);
        for (j = 0; slogans[i][j] != '\0'; j++) {
            if (freq[slogans[i][j]] > 0) {
                printf("'%c': %d, ", slogans[i][j], freq[slogans[i][j]]);
                freq[slogans[i][j]] = 0; 
            }
        }
        printf("}\n");
    }

    return 0;

}

