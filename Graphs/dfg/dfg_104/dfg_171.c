#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 286591068
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(signed char p, signed char p_9, unsigned int p_11,
         unsigned long p_15, long long p_17)
{
  unsigned short v_13;
  double v_6;
  unsigned char v_4;
  double v;
  long result;
  v_13 = (unsigned short)p_15;
  v = -1.23899954298e+38;
  result = (long)p_15;
  v_4 = (unsigned char)((long long)(- (~ ((unsigned long)p * p_15))) * (
                        (long long)(- v_13) | (! p_17 << ((p_15 + p_15) & 63UL))));
  v_6 = (double)(4294967295UL % (unsigned long)(! (p_11 | (unsigned int)v_13) + 11U));
  v_4 = (unsigned char)(! (! ((int)(~ p_9) % ((int)p + 963))));
  result = (long)(((unsigned long)(- (v / ((double)v_4 + 307.))) / ((
                                                                    (unsigned long)result & 221071565UL) + 159UL)) * (unsigned long)(
                  (int)(v_6 * (double)(result * 221L)) + 988 % ((int)(~ p) + 576)));
  return result;
}


