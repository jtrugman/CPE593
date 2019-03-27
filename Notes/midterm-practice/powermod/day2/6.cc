int pmod (int x, int n, int m) {
    int prod = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            prod = prod * x % m;
        }
        x = (x*x) % m;
        n = n/2;
    }
    return prod;
}