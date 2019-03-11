int isPrime(int num){
    if(num == 1 || num == 0){
        return 0;
    }
    for(int i = 2; i<num; i++ )
        if(num%i == 0) return 0;
    return 1; 
}

int numPrimes(int lim){
    int count =0;
    for(int i = 1; i<=lim; i++ ){
        if(isPrime(i)) count++;
    }
    return count;
}