let year = Number(prompt("Enter a year"));

if ((year % 4 === 0 && year % 100 !== 0) || (year % 400 === 0)){
    document.write(`It's a leap year!`);
}else{
    document.write(`It's NOT a leap year!`);
}