#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 562897850
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, unsigned long long p_9, unsigned char p_11,
          unsigned long long p_17, unsigned short p_23)
{
  unsigned long long v_21;
  float v_19;
  long v_15;
  unsigned int v_13;
  unsigned long long v_7;
  short v_5;
  float v;
  short result;
  v_21 = (unsigned long long)p_11;
  v_19 = (float)p_11;
  v_15 = 17048L;
  v_13 = (unsigned int)p_17;
  v_7 = 123ULL;
  v_5 = (short)p_9;
  v = (float)p_17;
  while ((float)((unsigned long long)(~ ((unsigned long)v_13 & (unsigned long)v_15)) ^ p_17) < v_19) {
    v = v_21 + 18446744073709551556ULL;
    v_19 = (float)p;
    v_21 = (unsigned long long)((double)((unsigned long)(! p_23) / ((
                                                                    (unsigned long)p_11 | 45700UL) + 373UL)) / (
                                ((double)v_5 - 2859558527.72) / ((double)(
                                                                 p_9 + (unsigned long long)p_23) + 557.) + 97.));
    v_13 = (unsigned int)(7805ULL - 3464154478ULL / (v_7 * (unsigned long long)p + 176ULL));
  }
  while_0_break: ;
  result = (short)((unsigned long long)((v + (float)p) + (float)v_5) << (
                   v_7 & 63ULL));
  return result;
}


