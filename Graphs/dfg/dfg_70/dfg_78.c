#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 587138435
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p, float p_9, long long p_13)
{
  unsigned long v_11;
  char v_7;
  long long v_4;
  unsigned long v;
  unsigned long long result;
  v_11 = (unsigned long)p;
  v_4 = -55974LL;
  v_7 = (char)(- (p_9 - (float)(~ p_13 % 6053130LL)));
  result = (unsigned long long)((int)((float)((unsigned long long)(v_4 * 116LL) - (
                                              (unsigned long long)p + 18446744072842845184ULL)) / 3.29720281837e+37f) - 
                                (int)v_7 / ((int)((char)(-8.15689815845e+39 - (double)(
                                                         p_9 + (float)v_11))) + 7));
  v = (unsigned long)(~ (0LL - ! v_4) / (long long)((p & - (- p)) + 519U));
  result = ! ((unsigned long long)((long long)(! v) % 26984LL) / (result + 461ULL));
  return result;
}


