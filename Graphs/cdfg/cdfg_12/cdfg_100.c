#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 194584745
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p[5][3], signed char p_5, unsigned short p_7,
                 float p_11, unsigned short p_13)
{
  signed char v_23;
  float v_21;
  double v_19;
  long long v_17;
  long v_15;
  unsigned long v_9;
  unsigned long v;
  unsigned int result;
  v_23 = (signed char)p_11;
  v_21 = (float)p[3][1];
  v_19 = (double)p_13;
  v_17 = -39666LL;
  v_15 = (long)p[0][0];
  v_9 = (unsigned long)p_11;
  result = (unsigned int)p[0][1];
  while ((long long)(~ (result - result)) - v_17 >= (long long)((int)((unsigned char)(
                                                                v_19 + (double)(
                                                                (unsigned int)v_21 * 28122U))) ^ 73)) {
    v_9 = (unsigned long)((double)(! (- v_23)) + -85.1383738072);
    v_17 = (long long)(- (- v_19 * (double)((long long)p[1][0] / (v_17 + 969LL))));
    v_21 = (float)((double)p_11 + - v_19);
  }
  while_0_break: ;
  if ((-25190LL * (long long)p_5) % (long long)(((unsigned long)p_7 - v_9) + 893UL) - (long long)(
      (int)(528988128.f - p_11) & (int)p_13 / ((int)p[1][1] + 646)) < (long long)(
      (long)p_5 - (-10L / (v_15 + 281L)) / (long)((int)p[0][0] % ((int)p_5 + 838) + 823))) 
    result = (unsigned int)64.5211174046;
  else {
    v = (unsigned long)p[2][0];
    result = (unsigned int)(- (! (v - 11004UL)));
  }
  return result;
}


