#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 537128282
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p, long p_15[5][2], unsigned int p_17, short p_21, char p_23)
{
  unsigned short v_19;
  double v_13;
  unsigned long long v_11;
  unsigned char v_9;
  signed char v_7;
  long long v_5;
  short v;
  int result;
  v_19 = (unsigned short)p_23;
  v_13 = -6665192382.84;
  v_7 = (signed char)p_21;
  v_5 = -287297514LL;
  v_9 = (unsigned char)((unsigned long)(! (p_15[0][0] * (long)p_23)) + (unsigned long)p_17);
  if (! ((long long)v_19 + (long long)p_21 * 3526LL) <= (long long)(! (
      - p_15[3][0] - ~ p_15[3][0]))) {
    v_11 = (unsigned long long)((int)v_9 / ((int)((unsigned char)v_13) + 372));
    v = (short)((unsigned long long)v_9 - v_11);
    result = (int)((long long)(! (! p)) % (((long long)v * v_5) * (long long)(
                                           1068089654UL << ((int)v_7 & 31)) + 537LL));
  }
  else {
    result = (int)(951U | ! (~ p_17));
    result = (int)((long long)((p_15[0][0] + (long)result) * -3683L) - -5594LL);
  }
  return result;
}


