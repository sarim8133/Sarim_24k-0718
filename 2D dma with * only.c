# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(){
	int i,j,k;
	int r1,c1,r2,c2;
	int *mat1;
	int *mat2;
	int *result;
	printf("Enter row of Mat1: ");
	scanf("%d",&r1);
	printf("Enter col of Mat1: ");
	scanf("%d",&c1);
	printf("Enter row of Mat2: ");
	scanf("%d",&r2);
	printf("Enter col of Mat2: ");
	scanf("%d",&c2);
	
	mat1 = (int*)malloc(r1*c1*sizeof(int));
	mat2 = (int*)malloc(r2*c2*sizeof(int));
	result =(int*)malloc(r1*c2*sizeof(int));
	if(c1 == r2){
		printf("Valid\n");
	}
	else{
		printf("Invalid\n");
		return 1;
	}
	printf("Enter Elements of mat1: \n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			scanf("%d",(mat1+ i * c1 + j));
		}
	}
	printf("Enter Elements of mat2: \n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			scanf("%d",(mat2+ i * c2 + j));
		}
	}
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			*(result + i* c2+ j) = 0;
			for(k =0;k<c1;k++){
				*(result + i* c2+ j) += *(mat1 +i*c1+k) * *(mat2+k*c2+j);
			}
		}
	}
	printf("Resultant: \n");
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("%d ",*(result + i * c2 +j));	
		}
		puts("");
}
return 0;
}
