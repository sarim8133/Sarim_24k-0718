# include <stdio.h>
int main() {
	int code;
	int pin = 1234, count = 0;
	
	do {
		printf("Enter the code of your atm: ");
		scanf("%d", &code);
		if (code == pin){
			printf("Correct Pin!");
		else
			printf(“Wrong Pin,Try Again!”);
		}
	attempt++;
	}
	while(attempt<3);
	if (attempt>=3)
		printf("You Failed!");
return 0;	
}




