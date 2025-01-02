let arr = [];
for(let i=1; i<=50; i++){
    arr.push(i);
}

let result = arr.filter((val) =>{
    return (val % 3 === 0) && (val % 5 === 0);
});

document.write(result);
console.log(result);
