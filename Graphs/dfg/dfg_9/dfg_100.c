//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 114853221
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long p[2][1], short p_5, unsigned long long p_9)
{
  int v_11;
  unsigned char v_7;
  unsigned int v;
  long result;
  v_11 = (int)p_5;
  v_7 = (unsigned char)(- (49 & v_11));
  v = (unsigned int)((unsigned long long)p[0][0] / ((unsigned long long)(
                                                    (p[0][0] >> ((int)p_5 & 31)) ^ (unsigned long)(~ v_7)) % (
                                                    (unsigned long long)(
                                                    46UL * p[1][0]) / (
                                                    p_9 + 212ULL) + 933ULL) + 854ULL));
  v = (unsigned int)(- (! ((unsigned long)(! v) * 60993UL)));
  result = (long)(- ((unsigned long)v + 34431UL));
  return result;
}


