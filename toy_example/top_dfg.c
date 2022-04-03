


void top_dfg(int* a, int* b, int* c)
{
	*a = *b + 2;
	int t1 = *a * *b + 4;
	int t2 = t1 + *c;
	int t3 = *b * t2;
	*c = t1 + t2 + t3;
}



