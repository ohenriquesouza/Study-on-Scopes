var x = 15;

function dinamico1(x){
    
    x = 10
    dinamico2(x);
    return x;
    
}
function dinamico2(x){
    
    let y = x * 2;
    console.log(y);
    dinamico3(y);
}
function dinamico3(y){
    
    let z = y - 2;
    console.log(z);
    return z;
}

console.log(dinamico1(x));
console.log(x);
