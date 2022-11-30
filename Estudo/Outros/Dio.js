// R1 = soluções em X
// R2 = soluções em Y
// X  = solução particular media de x
// Y = solução particular media de y

function MDC(a,b){
    let resto;
    while(b != 0){
        resto = a % b
        a = b
        b = resto
    }
    return a;
}

function solve(a,b,c){
    let r1 = [];
    let r2 = [];
    let mdc = MDC(a,b);

    for(let i = -c; i < c; i++){
        for(let j = -c; j < c; j++){
            if(a*i + b*j == mdc){
                r1.push(i)
                r2.push(j)
            } 
        }
    }
 
    let mux = c / mdc
    let cut = Math.floor(r1.length / 2)
    let X = r1[cut] * mux 
    let Y = r2[cut] * mux

}

solve(119, 272, 1700)