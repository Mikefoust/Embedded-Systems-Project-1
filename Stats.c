#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

#define NUM 25

int main()
{

    unsigned char data[NUM] =   {165,7,233,111,67,
                                99,45,56,88,33,
                                178,4,144,211,11,
                                78,187,184,175,18,
                                253,215,163,27,235};

    unsigned char max,min,mean,median;

    //call maximum data item function
    max = find_maximum(data);

    //call minimum data item function
    min = find_minimum(data);

    //call mean function
    mean = find_mean(data);

    // call sort data function
    sort_array(data);

    // call medium data value function
    median = find_median(data);

    print_statistics(max, min, mean, median);


    print_array(data);

    return 0;
}

// Function to determine the maximum value in the array
// Parms: data: unsigned char array
// return the unsigned char max value
unsigned char find_maximum(unsigned char data[])
{
    unsigned char max=0;

    // loop through all array items
    for(int i=0; i<NUM; i++)
        if (data[i] > max)
            max = data[i];

    return(max);
}

// Function to determine the minimum value in the array
// Parms: data: unsigned char array
// return the unsigned char min value
unsigned char find_minimum(unsigned char data[])
{
    unsigned char min=255;

    // Loop through all data items
    for(int i=0; i<NUM; i++)
        if (data[i] < min)
            min = data[i];

    return(min);
}

// Function to determine the mean value in the array
// Parms: data: unsigned char array
// return the unsigned char mean value
unsigned char find_mean(unsigned char data[])
{
    unsigned char mean=0, total=0;

    // Loop through all data items and add them to the total
    for(int i=0; i<NUM; i++)
        total += data[i];

    // calculate the mean
    mean = total/2;

    return(mean);
}

// Function to sort the unsigned char array
// Parms: &data: unsigned char array;
// return void
void sort_array(unsigned char data[])
{
    int i, j;
    unsigned char temp;

    // Loop through all data items
    for(i = 0; i < NUM; i++)
        for(j = 0; j < NUM-1; j++)
            // Determine if the next item is larger than the current data item
            if(data[j] > data[j+1]){
                //swap the two array elements
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
}

// Function to determine the medium value in the array
// Parms: data: unsigned char array
// return the unsigned char medium value
unsigned char find_median(unsigned char data[])
{
    unsigned char temp;

    // check if odd or even number of data items
    if (!NUM % 2) //even
        temp = ((data[NUM/2] + data[NUM/2+1]) / 2);
    else
        temp = data[NUM/2];

    return temp;
}

// Function to determine the medium value in the array
// Parms: smin, smax, mean, median
void print_statistics(smax, smin, mean, median)
{

    //print maximum, minimum data values
    printf("\n\n Maximum Value = %u\n\n",smax );
    printf(" Minimum Value = %u\n\n",smin );
    printf(" Mean Value = %u\n\n",mean );
    printf(" Medium Value = %u\n\n",median );

}

// Function to print the array values
// Parms: data: unsigned char array
void print_array(unsigned char data[])
{
    printf(" Sorted Array of Unsigned Chars: \n ");
    for(int i=0; i<NUM; i++)
    {
        printf("%u", data[i]);
        if (i != NUM-1)
            printf(", ");
    }
}
