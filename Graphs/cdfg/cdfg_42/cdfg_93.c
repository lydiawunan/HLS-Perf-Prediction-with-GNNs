#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 548511404
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, short p_4, int p_6, unsigned long p_8[3][2][4],
              long p_10[2])
{
  long v_15;
  long v_13;
  char v;
  long long result;
  v_15 = (long)p_4;
  if (p_8[2][0][2] > ~ (p_8[1][0][1] % 3342748075UL) % ((p_8[1][0][0] / 6UL) / (unsigned long)(
                                                        ! v_15 + 856L) + 734UL)) {
    v_13 = (long)(p_6 + ~ p_6);
    v = (char)((long long)(- (~ p_4)) % ((55594LL + (long long)p_4) % (long long)(
                                         4175287460UL * (unsigned long)v_13 + 702UL) + 653LL));
  }
  else v = (char)118;
  if ((unsigned long long)p_8[2][1][3] > 18446744073709547301ULL - (unsigned long long)(
                                         ! p ^ (unsigned int)v)) result = (long long)(~ (
                                                                 p * (unsigned int)p_4 & (unsigned int)(~ p_6)));
  else result = (long long)(3313392748UL - (50110UL - p_8[2][0][2]) * (unsigned long)(
                                           p_10[0] % (long)((int)p_4 + 235)));
  return result;
}


