lcm(int a, int b){
    return (a*b) / gcd(b,a);
}

gcd(int a, int b) {
    if (a == 0){
        return b;
    }
    return gcd(b%a, a);
}