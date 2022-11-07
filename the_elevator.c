//Part 1
/*The elevator start at the first floor, opens and allows only 10 people to enter.*/
#include <stdio.h>
//DECLARING VARIABLES
// THE BUILDING
int floors = 8;
int all_floors[]={1,2,3,4,5,6,7,8};
//Creating 2 elevators: 1 going up, one going down
int elev1_route; //Going up
int elev2_route; //Going down
int elev1_pos=1;
int elev2_pos = 8;
int elev1_weight = 0;
int elev2_weight = 0;
int elev1_final_des=8;
int elev2_final_des=1;
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
    elev_call();
}

//Checking the passenger route and choice for elevator
int int_read=0;
void check_route(){
    char correct_pos = 'No';
    while(correct_pos='No'){
        printf("\nFloors: 1, 2, 3, 4, 5, 6, 7, 8");
        printf("\nEnter your position floor: ");
        int_read = 0;
        int_read = scanf("%d", &pass_pos);
        while(int_read!=1){
            printf("\nEnter a right value.");
            scanf("%*[^\n]");
            printf("\nEnter your position floor: ");
            int_read = scanf("%d", &pass_pos);
        }
        int_read = 0;int floor_exists = 0;
        for (int i = 0; i <= sizeof(all_floors) / sizeof(int) ; i++) {
            if(pass_pos ==all_floors[i]){floor_exists=1; break;}
        }
        if(floor_exists==1){break;}
        else{printf("\nFloor does not exist\nChoose a correct floor");}
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

void elev_call(){
    //Check the closest elevator
    //Check elevator destination
    elev1_dest(); elev2_dest();
    int dis_elv1 = elev1_pos - pass_pos;
    int dis_elv2 = elev2_pos - pass_pos;
    if(dis_elv1<0){dis_elv1=dis_elv1/(-1);}
    if(dis_elv2<0){dis_elv2=dis_elv2/(-1);}
    printf("\n ELEV 1: %d - %d = ", elev1_pos,pass_pos);
    printf("\nDistance from elevator 1: %d", dis_elv1);
    printf("\nDistance from elevator 2: %d", dis_elv2);
    if(dis_elv1<dis_elv2){printf("\nElevator 1 is closer");}
    else if(dis_elv2<dis_elv1){printf("\nElevator 2 is closer");}
    else{printf("\nAll elevators are similar distance from you");}

}

void elev1_dest(){
    if(elev1_final_des>elev1_pos){
        printf("\nElevator 1 going up");
        elev1_route = 1;
    }
    else{printf("\nElevator 1 going down");elev1_route = 2;}
}
void elev2_dest(){
    if(elev2_final_des>elev2_pos){
        printf("\nElevator 2 going up");
        elev2_route = 1;
    }
    else{printf("\nElevator 2 going down");elev2_route = 2;}
}

void elev_goingup(){

}

void elev_goingdown(){

}
