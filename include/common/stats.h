/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */
unsigned char find_median(unsigned char test[], unsigned char size);
/* Find the median of the array  */ 
 /**
 * @brief < find the median of array>
 *
 * <Add Extended Description Here>
 *
 * @param test[]  the array 
 * @param SIZE   the length of the array
 *
 * @return median
 */
double find_mean(unsigned char test[],unsigned char size);
/* Find the mean of the array  */ 
 /**
 * @brief < find the mean of array>
 *
 * <Add Extended Description Here>
 *
 * @param test[]  the array 
 * @param SIZE   the length of the array
 *
 * @return mean
 */
unsigned char find_maximum(unsigned char test[],unsigned char size);
/* Find the maximum of the array  */ 
 /**
 * @brief  find the maximum of array
 *
 * <Add Extended Description Here>
 *
 * @param test[]  the array 
 * @param SIZE   the length of the array
 *
 * @return maximum
 */
unsigned char find_minimum(unsigned char test[],unsigned char size);
/* Find the minimum of the array  */ 
 /**
 * @brief find the minimum of array
 *
 * <Add Extended Description Here>
 *
 * @param test[]  the array 
 * @param SIZE   the length of the array
 *
 * @return minimum
 */
void print_array(unsigned char test[],unsigned char size);
/* Print the array  */ 
 /**
 * @brief  Print the array
 *
 * <Add Extended Description Here>
 *
 * @param test[]  the array 
 * @param SIZE   the length of the array
 *
 * @return none
 */
void print_statistics(unsigned char median,double mean,unsigned char maximum,unsigned char minimum);// print an array including minimum , maximum,mean,and median
/* Print  maximum, minimum , mean, median of the array  */ 
 /**
 * @brief < find the mean of array>
 *
 * <Add Extended Description Here>
 *
 * @param test[]  the array 
 * @param SIZE   the length of the array
 *
 * @return none
 */
void sort_array(unsigned char data[],unsigned char size);    //sort array from largest  to smallest
/* print the sort of  array  */ 
 /**
 * @brief < find the mean of array>
 *
 * <Add Extended Description Here>
 *
 * @param test[]  the array 
 * @param SIZE   the length of the array
 *
 * @return none
 */
void print_array(unsigned char test[],unsigned char size); 
/* print the origin array  */ 
 /**
 * @brief < print the origin array>
 *
 * <Add Extended Description Here>
 *
 * @param test[]  the array 
 * @param SIZE   the length of the array
 *
 * @return none
 */


#endif  /* __STATS_H__ */
