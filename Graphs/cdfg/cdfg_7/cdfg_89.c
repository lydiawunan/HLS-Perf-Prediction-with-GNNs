#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 33996531
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, unsigned long p_4, short p_6, float p_9[2][1][5],
                 int p_11)
{
  short v_23;
  long v_21;
  long long v_19;
  unsigned long long v_17;
  double v_15;
  float v_13;
  unsigned int v;
  unsigned int result;
  v_23 = p_6;
  v_19 = (long long)p_6;
  v_17 = 18446744073709497867ULL;
  v_15 = (double)p_11;
  v_13 = (float)p_11;
  v = 3457914257U;
  result = (unsigned int)p_11;
  while ((! v_17 * (unsigned long long)(~ p_4)) % 13659ULL == (unsigned long long)(
         ! (~ p_4) - (unsigned long)(p_11 ^ 0))) {
    v_21 = v_19 / -18978LL;
    v = (unsigned int)(! (~ ((int)v_23 * (int)((short)p))));
    v_15 = (double)((unsigned long)((v_21 + (long)v_15) % -33L) - (unsigned long)(
                    ((unsigned int)p_9[0][0][1] + result) - (unsigned int)(! p_11)));
    v_17 = (unsigned long long)(~ (result & v) * 4294961457U);
  }
  while_0_break: ;
  if ((double)(- v_13) <= (double)(! (45831U + v)) + v_15) result = (unsigned int)(
                                                           (unsigned long)(
                                                           p / (p + 215.)) % 805UL);
  else {
    v = (unsigned int)p_11;
    v = (unsigned int)((unsigned long long)v - ((unsigned long long)p_9[1][0][4] + (
                                                992554778ULL - (unsigned long long)-7229295594.12)));
    result = (unsigned int)(p_4 / (unsigned long)(-51270L * (long)p_6 + 69L) + (unsigned long)v);
  }
  return result;
}


