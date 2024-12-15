#include <stdio.h>
/**
big(O) = n^2 ==> worst case the smallest element is the last element of the array
Big(Omega) = n^2
 */
void main(){

    int numbers[] = {123,5,0,8,6443,8765,567,3677,56, 543,234,97,654};
    int numbersArrSize = sizeof(numbers)/4;
    int startLoopIndex = 0;
    int smallestElIndex = 0;
    int i;
    int comparaisonCounts = 0;
    int arrayAccessCount = 0; 
    while(startLoopIndex < numbersArrSize){
    for(i=startLoopIndex;i<numbersArrSize;i++){
        int current_el = numbers[i];
        int small_el = numbers[smallestElIndex];
        arrayAccessCount+=2;
        if(current_el < small_el){
            smallestElIndex = i;
        }
        comparaisonCounts += 1;

    }
    int smallest_el =  numbers[smallestElIndex];
    int first_el = numbers[startLoopIndex];
    arrayAccessCount+=2;
    numbers[startLoopIndex] = smallest_el;
    numbers[smallestElIndex] = first_el;
    startLoopIndex += 1;
    smallestElIndex = startLoopIndex;
    }

    printf("comparaisons count: %d\narray access count: %d\nnew ordered array: ", comparaisonCounts, arrayAccessCount);
    for(i=0;i<numbersArrSize;i++){printf("%d ", numbers[i]);}

}