#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1055702041
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, long long p_9, unsigned long p_17)
{
  signed char v_21;
  double v_19;
  signed char v_15;
  unsigned char v_13;
  unsigned short v_11;
  float v_7;
  long long v_5;
  unsigned int v;
  unsigned long long result;
  v_21 = (signed char)-25;
  v_19 = 2180780827.31;
  v_15 = (signed char)p_9;
  v_13 = (unsigned char)p_17;
  v_11 = (unsigned short)1712;
  v_7 = -7356931072.f;
  v_5 = 4375LL;
  v = (unsigned int)p;
  result = 18446744073709534467ULL;
  while (~ (result * (unsigned long long)p_17) - ((unsigned long long)(~ v_13) & result) > 
         ((unsigned long long)p - result % (unsigned long long)(p_17 + 68UL)) >> (
         p_17 & 63UL)) {
    v_15 = (unsigned int)v_21 + 4263288948U;
    v_11 = (unsigned short)((2458645690LL + p_9) / (long long)((int)(~ p) + 166));
    v = (unsigned int)v_7;
    result = (unsigned long long)(10301009.f / ((float)p_17 * v_7 + 120.f) - (float)(! (
                                  (long long)p_17 + v_5)));
  }
  while_0_break: ;
  while ((long long)(~ p) < - ((long long)v + v_5) % ((long long)((float)(! p) - 
                                                                  v_7 / (
                                                                  (float)p_9 + 446.f)) + 975LL)) {
    v_11 = (int)v_13 - (int)v_11 * -12487;
    v = (unsigned int)v_19;
    v_7 = (float)((unsigned long)((32371U * v) / (unsigned int)((int)v_15 + 613)) % (
                  (p_17 << ((unsigned long)((float)v / -1.74139028935e+38f) & 31UL)) + 71UL));
    v_5 = p_9 | (long long)(14865 | (int)p);
  }
  while_0_break_0: ;
  return result;
}


