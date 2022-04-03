


void top(int* in, int* out)
{
	in[5] = 17;
	in[7] = in[4] * 2 + 1;

	for(int i = 0; i < 10; i++) {
#pragma HLS unroll
		out[i] = in[i] + i;
	}

	out[7] = in[18] - 5;
}



