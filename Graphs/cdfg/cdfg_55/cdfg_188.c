#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 252842984
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, short p_4, long p_7, long long p_19[1][4],
                 unsigned long long p_23)
{
  unsigned long long v_21;
  unsigned short v_17;
  long long v_15;
  long long v_13;
  char v_11;
  short v_9;
  unsigned long v;
  unsigned int result;
  v_21 = p_23;
  v_17 = (unsigned short)15043;
  v_15 = p_19[0][1];
  v_11 = (char)23;
  v_9 = (short)-12323;
  v = 12066UL;
  result = 61039U;
  v_21 = ((v_21 + (unsigned long long)v_9) - 4294907095ULL) - (unsigned long long)(
         ! p_19[0][3] % (long long)(! result + 921U));
  while ((double)((unsigned long)((int)p % ((int)p_4 + 118)) - (v - (unsigned long)p_7)) - -749.019365409 != (double)(
         ~ result / (unsigned int)((int)v_9 + 339))) {
    v_13 = (long long)(((unsigned long long)(v_15 - (long long)v_17) & (
                        (unsigned long long)p_19[0][0] | v_21)) * p_23);
    result = (unsigned int)(~ (((int)v_11 * 9637) * ((int)p_4 ^ (int)p_4)));
    v = (unsigned long)((long long)(~ ((int)v_9 + 745)) - ~ v_13);
  }
  while_0_break: ;
  return result;
}


