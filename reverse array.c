#include <stdio.h>
int main(){
    int n[] = {1,2,3,4,5};
    int temp;
    for(int i = 0;i<3;i++){
        temp = n[i];
        n[i] = n[4 - i];
        n[4 - i] = temp;
    }
    for(int i = 0;i<5;i++){
        printf("%d ",n[i]);
    }
    return 0;
}
