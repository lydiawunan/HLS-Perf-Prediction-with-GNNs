#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 643059414
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(short p, char p_4[2][1], unsigned long long p_6[3][1],
         unsigned int p_8, long long p_11)
{
  unsigned long long v_13;
  unsigned char v;
  long result;
  v_13 = (unsigned long long)p_4[0][0];
  v = (unsigned char)v_13;
  result = (long)((long long)(- (! (p_8 % (unsigned int)((int)v + 13)))) - ~ p_11);
  result = (long)((unsigned long long)(~ p) + ((unsigned long long)((
                                                                    (long)-4793056912.22 << 19L) + (
                                                                    (long)p_4[0][0] + result)) ^ ~ p_6[0][0]));
  result = (long)(! (-894859543LL * (long long)((long)(! p) % (result + 183L))));
  return result;
}


