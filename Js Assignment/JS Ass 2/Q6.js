var arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
var count_even = 0;
var count_odd = 0;

for (i = 0; i < arr.length; i++) {
 
    if(arr[i] % 2 == 0) {
        count_even++;
    }
    if(arr[i] % 2 != 0) {
        count_odd++;
    }

}

console.log(count_even);
console.log(count_odd);

