#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 408463938
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, unsigned short p_4, int p_7,
                       char p_13, short p_15[2][2])
{
  long long v_11;
  int v_9;
  double v;
  unsigned long long result;
  v_11 = (long long)p_13;
  v_9 = p_7;
  result = (unsigned long long)p_15[0][0];
  v = (double)((643061254L / (long)((int)p_4 + 671) - (long)((int)p_15[1][1] - -142910103)) - (long)(- p));
  while (18446744073709525611ULL * (44853ULL % (unsigned long long)((int)p * (int)p_4 + 772)) == (unsigned long long)(- (
         v / ((double)p_7 + 223.)))) {
    v_9 = v_11 * (long long)((unsigned int)v_9 | 4198635265U);
    v_11 = (long long)result;
    result = (unsigned long long)(- (((long long)p + v_11) - (long long)(
                                     (int)p_15[1][0] & 14823)));
    v = (double)p_13;
  }
  while_0_break: ;
  return result;
}


