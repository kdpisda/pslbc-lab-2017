#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Defining the MAX size of set
#define MAX 100

// Defining a macro for getting the length of array
#define LENGTH(x) (int) (sizeof(x) / sizeof(*x))

// Declaring SETS as global
int setOne[2][MAX], setTwo[2][MAX];

/* Function for taking input
|  The function returns the array entered to the user
| */
void inputSet(int inputArray[2][MAX]){
    int tempArray[MAX];
    int temp, counter = 0;
    int length;
    bool foundFlag = false;

    // Taking the calue of length form the user
    scanf("%d", &length);

    // Taking input from the user
    for(int i = 0; i < length; i++){
        foundFlag = false;

        // Initialising the input in temp so that first
        // we will check whether it exists or not in 
        // the current set.
        scanf("%d", &temp);

        // We will check only if it is not the first element
        if(i != 0){
            for(int j = 0; j < counter; j++){
                if( tempArray[j] == temp){
                    foundFlag = true;
                    break;
                }
            }
            if(foundFlag == false){
                tempArray[counter] = temp;
                counter++;
            }
        }else{
            tempArray[counter] = temp;
            counter++;
        }
    }

    // Putting the value of resultant SET one by one
    for(int i = 0; i < counter; i++){
        inputArray[0][i] = tempArray[i];
    }

    // Every [1][0] of SET would hold the length of the SET
    inputArray[1][0] = counter;
}

// This functiono will be used for performing UNION operation
void setUnion(){
    // Max size can be double of individuals
    int unionSet[200];
    int tempSetOne[MAX], tempSetTwo[MAX];
    int counterSetOne, counterSetTwo, counterUnion = 0, i = 0, j = 0;
    int found = 0;
    
    counterSetOne = setOne[1][0];
    counterSetTwo = setTwo[1][0];
    
    // Initialising both the arrays
    for(i = 0; i < counterSetOne; i++){
        tempSetOne[i] = setOne[0][i];
    }

    for(i = 0; i < counterSetTwo; i++){
        tempSetTwo[i] = setTwo[0][i];
    }

    counterUnion = 0;

    for(i = 0; i < counterSetOne; i++){
        found = 0;
        for(j = 0; j < counterSetTwo; j++){

            // Checking whether we have the element available or not
            if(tempSetTwo[j] == 0){
                continue;
            }else{
                if(tempSetOne[i] == tempSetTwo[j]){
                    // Marking this element so that it cannot be used again
                    tempSetTwo[j] = 0;
                    unionSet[counterUnion] = tempSetOne[i];
                    counterUnion++;
                    found = 1;
                    break;
                }
            }
        }
        if (found == 0){
            unionSet[counterUnion] = tempSetOne[i];
            counterUnion++;
        }
    }

    /* It means the traversal from first SET is completed
    || So now we need to add remaining elements from second SET
    || Since we have marked the matched elements 0.
    || If it is not equal to 0 then we will append this in unionSet
    */
    for(j = 0; j < counterSetTwo; j++){
        if(tempSetTwo[j] == 0){
            continue;
        }else{
            unionSet[counterUnion] = tempSetTwo[j];
            counterUnion++;
        }
    }
    
    // Printing result of setOne UNION setTwo
    printf("\nLength of setOne UNION setTwo %d\n",counterUnion);
    printf("Set Formed: \n");
    for(i = 0; i < counterUnion; i++){        
        printf("%d\t", unionSet[i]);
    }
    printf("\n");

}

// This menu would be shown to the user. And this will be the welcome screen
void menu(){
    int choice;
    // system("cls");
    printf("Enter Your Choice: \n");
    printf("1. Union: \n");
    printf("2. Intersection: \n");
    printf("3. Complement \n");
    printf("4. Difference \n");
    printf("Your Option: ");
    scanf("%d", &choice);
    switch(choice){
        case 1 : setUnion();
                 break;
        default: printf("Sorry Invalid option");
                 break;
    }
}

int main(){

    // Taking first SET from the user
    printf("\nPlease enter first set: ");
    inputSet(setOne);

    // Taking second SET from the user
    printf("\nPlease enter second set: ");
    inputSet(setTwo);

    menu();
    return 0;
}