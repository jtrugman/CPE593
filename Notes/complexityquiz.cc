bool isPrime(int n) {
	for (int i = 2; i < n; i++) { // O(n)
		if(n % i == 0)
			return false; // omega(1)
	}
	return true;
}

int sum (int a, int b) {  // O(b-a)
	int s = 0;
	for (int i = a; i <= b; i++) {
		s += i;

	}
	return s;

}

int sumOpt(int a, int b) { // O(1) 
	return (b*(b+1) - a*(a+1))/2;
}

int fibo(int n) { //O(n)
	int a=1, b=1,c;
	for (int i = 0; i < n; i++) { // O(n)
		c = a + b; // O(1) 
		a = b; // O(1)
		b = c; // O(1)

	}
}

int fiboRec(int n) {
	if (n <= 2){
		return 1;
	return fiboRec(n-1) + fiboRec(n-2);
}


int fiboMemozied(int n) {
	static int memo[200] = {0};
	if (n <= 2){
		return 1;
	if (memo[n] > 0){
		return memo[n];
	}
	return memo[n] = fiboRec(n-1) + fiboRec(n-2);
}

