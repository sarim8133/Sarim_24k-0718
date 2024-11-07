#include <stdio.h>
#include <math.h>
#include <string.h>

int BinaryToDecimal(int number) {
    int decimal = 0, i = 0;
    while (number > 0) {
        int last = number % 10;
        decimal += last * pow(2, i);
        number = number / 10;
        i++;
    }
    return decimal;
}

int DecimalToBinary(int number) {
    int arr[100];
    int i = 0, j;
    while (number > 0) {
        arr[i] = number % 2;
        number = number / 2;
        i++;
    }
    printf("Binary: ");

    for (j = i - 1; j >= 0; j--)
        printf("%d", arr[j]);
    int num =0, mult =1;
      for (j = 0; j < i; j++) {  
        num += arr[j] * mult;
        mult *= 10;
    }
    return num ;
}

void DecimalToHexadecimal(int number) {
    char hexadecimal[26];
    int i = 0;
    while (number > 0) {
        int rem = number % 16;
        if (rem < 10)
            hexadecimal[i++] = rem + '0';
        else
            hexadecimal[i++] = rem + 'A' - 10;
        number = number / 16;
    }
    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hexadecimal[j]);
    printf("\n");
}

int HexadecimalToDecimal(char hexNumber[]){
    int decimal=0; 
    int i=0;
    int length = strlen(hexNumber);
    int j = 0;
        for(i=length-1;i>=0;i--){
            switch(hexNumber[i]){
                case('A'):
                    decimal +=  10*pow(16,j);
					j++;
                    break;
                case('B'):
                    decimal +=  11*pow(16,j);
                   j++;
                    break;
                case('C'):
                    decimal +=  12*pow(16,j);
                    j++;
                    break;
                case('D'):
                    decimal +=  13*pow(16,j);
                    j++;
                    break;
                case('E'):
                    decimal +=  14*pow(16,j);
                    j++;
                    break;
                case('F'):
                    decimal +=  15*pow(16,j);
                    j++;
                    break;
                default:
                    decimal += (hexNumber[i]-'0')  *pow(16,j);
                    j++;
                    break;
                }
            }
			return decimal;
    }
        
    

void BinaryToHexadecimal(int number) {
    int decimal = BinaryToDecimal(number);
    DecimalToHexadecimal(decimal);
}

void HexToBin(char hexNumber[]) {
    int decimal = HexadecimalToDecimal(hexNumber);
    DecimalToBinary(decimal);
}


int main() {
    int choice, number,num,i,valid=0;
    char hexNumber[26];
    printf("Numerical Conversions\n");
    printf("1. Binary To Decimal\n");
    printf("2. Decimal To Binary\n");
    printf("3. Decimal To Hexadecimal\n");
    printf("4. Hexadecimal To Decimal\n");
    printf("5. Binary To Hexadecimal\n");
    printf("6. Hexadecimal To Binary\n");
    printf("Any Other Input to Exit.\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);
	
	
    switch (choice) {
        case 1:
    	
		while (1) {
        printf("Enter a binary number to convert to decimal: ");
        scanf("%d", &number);

        if (number < 0) {
            printf("Invalid input! Number must be non-negative.\n");
            continue; 
        }

        num = number;
        int is_binary = 1;
        while (num > 0) {
            int digit = num % 10;
            if (digit != 0 && digit != 1) {
                is_binary = 0; 
                break;
            }
            num /= 10;
        }

        if (is_binary) {
            break; 
        } else {
            printf("Invalid input! Number must contain only 0s and 1s.\n");
        }
    }
		printf("Decimal: %d\n", BinaryToDecimal(number));
        break;
		
		case 2:
            printf("Enter number to convert from decimal to binary: ");
            scanf("%d", &number);
            while(number<0){
            	printf("Invald TryAgain: ");
            	scanf("%d", &number);
			}
            DecimalToBinary(number);
            break;
       
	    case 3:
            printf("Enter number to convert from decimal to Hexadecimal: ");
            scanf("%d", &number);
            while(number<0){
            	printf("Invald TryAgain: ");
            	scanf("%d", &number);
			}
            DecimalToHexadecimal(number);
            break;
        
		case 4:
            do {
        printf("Enter a hexadecimal number to convert to decimal: ");
        scanf("%s", hexNumber);

        valid = 1;  
        for (int i = 0; hexNumber[i] != '\0'; i++) {
            if (!((hexNumber[i] >= '0' && hexNumber[i] <= '9') || 
                  (hexNumber[i] >= 'a' && hexNumber[i] <= 'f') || 
                  (hexNumber[i] >= 'A' && hexNumber[i] <= 'F'))) {
                valid = 0; 
                break;
            }
        }

        if (!valid) {
            printf("Invalid input! Please enter a valid hexadecimal number.\n");
        }

    	} 
		while (!valid);
			printf("Decimal\n");
            printf("%d",HexadecimalToDecimal(hexNumber));
            break;
        
		case 5:
        while (1) {
        	printf("Enter a binary number to convert to Hexadecimal: ");
        	scanf("%d", &number);

        if (number < 0) {
            printf("Invalid input! Number must be non-negative.\n");
            continue; 
        }

        num = number;
        int is_binary = 1;
        while (num > 0) {
            int digit = num % 10;
            if (digit != 0 && digit != 1) {
                is_binary = 0; 
                break;
            }
            num /= 10;
        }

        if (is_binary) {
            break; 
        } 
		else {
            printf("Invalid input! Number must contain only 0s and 1s.\n");
        }
    	}
            BinaryToHexadecimal(number);
            break;
        
		case 6:
		
    do {
        printf("Enter a hexadecimal number to convert to binary: ");
        scanf("%s", hexNumber);

        valid = 1;  
        for (int i = 0; hexNumber[i] != '\0'; i++) {
            if (!((hexNumber[i] >= '0' && hexNumber[i] <= '9') || 
                  (hexNumber[i] >= 'a' && hexNumber[i] <= 'f') || 
                  (hexNumber[i] >= 'A' && hexNumber[i] <= 'F'))) {
                valid = 0; 
                break;
            }
        }

        if (!valid) {
            printf("Invalid input! Please enter a valid hexadecimal number.\n");
        }

    } 
	while (!valid); 
    HexToBin(hexNumber);
	break;	
        default:
            printf("Thank You!");
            break;
    }
    return 0;
}




