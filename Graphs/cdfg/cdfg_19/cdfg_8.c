#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 226850587
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long long p, unsigned int p_5, unsigned long long p_9,
          long long p_17, unsigned short p_19)
{
  long long v_23;
  short v_21;
  double v_15;
  unsigned int v_13;
  long v_11;
  short v_7;
  float v;
  short result;
  v_21 = (short)8900;
  v_15 = 2.71954308282e+38;
  v_13 = 3355982261U;
  v_11 = (long)p;
  v_7 = (short)p_5;
  v = -8.46039104462f;
  result = (short)-30588;
  while ((long long)((double)v + - (548.82485062 / ((double)p_9 + 87.))) <= 
         (long long)(! result) / (1688052501LL % (p_17 + 862LL) + 971LL) + 
         ((long long)v_15 % (p_17 + 304LL)) * (-9053LL / (p_17 + 650LL))) {
    v_23 = (unsigned long long)v_21 % 32893ULL;
    v_13 = (unsigned int)v_23;
    v_21 = (short)(! (~ (~ p_17)));
    result = (short)p_5;
  }
  while_0_break: ;
  if ((long)p_19 < v_11) {
    v_11 = -10578L;
    v = (float)((double)(((long long)v_11 / -52478LL) / (long long)(~ v_13 + 989U)) * - (
                v_15 + (double)p_17));
    result = (short)((unsigned long long)(p << ((long long)v / -33340LL & 63LL)) - 
                     (unsigned long long)(! p_5) / ((unsigned long long)v_7 / (
                                                    p_9 + 56ULL) + 890ULL));
  }
  else result = (short)75;
  return result;
}


