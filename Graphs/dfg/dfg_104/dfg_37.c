#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 528479707
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p, long long p_4, char p_6, unsigned char p_9, char p_11)
{
  float v_13;
  unsigned long long v;
  int result;
  v_13 = (float)-1046528674LL;
  v = (unsigned long long)v_13;
  result = ((int)((signed char)(41666. / (p + 661.))) % 121 << (((unsigned long long)(
                                                                 p_4 ^ (long long)p_6) - (
                                                                 (unsigned long long)p_6 + v)) & 31ULL)) % (
           (int)(- (~ p_9)) / (((int)p_11 | (int)p_9 * (int)p_9) + 915) + 123);
  return result;
}


