#include <stdio.h>

int main() {

    int total_seconds;
    int hours, minutes, seconds;
    int counter = 0; 

    printf("Enter the total number of seconds: ");
    scanf("%d", &total_seconds);

    // --- FOR LOOP SECTION ---    
   
    for (int i = 0; i < 1; i++) {
        counter++;
        
        hours = total_seconds / 3600;
        minutes = (total_seconds % 3600) / 60;
        seconds = total_seconds % 60;
    }

  
    printf("Results -> Hours: %d, Minutes: %d, Seconds: %d\n", hours, minutes, seconds);
    printf("For Loop Iteration Count: %d\n", counter);

    // --- RESET SECTION ---
    counter = 0;

    // --- WHILE LOOP SECTION ---
   

    while (counter < 1) {
        counter++; 
     
        hours = total_seconds / 3600;
        minutes = (total_seconds % 3600) / 60;
        seconds = total_seconds % 60;
    }

   
    printf("Results -> Hours: %d, Minutes: %d, Seconds: %d\n", hours, minutes, seconds);
    printf("While Loop Iteration Count: %d\n", counter);

    // --- COMPARISON SECTION ---
  
    printf("\nProgram completed successfully.\n");
    return 0;
}
  