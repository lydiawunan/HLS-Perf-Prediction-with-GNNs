#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 225700172
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(int p, int p_5, signed char p_9[4][4], double p_11, float p_13)
{
  long v_25;
  unsigned long long v_23;
  unsigned char v_21;
  int v_19;
  unsigned long v_17;
  int v_15;
  char v_7;
  double v;
  float result;
  v_25 = 1028846584L;
  v_19 = (int)p_13;
  v_17 = (unsigned long)p_13;
  v_15 = -49556;
  v_7 = (char)81;
  v = (double)p_13;
  while (! (p_5 + -704549945) / ((int)(- ((double)v_17 - v)) + 184) != 62425) {
    v_23 = v_19 * 39272;
    v_21 = (unsigned char)(~ ((long long)v_25 * -31329LL + (long long)(
                              v_15 / 100)));
    v_19 = (int)((unsigned int)(0 / ((int)v_21 + 236)) % (((unsigned int)v_21 % 3455842415U - (unsigned int)(
                                                           (double)v_23 + p_11)) + 207U));
    v = (double)p_9[2][2];
  }
  while_0_break: ;
  if (26112L <= (long)((int)(- v + (3.29900105681e+38 - p_11)) + (-45 + 
                                                                  (int)p_13 % (
                                                                  v_15 + 472)))) {
    v = (double)(- ((p_5 + (int)v_7) + -21));
    result = (float)v;
    result = (float)(- (p | (int)result));
  }
  else result = (float)(~ p_9[1][3]);
  return result;
}


