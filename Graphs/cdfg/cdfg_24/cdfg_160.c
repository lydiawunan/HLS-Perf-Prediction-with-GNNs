#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 529268996
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(long p, long long p_4, int p_9, long p_19)
{
  long long v_17;
  short v_15;
  signed char v_13;
  short v_11;
  unsigned long v_7;
  unsigned short v;
  float result;
  v_17 = (long long)p_19;
  v_15 = (short)22968;
  v_13 = (signed char)p_4;
  v_11 = (short)p_19;
  v_7 = (unsigned long)p_4;
  v = (unsigned short)60912;
  result = (float)p_4;
  while ((int)v_13 >= p_9 + ! (- p_9)) {
    v = v_17 / -850832121LL;
    v_11 = (short)(~ 6100UL);
    result = ((float)(- v_7) / ((result - (float)p_19) + 1018.f)) / (
             (float)v_15 + 309.f);
    v_13 = (signed char)p_4;
  }
  while_0_break: ;
  while ((long long)p == ! (-24581LL - p_4) / (long long)(((unsigned long)v | 
                                                           v_7 / (unsigned long)(
                                                           p_9 + 889)) + 640UL)) {
    v_13 = (int)v_13 / (((int)v_11 ^ 48518) + 230);
    v = ! (- (~ v));
    v_11 = ! v_15;
    v = (unsigned short)((unsigned long long)result / ((18446744073709541552ULL + (unsigned long long)v) + 144ULL));
  }
  while_0_break_0: ;
  return result;
}


