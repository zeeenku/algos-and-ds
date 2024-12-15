#include <stdio.h>
/**
big(O) = n^2 ==> worst case the smallest element is the last element of the array
Big(Omega) = nlog(n)
 */
void main(){

    int numbers[] = {123,5,0,8,6443,8765,567,3677,56, 543,234,97,654};
    int numbersArrSize = sizeof(numbers)/4;
    int maxIterationIndex = numbersArrSize-1;
    int i;
    int comparaisonCounts = 0;
    int arrayAccessCount = 0; 
    while(maxIterationIndex > 0){
    for(i=0;i<maxIterationIndex;i++){
        int first_num = numbers[i];
        int second_num = numbers[i+1];
        arrayAccessCount+=2;
        if(first_num>second_num){
            numbers[i] = second_num;
            numbers[i+1] = first_num;
            arrayAccessCount+=2;
        }
        comparaisonCounts += 1;
    }
    maxIterationIndex -= 1;
    }

    printf("comparaisons count: %d\narray access count: %d\nnew ordered array: ", comparaisonCounts, arrayAccessCount);
    for(i=0;i<numbersArrSize;i++){printf("%d ", numbers[i]);}

}