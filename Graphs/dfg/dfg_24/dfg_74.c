#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 343426727
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p, long long p_4[3][1], char p_6[3], short p_8,
              unsigned int p_10)
{
  char v;
  long long result;
  v = (char)-74;
  result = (long long)(! ((unsigned int)(~ p_8) / (p_10 / (unsigned int)(
                                                   (int)v + 622) + 271U)) << (
                       (long long)p_8 * ((long long)(-20080 - (int)p_6[2]) & (
                                         p_4[2][0] - 241LL)) & 31LL));
  result = (long long)p * (- (p_4[1][0] % (long long)((int)p_6[0] + 699)) + 
                           result / 701226044LL);
  return result;
}


