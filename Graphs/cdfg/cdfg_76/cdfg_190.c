#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 634370349
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(char p, short p_5, short p_7, long p_9)
{
  unsigned int v_17;
  long v_15;
  long long v_13;
  float v_11;
  short v;
  unsigned long result;
  v_17 = (unsigned int)p_9;
  v_15 = (long)p_7;
  v_13 = -37083LL;
  v_11 = (float)p_7;
  v = (short)-18801;
  result = 4294961034UL;
  while ((unsigned long long)(111635335U / (unsigned int)(((int)v * (int)p >> 15) + 845)) != 
         ((unsigned long long)((int)p_5 * (int)p_7) - (18446744073709505709ULL + (unsigned long long)p)) + (unsigned long long)(
         52UL * result + (unsigned long)((long)p_5 - p_9))) {
    v_11 = v_15 + (long)((float)v_13 * (v_11 * -867337792.f));
    v_13 = -917051798LL;
    v_15 = (long)v_17;
    result = 31233UL;
  }
  while_0_break: ;
  result = result;
  return result;
}


