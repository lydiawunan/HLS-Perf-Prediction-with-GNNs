#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 536483878
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p, float p_9[5][4], signed char p_11, long long p_17,
          unsigned long p_21)
{
  unsigned short v_19;
  signed char v_15;
  unsigned short v_13;
  long long v_6;
  unsigned int v_4;
  unsigned char v;
  float result;
  v_19 = (unsigned short)6058;
  v_6 = p_17;
  v = (unsigned char)p_9[2][0];
  v_4 = (unsigned int)(~ ((unsigned long)(! v) ^ p * 12510UL));
  if ((unsigned long long)(! (- ((long long)v_4 * -412901654LL))) > - (
                                                                    (unsigned long long)p_21 - 18446744073144929726ULL) - (unsigned long long)p_21) {
    v_4 = (unsigned int)((float)(v_6 % -769732073LL << (p & 63UL)) / (
                         - p_9[3][3] / 524.f + 41.f));
    v = (unsigned char)(- (! v_4));
    result = (float)(~ (- (~ v)));
  }
  else {
    v_13 = (unsigned short)(! ((long long)p_11 * p_17) >> ((int)v_19 / -56060 & 63));
    v_15 = (signed char)(! (-32693 >> 7));
    result = (float)(-13 % (((int)p_11 + (int)v_13) * (int)v_15 + 910));
  }
  return result;
}


