#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 870662025
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, float p_5, int p_11, unsigned int p_13,
                 unsigned char p_17[4])
{
  double v_25;
  unsigned char v_23;
  unsigned long v_21;
  float v_19;
  unsigned long long v_15;
  unsigned char v_9;
  signed char v_7;
  int v;
  unsigned int result;
  v_25 = 2.18894499381e+38;
  v_23 = (unsigned char)204;
  v_21 = 3935714004UL;
  v_19 = 1234810752.f;
  v_15 = (unsigned long long)p_17[0];
  v_7 = (signed char)p_17[1];
  v = (int)p_13;
  if ((float)((int)((unsigned char)((double)((int)v_23 + (int)p) / (- v_25 + 381.))) + (int)p_17[1]) >= 
      ((float)p_17[3] + (-22752.f - p_5)) * (float)(((int)p_17[3] - 206) % (
                                                    v + 705))) {
    v_19 = (float)(! ((long long)(v_21 * 109UL) / ((long long)p_17[0] * -1006143074LL + 481LL)));
    result = (unsigned int)(- (- (- v_19)));
    v_9 = (unsigned char)(-27498 % (! p_11 + 9));
  }
  else {
    result = (unsigned int)((18446744073709549837ULL * v_15 + (unsigned long long)(~ p)) - (unsigned long long)(
                            - v_19 + (float)(2858LL + (long long)p)));
    v_9 = (unsigned char)p_5;
    v_15 = (unsigned long long)p_17[3];
  }
  if (- ((unsigned long long)((long long)p_13 + 17064LL) & (v_15 - (unsigned long long)p_17[3])) != (unsigned long long)(- (
      ((long)p_5 >> 2L) * (long)(~ v_9)))) {
    v_9 = (unsigned char)(~ result);
    v = ~ ((int)v_7 % 63698) - (int)(~ (- v_9));
    result = (unsigned int)((float)((int)p * 301771996) + ((float)(v / 691327468) - - p_5));
  }
  else result = (unsigned int)p_11;
  return result;
}


