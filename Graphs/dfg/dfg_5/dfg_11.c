//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1026609746
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long long p, long p_7[5][5], unsigned int p_9[3][4][1],
         signed char p_11, int p_13)
{
  unsigned int v_19;
  double v_17;
  unsigned long v_15;
  long long v_4;
  unsigned long v;
  long result;
  v_19 = 4294923146U;
  v_17 = (double)p_13;
  v_15 = 4294960894UL;
  v_4 = (long long)(((unsigned long long)(! (58112UL * v_15)) + ((unsigned long long)v_17 % 17315ULL & (unsigned long long)p_9[2][1][0])) * (unsigned long long)(! (
                    - p * (long long)v_19)));
  result = (long)(! (! p_13));
  v = (unsigned long)((double)((long long)(~ result) + ((long long)p_9[2][1][0] + 52745LL) % (
                                                       ! v_4 + 999LL)) + - (- (
                      2.75438052798e+38 / ((double)p_11 + 763.))));
  result = ~ result >> (((long long)(v + 98UL) | (v_4 << (p & 63LL)) * (long long)(
                                                 p_7[1][3] / ((long)-1.85818744713e+38 + 692L))) & 31LL);
  return result;
}


