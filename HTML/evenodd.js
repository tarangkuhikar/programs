a=prompt("enter the number");
res=even(a);
if(res){
    document.write("your number is even");
}
else{
    document.write("your number is odd");
}

function even(b){
    const number=Number(b);
    if(number%2==0){
        return 1;
    }
    else{
        return 0;
    }
}