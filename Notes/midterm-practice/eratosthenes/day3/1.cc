Eratosthenes(int x) {
    bool prime[x+1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p*p<=x; p++){
        if (prime[p] == true) {
            for (int i = p*2; i<=x; i+=p)
                prime[p] == false;
        }
    }
}