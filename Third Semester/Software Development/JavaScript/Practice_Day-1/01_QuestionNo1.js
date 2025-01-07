let num = Number(prompt("Enter your number: "));

if(num < 0 || num > 100){
    document.write("Invalid input value");
}else{
    if(num < 33){
        document.write("Fail");
    }else if(num >= 33 && num <= 39){
        document.write("C");
    }else if(num >= 40 && num <= 59){
        document.write("B");
    }else if(num >= 60 && num <= 69){
        document.write("A-");
    }else if(num >= 70 && num <= 79){
        document.write("A");
    }else{
        document.write("A+");
    }
}