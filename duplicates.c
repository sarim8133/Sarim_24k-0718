# include <stdio.h>
int main (){
	int i,n;

	
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	
	int arr[n],count[n];
	
	for(i=0;i<n;i++){
		printf("Enter the %d element: ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		count[arr[i]]++;
	}	
	int found =0;
	puts("duplicates:");
	for(i=0;i<n;i++){
		if(count[arr[i]]>1){
			printf(" %d ",arr[i]);
			found =1;
			count[arr[i]]=0;
			
		}		
}
	if (found==0)
		printf("none");
	
}
