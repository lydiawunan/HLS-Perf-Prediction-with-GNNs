#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 638988794
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p, short p_5, unsigned short p_7[4][3][3],
         signed char p_17)
{
  int v_15;
  unsigned char v_13;
  unsigned long v_11;
  float v_9;
  int v;
  long result;
  v_15 = (int)p_17;
  v_13 = (unsigned char)72;
  v_11 = (unsigned long)(-24988 * (int)p);
  v_9 = (float)(! (v_11 / (v_11 + 166UL)) % (unsigned long)((int)(! p_7[1][2][2]) % (
                                                            ((int)v_13 + (int)v_13) + 893) + 466) + 
                (unsigned long)v_15 % (((4294922043UL + (unsigned long)p_17) - 3984835590UL) + 436UL));
  v = ! (- ((int)p_5 / ((int)p_7[1][0][2] + 200) + (int)v_9));
  result = (long)(! ((long long)v + (38171LL << ((int)p & 63))));
  return result;
}


