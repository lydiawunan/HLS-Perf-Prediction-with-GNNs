



void top_cdfg(int* a, int* b) {
	int sum = 0;
	for(int i = 1; i < 10; i++) {
		sum += a[i];
		b[i] = sum;
		a[i] = b[i] + b[i-1];
		b[i+1] = b[i] * i;
	}
}