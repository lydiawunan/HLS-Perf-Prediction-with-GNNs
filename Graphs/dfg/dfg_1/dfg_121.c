//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 390901491
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p, unsigned char p_5, unsigned long p_9[3][1][1],
              float p_11, unsigned long p_13)
{
  double v_15;
  char v_7;
  long long v;
  long long result;
  v_15 = (double)p_5;
  v_7 = (char)p_13;
  result = (long long)-7847840256.f;
  v = (long long)((((unsigned long long)(p_9[2][0][0] + (unsigned long)p_11) + (
                    513831325ULL & (unsigned long long)p_13)) + (unsigned long long)(
                   (result | 13324LL) + (long long)(p_13 % 4294967236UL))) % (
                  (unsigned long long)(- (v_15 - 54601.)) + 783ULL));
  result = - (! (v - (long long)p) / (((long long)((long)p_5 / -51142L) - (
                                       result | (long long)v_7)) + 348LL));
  return result;
}


