function calculateSaving(arr, cost){
    if(typeof(arr) !== 'object' || typeof(cost) !== 'number'){
        return 'invalid input';
    }else{
        arr.forEach((val, idx) =>{
            if(val >= 3000){
                arr[idx] = val - ((20 * val) / 100);
            }
        });
        let total = arr.reduce((prev, curr) =>{
            return prev += curr;
        });
        let saving = total - cost;

        if(saving < 0){
            return "earn more";
        }else{
            return saving;
        }
    }
}

let result1 = calculateSaving([1000, 2000, 3000], 5400);
document.write(result1, '<br>');
let result2 = calculateSaving([1000, 2000, 2500], 5000);
document.write(result2, '<br>');
let result3 = calculateSaving([900, 2700, 3400], 10000);
document.write(result3, '<br>');
let result4 = calculateSaving(100, [900, 2700, 3400]);
document.write(result4, '<br>');