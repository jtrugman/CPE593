bruteForce(int n) {
    for (int i <- 2  to n/2) {
        if (n % i == 0) {
            return false;
        }  else {
            return true
        }
    }
}