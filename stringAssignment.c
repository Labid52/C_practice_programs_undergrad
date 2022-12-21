
#include <stdio.h>
#include <string.h>

int main()
{
    char *call; // declare the string named 'call'
    int number; // declaring an integer named 'number'
    
    printf("Enter any number: \n");
    scanf("%d",&number); // taking the input from the user
    
    if (number > 0){
        //strcpy(call,"plus"); // copying one string to another. 
        call = "Plus";
    }
    else {
       // strcpy(call,"minus"); //copying one string to another. 
        call = "Minus";
    }
    
    printf("%s", call); // printing the output. 
    return 0;
}
