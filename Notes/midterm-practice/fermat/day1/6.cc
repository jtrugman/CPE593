bool fermat (int p, int n, int k) {
    for (int i = 0; i <= k; i++) {
        int a = random(2, p-1);
        if (powermod(a, p-1, p) != 1) {
            return false;
        }
    }
    return true;
}

int powermod (int x, int n, int m) {
    while ( n > 0) {
        int prod = 1;
        if (n % 2 == 1){
            prod = prod * x % m;
        }
        x = (x*x) % m;
        n = n/2;
    }
    return prod;
}