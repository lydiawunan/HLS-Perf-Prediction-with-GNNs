#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 341629460
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, short p_11, unsigned char p_15, short p_17)
{
  float v_13;
  signed char v_9;
  unsigned long long v_7;
  unsigned long v_5;
  unsigned long v;
  long result;
  v_13 = 1.75497483883e+38f;
  v_9 = (signed char)-22;
  v = 3640035935UL;
  v_7 = (unsigned long long)(- (- v_13 * (float)((int)p_15 / ((int)p_11 + 275)) - (float)(
                                (int)(! v_9) / ((int)p_17 + 512))));
  v_9 = (signed char)v_7;
  v_5 = (unsigned long)(! (! ((int)v_9 % ((int)p_11 + 66)) * (int)p_11));
  result = (long)(- ((unsigned long long)(v + 218UL) * ((p % (p + 437ULL)) * (unsigned long long)(
                                                        v_5 >> (v_7 & 31ULL)))));
  return result;
}


