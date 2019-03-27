eratosthenes (int k) {
    bool prime[k+1];
    memset(prime, true, sizeof(prime));

    for (int i = 2; i*i <= k; i++) {
        if (prime[i] == true) {
            for (int p = i*2; p <= k; p+=i){
                prime[i] = false;
            }
        }
    }
}