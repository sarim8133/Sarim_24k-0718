#include <stdio.h>
#include <string.h>

void compress_word(char* word, char* compressed_word, int* removed_count);
void counter(char words[][50], int num_words, char compressed_words[][20], int* total_removed);

int main() {
    int num,i, j;
     printf("Enter the number of words: ");
    scanf("%d", &num);
	char words[num][50];
    
	for (int i = 0; i < num; i++) {
        printf("Enter word number %d: ", i + 1);
        scanf(" %[^\n]s", words[i]);
    }
    char compressed_words[num][20];
    int total_removed;
    
    counter(words, num, compressed_words, &total_removed);
    
    printf("Compressed words:[");
    for (int i = 0; i < num; i++) {
        printf("\"%s\",", compressed_words[i]);
    }
    printf("]\n");
    printf("Characters removed: %d\n", total_removed);
    
    return 0;
}

void compress_word(char* word, char* compressed_word, int* removed_count) {
    int len = strlen(word);
    int index = 0;  
    *removed_count = 0; 
    
    for (int i = 0; i < len; i++) {
         if (i == 0 || word[i] != word[i-1]) {
            compressed_word[index++] = word[i];
        } else {
            (*removed_count)++;  
        }
    }
    compressed_word[index] = '\0';  
}

void counter(char words[][50], int num_words, char compressed_words[][20], int* total_removed) {
    *total_removed = 0; 
    
    for (int i = 0; i < num_words; i++) {
        int removed_count = 0;
        compress_word(words[i], compressed_words[i], &removed_count);
        *total_removed += removed_count;  
    }
}


