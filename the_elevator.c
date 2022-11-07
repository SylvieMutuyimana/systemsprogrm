//Part 1
/*The elevator start at the first floor, opens and allows only 10 people to enter.*/
#include <stdio.h>

//DECLARING VARIABLES
// THE BUILDING
int floors = 8;
//Creating 2 elevators: 1 going up, one going down
int elev1;
int elev2;
int elev1_pos=1;
int elev2_pos = 8;
int elev1_weight = 0;
int elev2_weight = 0;
//Passengers
int pass_pos;
int pass_dest;
int elev_choice;
int passfloors[];
int passdests[];
//The main function
int main(){
    //checking the route and passenger choice for elevator
    check_route();
}
int int_read=0;
void check_route(){
    char correct_pos = 'No';
    while(correct_pos=='No'){
        printf("\nEnter your position floor: ");
        int_read = 0;
        int_read = scanf("%d", &pass_pos);
        while(int_read!=1){
            printf("\nEnter a right value.");
            scanf("%*[^\n]");
            printf("\nEnter your position floor: ");
            int_read = scanf("%d", &pass_pos);
        }
        int_read = 0;
        if ( 8>= pass_pos >=1 ){ break;}
        else{printf("\nChoose a correct floor\n");}
    }
    char correct_route = 'No';
    while (correct_route='No'){
        printf("\nEnter value for destination \n1. Up 2. Down\n");
        int_read = 0;
        int_read = scanf("%d", &elev_choice);
        //Handling string inputs instead of integers
        while(int_read!=1){
            printf("\nEnter a right value.");
            scanf("%*[^\n]");
            printf("\nEnter value for destination \n1. Up 2. Down\n");
            int_read = scanf("%d", &elev_choice);
        }
        if (elev_choice == 1 || elev_choice==2){ break;}
        else{printf("\nChoose a correct destination\n");}
    }
}

