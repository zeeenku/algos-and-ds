let numbers = [123,5,0,8,6443,8765,567,3677,56, 543,234,97,654];
let maxIterationIndex = numbers.length-1;
let comparaisonCounts = 0, arrayAccessCount = 0;

while(maxIterationIndex > 0){
    for(let i=0;i<maxIterationIndex;i++){
        let first_num = numbers[i], second_num = numbers[i+1];
        arrayAccessCount+=2;
        if(first_num>second_num){
            numbers[i] = second_num;
            numbers[i+1] = first_num;
            arrayAccessCount+=2;
            comparaisonCounts += 1;
        }
    }
    maxIterationIndex -= 1;
}
console.log(`comparaisons count: ${comparaisonCounts}\narray access count: ${arrayAccessCount}\nnew ordered array: ${numbers}`)