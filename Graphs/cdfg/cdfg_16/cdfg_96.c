#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 231382635
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(int p, short p_4, unsigned short p_6, long p_8, short p_10[2][4])
{
  double v_15;
  double v_13;
  unsigned long long v;
  int result;
  v_13 = (double)p_10[1][2];
  v = (unsigned long long)p_4;
  v_15 = (double)(- p ^ (int)(- v_13));
  if ((double)((unsigned long long)((p_8 + 48663L) + (long)p_4) - (v % (unsigned long long)(
                                                                   (int)p_6 + 148)) / 18446744073709551559ULL) != 
      v_13 * v_15) {
    result = (int)(p_8 + (long)(! p_10[0][3]));
    result = p / ((int)p_4 / (p + 171) + 642) - (1524 % ((int)p_6 + 459) + (
                                                 (int)p_6 & result));
  }
  else {
    result = ! (253 % ((int)((unsigned char)-8.79874659026e+37f) + 637));
    result = result;
  }
  return result;
}


