#include <stdio.h>
int main() {
int rent_ground = 50000;
int rent_1_rf = 40000;
int rent_1 = 35000;
int rent_2_rf = 35000;
int rent_2 = 30000;

int rent_ground_total = rent_ground*8*3;
int rent_1_total = rent_1_rf *6+ rent_1*6;
int rent_2_total = rent_2_rf*6+rent_2*6;

printf("Total for ground floor :%d\n ", rent_ground_total);
printf("Total for 1st floor : %d\n ",rent_1_total);
printf("Total for 2nd floor : %d\n ",rent_2_total);
printf("Total for 3nd floor : %d\n ",rent_2_total);
printf("Total for 4nd floor : %d\n ",rent_2_total);
printf("Total for 5nd floor : %d\n ",rent_2_total);

return 0;

}