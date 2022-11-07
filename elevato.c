#include <stdio.h>
//Declaring variables

int route;
int floors=5;
int destination;
int current_floor=2;
int exit = 9;
char re_use = 'E';
char exiting = 'X';
char option;
int main(){
    char correct_destination = 'No';
    check_route();
    printf("\nThe elevator has arrived");
    while(correct_destination!='Yes'){
        printf("\nCurrent floor: %d", current_floor);
        if(route==1){printf("\nGoing up");}
        else if(route==2){printf("\nGoing down");}
        check_destination(destination);
        if (destination==exit){printf("\nChao!\n");break;}
        else{
            if(destination>floors || destination == current_floor){
                if(destination > floors){printf("\nFloor does not exist\n");}
                else{printf("\nChoose a destination\n");}
            }
            else{
                run_elevator();
                char correct_option = 'No';
                if(current_floor==destination){
                    printf("\nCurrent floor: %d", current_floor);
                    while(correct_option = 'No'){
                        printf("\nYou have arrived to your destination, \n Press X to exit. \n Press E to re-use\n ");
                        scanf("%s", &option);
                        if(option==re_use){
                            //The main function to re-start the process
                            main();
                            break;
                        }
                        else if(option==exiting){
                            //Exiting the elevator
                            printf("\nChao!\n");return 0;
                        }
                    }
                }
            }
        }
    }
}
int int_read;
void check_route(){
    char correct_route = 'No';
    int_read = 0;
    while (correct_route='No'){
        printf("\nCurrent floor: %d", current_floor);
        printf("\nEnter value for destination \n1. Up 2. Down\n");
        int_read = scanf("%d", &route);
        //Handling string inputs instead of integers
        while(int_read!=1){
            printf("\nEnter a right value.");
            scanf("%*[^\n]");
            printf("\nEnter value for destination \n1. Up 2. Down\n");
            int_read = scanf("%d", &route);
        }
        if (route == 1 || route==2){ break;}
        else{printf("\nChoose a correct destination\n");}
    }

}

void check_destination(){
    int_read=0;
    printf("\nChoose your destination Floor; \n 0, 1, 2, 3, 4, 5: \nPress 9 to exit\nDestination: ");
    int_read=scanf("%d", &destination);
    while(int_read!=1){
        printf("\nEnter a right floor.");
        scanf("%*[^\n]");
        printf("\nChoose your destination Floor; \n 0, 1, 2, 3, 4, 5: \nPress 9 to exit\nDestination: ");
        int_read = scanf("%d", &destination);
    }
}
void run_elevator(){
    if(route==1){
        if(destination<current_floor){printf("\nElevator going up, choose a correct floor.");}
        else{
            printf("Going up");
            for(current_floor;current_floor<destination ; current_floor++){
                printf("\nCurrent floor: %d", current_floor);
            }
        }
    }
    else if(route==2){
        if(destination>current_floor){printf("\nElevator going down, choose a correct floor.");}
        else{
            printf("Going down");
            for(current_floor;current_floor>destination ; current_floor--){
                printf("\nCurrent floor: %d", current_floor);
            }
        }
    }
}

