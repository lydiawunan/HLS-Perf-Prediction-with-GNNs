#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 355460299
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned long long p, unsigned long p_9,
              signed char p_11[3][1], double p_19, unsigned long long p_23[5])
{
  unsigned int v_21;
  signed char v_17;
  long long v_15;
  unsigned long v_13;
  unsigned int v_7;
  unsigned char v_4;
  signed char v;
  long long result;
  v_21 = (unsigned int)p_19;
  v_17 = (signed char)p;
  v_15 = 50246LL;
  v_13 = (unsigned long)p;
  v_4 = (unsigned char)110;
  if ((unsigned long long)v_4 < (unsigned long long)(- (- v_17)) * (404332421ULL * p_23[0])) {
    v_7 = (unsigned int)((unsigned long long)((unsigned long)p_11[0][0] + v_13) % (
                         (unsigned long long)v_15 * p + 502ULL) + (unsigned long long)(
                         (int)(- v_17) + (int)((signed char)(p_19 * (double)v_21))));
    v_4 = (unsigned char)(p - (unsigned long long)(((unsigned long)v_7 + p_9) - p_9));
    v = (signed char)v_4;
  }
  else v = (signed char)(- (- (- 991.543762207f)));
  result = (long long)(7161 + (int)(! v));
  return result;
}


