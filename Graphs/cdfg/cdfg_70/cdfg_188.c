#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 387941451
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p, double p_7, float p_11, unsigned char p_13,
                signed char p_15)
{
  short v_25;
  unsigned short v_23;
  float v_21;
  unsigned long long v_19;
  unsigned short v_17;
  unsigned int v_9;
  signed char v_5;
  long long v;
  signed char result;
  v_25 = (short)p;
  v_23 = (unsigned short)p_15;
  v_21 = (float)p_7;
  v_19 = 18446744073709512846ULL;
  v_17 = (unsigned short)16459;
  v_9 = 989038004U;
  v_5 = p_15;
  result = (signed char)p_7;
  while ((float)(! ((9318ULL * (unsigned long long)result) % 569ULL)) >= v_21) {
    v = (int)v_25 + 81;
    v_25 = (short)(- -436422855LL);
    v_17 = (unsigned short)-4176874324.02;
    result = (signed char)((889910300LL % (v + 199LL) - (long long)((int)v_23 - (int)v_23)) + (long long)(
                           (long)((int)p_15 << 6LL) - (p + (long)result)));
  }
  while_0_break: ;
  if ((unsigned long long)((double)(v_9 - (unsigned int)((int)v_17 / (
                                                         (int)p_15 + 143))) - p_7) != 
      - (~ v_19) + (unsigned long long)(((int)((unsigned char)v_21) << 5) / (
                                        (int)(- v_23) + 682))) {
    v = -55LL;
    result = (signed char)(v - 36LL);
  }
  else {
    v_9 = (unsigned int)(- (- p_11) + (float)((long)p_13 * ((long)p_15 + p)));
    result = (signed char)(p_7 - (double)v_9);
    result = (signed char)(- (p * (long)((int)v_5 / ((int)result + 613))));
  }
  return result;
}


