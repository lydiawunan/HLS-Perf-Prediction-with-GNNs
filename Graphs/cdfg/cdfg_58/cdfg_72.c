#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 175915600
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long p, unsigned short p_7, long long p_9,
                  unsigned char p_11, char p_13)
{
  int v_23;
  long long v_21;
  long v_19;
  unsigned long long v_17;
  float v_15;
  unsigned long v_4;
  long long v;
  unsigned char result;
  v_21 = (long long)p_13;
  v_19 = -581374680L;
  v_17 = (unsigned long long)p_13;
  v_15 = -1.59225586119e+38f;
  v_4 = (unsigned long)p_13;
  v = -182120449LL;
  while ((float)(v / (p_9 + 109LL) - (long long)((int)p_11 / ((int)p_13 + 204))) * (
         15883.f * ((float)p_11 - v_15)) == (float)(~ ((unsigned long long)(
                                                       (unsigned long)p_13 - 16047UL) + v_17))) {
    v_23 = v_21 * 38LL;
    v_21 = (long long)(p / (unsigned long)(- (! v_23) + 1022));
    v_17 = (unsigned long long)(- (~ ((int)v_15 % (v_23 + 317))));
    v_15 = (float)(! ((69UL - v_4) * (unsigned long)(~ v_19)));
  }
  while_0_break: ;
  result = (unsigned char)(((v ^ (long long)v_4) >> (- p & 63UL)) - (long long)p_7);
  return result;
}


