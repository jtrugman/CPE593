eratosthenes(int a) {
    bool prime [a + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p*p <= a; p++) {
        if (prime[p] == true) {
            for (int i = p*2; i <= a; i+=p) {
                prime[i] = false;
            }
        }
    }
}