#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 378749827
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p[4], double p_5, unsigned int p_7, long p_9,
                  double p_19)
{
  long v_25;
  unsigned long long v_23;
  float v_21;
  unsigned char v_17;
  float v_15;
  char v_13;
  long v_11;
  long long v;
  unsigned long result;
  v_25 = -37221L;
  v_23 = (unsigned long long)p_9;
  v_21 = (float)p_7;
  v_17 = (unsigned char)p_5;
  v_15 = (float)p_9;
  v_13 = (char)11;
  v_11 = 556762262L;
  while (((unsigned int)p_19 & p_7) != (unsigned int)(- (- v_21))) {
    v_13 = v_23 * 4660011925ULL;
    v_17 = (unsigned char)((long)-1.43867086389e+38f % (~ (30610L + v_25) + 688L));
    v_23 = 42ULL + ((unsigned long long)(~ p[3]) ^ 23809ULL);
    v_21 = (float)18446744073709493609ULL;
  }
  while_0_break: ;
  if ((((long long)v_11 + -154959481LL) * (long long)(4007762518UL + (unsigned long)v_13)) / (long long)(
      ((int)((float)p_9 * v_15) - ((int)v_17 - -28858)) + 786) != (long long)(
      (double)(((long long)p_19 + 659722611LL) ^ (long long)p_7) + - (
      p_5 - (double)p_9))) {
    v = (long long)(- ((unsigned int)(- p_5) - p_7));
    result = (unsigned long)(v / (long long)((unsigned long)p[2] / 55689UL + 396UL));
  }
  else result = (unsigned long)(! -77LL);
  return result;
}


