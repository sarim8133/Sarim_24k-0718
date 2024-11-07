#include <stdio.h>
#include <time.h>

time_t convertToTimeT(int date[]) {
    struct tm temp = {0};
    temp.tm_mday = date[0];
    temp.tm_mon = date[1] - 1;     
    temp.tm_year = date[2] - 1900; 

    return mktime(&temp);
}

int calculateFine(int dueDate[], int returnDate[]) {
    time_t dueTime = convertToTimeT(dueDate);
    time_t returnTime = convertToTimeT(returnDate);

  
    double secondsDifference = difftime(returnTime, dueTime);
    int daysDifference = (int)(secondsDifference / (60 * 60 * 24));


    if (daysDifference > 0) {
        return daysDifference * 2; 
    } else {
        return 0; 
    }
}

int main() {
    int dueDate[3];
    int returnDate[3];
    for(int i=0;i<3;i++){
    	printf("Enter Due Date: ");
    	scanf("%d",&dueDate[i]);
	}
	for(int i=0;i<3;i++){
    	printf("Enter Return Date: ");
    	scanf("%d",&returnDate[i]);
	}

    int fine = calculateFine(dueDate, returnDate);

    printf("Total fine: $%d\n", fine);

    return 0;
}
