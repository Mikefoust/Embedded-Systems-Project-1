#ifndef STATS_H_INCLUDED
#define STATS_H_INCLUDED

// Function definition to find maximum value
unsigned char find_maximum(unsigned char data[]);

// Function definition to find minimum value
unsigned char find_minimum(unsigned char data[]);

// Function definition to find mean value
unsigned char find_mean(unsigned char data[]);

// Function definition to sort the unsigned char array
void sort_array(unsigned char data[]);

// Function definition to find medium value
unsigned char find_median(unsigned char data[]);

void print_statistics(smax, smin, mean, median);

void print_array(unsigned char data[]);

#endif // STATS_H_INCLUDED
