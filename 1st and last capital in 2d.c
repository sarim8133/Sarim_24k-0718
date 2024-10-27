/*In Microsoft Word “Shift+F3” short cut key is used to change different forms of sentence, like if you select a
sentence “Pakistan is my country” and press Shift+F3 then it first converts it into “Pakistan Is My Country”,
means capitalizing each word’s first character.
You are required to write a code of a C function toggleCases( ) that takes one character array [string] as
parameter and converts first and last alphabet of each word in that string into capital.
For example if your function receives:
I have a passion to become programmer.
Then it should convert it in following form:
I HavE A PassioN TO BecomE ProgrammeR.*/
#include <stdio.h>
#include <string.h>

void toggleCases(char arr[][25], int num) {
    int i, j;
    for (i = 0; i < num; i++) {
        int len = strlen(arr[i]);  
        if (arr[i][0] == '.' || arr[i][0] == ',' || arr[i][0] == '!' || arr[i][0] == '?') {
        if (arr[i][1] >= 'a' && arr[i][1] <= 'z') {
            arr[i][1] = arr[i][1] -32;
        }
    }
        else{
        	if (arr[i][0] >= 'a' && arr[i][0] <= 'z') {
            arr[i][0] = arr[i][0] -32;
		}
}
        if (arr[i][len - 1] == '.' || arr[i][len - 1] == ',' || arr[i][len - 1] == '!' || arr[i][len - 1] == '?') {
            if (arr[i][len - 2] >= 'a' && arr[i][len - 2] <= 'z') {
                arr[i][len - 2] = arr[i][len - 2] - 32;
            }
        } else {
            if (arr[i][len - 1] >= 'a' && arr[i][len - 1] <= 'z') {
                arr[i][len - 1] = arr[i][len - 1] - 32;
            }
        }
}

    for (i = 0; i < num; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter the number of words: ");
    scanf("%d", &num);

    char arr[num][25]; 

    printf("Enter the words:");
    for (int i = 0; i < num; i++) {
        scanf("%s", arr[i]);  
    }

    toggleCases(arr, num);  
    return 0;
}
