#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 541663366
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p[5][2], short p_7, short p_11, double p_15,
        unsigned char p_17)
{
  unsigned long v_23;
  long long v_21;
  long long v_19;
  float v_13;
  unsigned long long v_9;
  float v_4;
  short v;
  int result;
  v_21 = (long long)p_15;
  v_19 = -40221LL;
  v_13 = -167.169143677f;
  v_9 = (unsigned long long)p_15;
  v_4 = (float)p_17;
  v = (short)p_17;
  result = (int)p_17;
  while (- ((double)result / (p_15 + 247.) + p_15 * p_15) == (double)(~ (
                                                             (int)p_11 & (int)p_17)) + - (
                                                             p_15 + (double)p_11)) {
    v_23 = v_19 / 27789LL;
    v_4 = (float)(- ((int)(~ p_17) ^ -76 % ((int)((char)8777952256.f) + 477)));
    v_9 = (unsigned long long)(((unsigned long)((double)v_21 * -92.8710492811) - - v_23) + (unsigned long)(- v_4));
    result = (int)p_11;
  }
  while_0_break: ;
  if (((unsigned long long)-8.16899162115e+35f % (((unsigned long long)p_7 | v_9) + 357ULL)) % (unsigned long long)(
      (int)p_11 + 557) < (unsigned long long)((int)(~ (~ p_7)) * (int)((short)(
                                              (double)(- v_13) + (double)p[2][0] / (
                                                                 p_15 + 478.))))) 
    result = 17;
  else {
    v_4 = (float)((int)((unsigned char)(- v_4)) / ((int)p[0][1] + 784));
    v = (short)(~ (-52717LL * (long long)v) / 1041881393LL);
    result = (int)v % (((int)((signed char)v_4) - 48) + 166);
  }
  return result;
}


