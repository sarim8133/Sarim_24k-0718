#include <stdio.h>

int main() {
    int i,j,k;
    for(i=1;i<=7;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(k=1;k<=8-i;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
    for(i=2;i<=7;i++){
        for(j=1;j<=8-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}
/* 1 2 3 4 5 6 7 
  1 2 3 4 5 6 
   1 2 3 4 5 
    1 2 3 4 
     1 2 3 
      1 2 
       1 
      1 2 
     1 2 3 
    1 2 3 4 
   1 2 3 4 5 
  1 2 3 4 5 6 
 1 2 3 4 5 6 7 */
