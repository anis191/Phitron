let numbers = [17,3,12,9,6,20,1,15,8,11,4,19,10,2,13,5,16,7,18,14];

for(let i=0; i<numbers.length-1; i++){
    for(let j=i+1; j<numbers.length; j++){
        if(numbers[i] > numbers[j]){
            let temp = numbers[i];
            numbers[i] = numbers[j];
            numbers[j] = temp;
        }
    }
}

console.log(numbers);
document.write(numbers);