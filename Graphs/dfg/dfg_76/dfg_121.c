#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 358311214
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, float p_4, long long p_6[5][3], unsigned long p_9,
        signed char p_11)
{
  float v_17;
  unsigned long long v_15;
  long v_13;
  signed char v;
  int result;
  v_17 = p_4;
  v_15 = 18446744073709513169ULL;
  v_13 = -589571400L;
  result = (int)(((unsigned long long)(((unsigned long)p_11 * 234808302UL) * (unsigned long)(~ v_13)) + 
                  (v_15 - 18446744073383455180ULL) % ((unsigned long long)(
                                                      1.84467440737e+19f + v_17) + 735ULL)) * (unsigned long long)p_9);
  v = (signed char)(- (- 8308353507.23));
  result = (int)(716769181UL + ((unsigned long)result + ~ (p_9 / 4294961612UL)));
  result = (! result * ((int)p % (result + 471)) + (int)(- p_4 / ((float)(
                                                                  (long long)result * p_6[2][2]) + 203.f))) / (
           (int)v + 395);
  return result;
}


