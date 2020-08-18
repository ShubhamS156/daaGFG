#include<iostream>
#include<queue>
using namespace std;

/*
 * Find the median at every point in the array
 * NAIVE: at every poin sort the array and find the median
 * EFF: Use two containers one to keep smaller elements and another to keep the larger elements
 *      smaller one will be of max heap and larger one will be of min heap
 */

