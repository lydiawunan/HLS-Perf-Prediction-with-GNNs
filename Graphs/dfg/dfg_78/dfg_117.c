#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 934448659
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p, signed char p_7[3])
{
  long long v_15;
  long v_13;
  long v_11;
  long long v_9;
  unsigned short v_5;
  long long v;
  signed char result;
  v_15 = 592331476LL;
  v_13 = -64033L;
  v_9 = -38023LL;
  v = (long long)p_7[2];
  v_5 = (unsigned short)91;
  v_11 = (long)((v + ((long long)v_13 + v)) / (v_15 + 19LL));
  result = (signed char)(~ ((long long)p % (v * (long long)v_5 + 926LL)) + 
                         ! ((long long)p_7[1] / (v_9 + 922LL)) / (long long)(
                         v_11 + 373L));
  result = result;
  return result;
}


