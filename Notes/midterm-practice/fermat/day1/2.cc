bool fermat(int p, int k) {
    for (int i = 0; i <= k; i++) {
        int a = random(2, p-1);
        if (pmod(a, p-1, p) != 1){
            return false;
        }
    }
    return true;
}

int pmod(int x, int n, int m) {
    int prod = 1;

    while (n > 0) {
        if (n % 2 == 1) {
            prod = prod * x % m;
        }
        x= (x*x) % m;
        n = n/2;
    }
    return prod;
}