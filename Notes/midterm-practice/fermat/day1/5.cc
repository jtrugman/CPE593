bool fermat(int x, int n, int k) {
    for (int i = 0; i <= k; i++){
        int a = random(2, x-1);
        if (powermod(a, x-1, x) != 1) {
            return false;
        }
    }
    return true;
}

int powermod(int x, int n, int m) {
    int prod = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            prod = prod * x % m;
        }
        x = x*x % m;
        n = n/2;
    }
    return prod;
}