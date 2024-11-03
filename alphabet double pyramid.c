#include <stdio.h>

int main() {
    int i,j,k;
    for(i=1;i<=7;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(k='A';k<='H'-i;k++){
            printf("%c ",k);
        }
        printf("\n");
    }
    for(i=1;i<7;i++){
        for(j=1;j<=7-i;j++){
            printf(" ");
        }
        for(k='A';k<='A'+i;k++){
            printf("%c ",k);
        }
        printf("\n");
    }
    return 0;
}
/* A B C D E F G 
  A B C D E F 
   A B C D E 
    A B C D 
     A B C 
      A B 
       A 
      A B 
     A B C 
    A B C D 
   A B C D E 
  A B C D E F 
 A B C D E F G */
