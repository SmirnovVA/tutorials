int fibonacciRecursion(int n){
	if(n == 1) return 1;
	else if (n == 0) return 0;	
	return (fibonacciRecursion(n - 1) + fibonacciRecursion(n - 2));
}

int fibonacciNoRecursion(int n){
	if(n == 1 || n == 2) return 1;
	int prevFib = 1, resFib = 1, temp =0;
	for(int i = 2; i < n ; i++){
		temp = resFib + prevFib;
		prevFib = resFib;
		resFib = temp;
	}
	return resFib;
}
