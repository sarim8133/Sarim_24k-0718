#include <stdio.h>
#define SIZE 5
int main (){
	int min1,min2,arr[SIZE],i=0,input;

printf("Enter 5 elements in the array(value must be < 9999):\n");	
	for(i = 0; i < SIZE; i++) {
    	printf("element-%d: ",i);
    	scanf("%d", &input);
    	
		while(input > 9999){
    	puts("Try Again");
		printf("element-%d: ",i);
    	scanf("%d", &input);	
		}
		arr[i]=input;
	}	

	if (arr[0]>arr[1]){
		min1=arr[1];
		min2=arr[0];
	}
	else{
		min1=arr[0];
		min2=arr[1];
	}	
		for(i=2;i< SIZE;i++){
			if(arr[i]<min1){
				min2 = min1;
				min1 = arr[i];
			}			
			else if(arr[i]<min2 && arr[i]>min1)
				min2 = arr[i];
		}
printf("The second smallest number in the array is: %d",min2);
return 0;
}

