//  This is a program that takes in 20 data points of input and displays a frequency distribution of responses 1-5

//  Created by Milan Patel on 2/13/19.
//  Copyright © 2019 Milan Patel. All rights reserved.
//
#include <stdio.h>
#include <math.h>
#define MAX_SIZE 100

void calculate(int *responses, int n1, int frequency[], int n2);   // Function that produces frequency distribution.

int main()
{
    int responses[MAX_SIZE]; //Declare arrays
    int frequency[MAX_SIZE];
    int i, n1;      //declare counter and responses number
    int n2 = 5;     //set frequency range
    
    // Input array size
    printf("Enter amount of responses: ");
    scanf("%d", &n1);
    
    // Input elements in array
    printf("Enter %d responses: ", n1);
    for(i=0; i<n1; i++)
    {
        scanf("%d", &responses[i]);
    }
    
    
 calculate(responses, n1, frequency, n2);   //Call Calculate function
    
    return 0;
}

void calculate(int responses[], int n1, int frequency[], int n2)    // Calculate function
{
    int i=0;
    for( i=0; i<n1; i++)        //calculate frequency function
    {
        if(*responses == 1)
            frequency[0] = frequency[0]+1;
        else if(*responses == 2)
            frequency[1] = frequency[1]+1;
        else if(*responses == 3)
            frequency[2] = frequency[2]+1;
        else if(*responses == 4)
            frequency[3] = frequency[3]+1;
        else if(*responses == 5)
            frequency[4] = frequency[4]+1;
        responses++;
    }
    
    printf("\nOutput: ");       //Print results
    printf("\nRating      Frequency");
    for (i=1; i<6; i++)
    {
        printf("\n%d                     %d" , i, frequency[i-1]);
    }
}
