#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 636519845
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p, long long p_4[4][2][4],
                       unsigned short p_6, signed char p_8, long long p_10)
{
  unsigned char v_17;
  long long v_15;
  float v_13;
  float v;
  unsigned long long result;
  v_17 = (unsigned char)p_8;
  v_15 = (long long)p_8;
  v_13 = 2832732672.f;
  v = 181.090713501f;
  result = (unsigned long long)p_6;
  while ((unsigned long long)(~ ((long long)((float)p_4[3][0][0] + v_13) + v_15)) >= 
         p * (643511143ULL - (35ULL - result))) {
    v_13 = (int)v_17 + (int)((unsigned char)-323.999445564);
    result = p;
    v = (float)p_8;
    v_15 = (long long)(! ((23449ULL + result) * (unsigned long long)(- v_13)));
  }
  while_0_break: ;
  if (- (~ (63ULL - p)) <= (unsigned long long)v) {
    result = (unsigned long long)(! (~ (p_4[1][0][2] + 5103249137LL)));
    result = - (! result ^ (p - 6108ULL));
  }
  else result = (unsigned long long)(((int)p_6 - ((int)p_8 ^ (int)p_6)) % (
                                     (int)(~ p_8) + 539));
  return result;
}


