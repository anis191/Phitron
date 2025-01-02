var numbers = [1, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 10];
const numbersSet = new Set(numbers);
numbers = [...numbersSet];
document.write(numbers);
console.log(numbers);

