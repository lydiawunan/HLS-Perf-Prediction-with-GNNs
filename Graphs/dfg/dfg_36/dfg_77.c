#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 341801774
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, unsigned long long p_9, unsigned long p_15)
{
  unsigned char v_13;
  unsigned long v_11;
  unsigned int v_7;
  unsigned long long v_4;
  unsigned int v;
  unsigned short result;
  v_13 = (unsigned char)216;
  v_11 = 61067UL;
  v_7 = (unsigned int)p;
  v = 3698105995U;
  v_7 = (unsigned int)(4071487294ULL * (- ((unsigned long long)p_15 - p_9) - (unsigned long long)(
                                        (428905789UL ^ (unsigned long)v_7) * 4294950315UL)));
  v_4 = (unsigned long long)p;
  v_4 = ((p_9 & v_4) * (v_4 / (p_9 + 912ULL)) - ~ p_9) * (unsigned long long)v_13;
  result = (unsigned short)((unsigned long long)(! (~ v)) / (v_4 % (unsigned long long)(
                                                             ~ p + 972) + 964ULL) << (
                            (unsigned long long)v_7 * (p_9 - (unsigned long long)(
                                                       v_11 | 223UL)) & 63ULL));
  return result;
}


