//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 99334504
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, float p_5, unsigned int p_11, int p_13,
              unsigned long p_17)
{
  unsigned int v_15;
  float v_9;
  unsigned long long v_7;
  double v;
  long long result;
  v_15 = 1018934416U;
  v_9 = - (((105.f - p_5) * 0.f) / ((float)(((unsigned long long)v_15 + 18446744073080829060ULL) * (unsigned long long)(
                                            (unsigned long)-155.972167969f * p_17)) + 542.f));
  v_7 = 166950255ULL;
  v = (double)((unsigned long long)(- (p_5 + (float)v_7)) - (unsigned long long)(
                                                            (unsigned int)v_9 / (
                                                            p_11 + 779U)) % (
                                                            (unsigned long long)p_13 % (
                                                            v_7 + 666ULL) + 261ULL));
  result = (long long)((int)(~ (~ (- p))) / ((int)((char)(58351. * - (- v))) + 308));
  return result;
}


