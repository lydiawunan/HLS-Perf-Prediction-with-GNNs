#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 518069745
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(signed char p, unsigned short p_4[1], float p_11,
          unsigned short p_15, int p_17)
{
  short v_19;
  unsigned int v_13;
  unsigned int v_9;
  unsigned long v_7;
  unsigned long long v;
  float result;
  v_13 = 4294918785U;
  v_9 = (unsigned int)p_15;
  v_7 = (unsigned long)p_11;
  v = (unsigned long long)p_17;
  result = -3782529792.f;
  v_19 = (short)-26583;
  while ((unsigned long long)(- (! ((long)p / -2176L))) <= 18446744073709507157ULL % (unsigned long long)(
                                                           (69 & (int)p_4[0]) + 98) + v) {
    v_9 = (unsigned long)v_9 - (v_7 - 3942415673UL);
    result = (float)(~ ((int)((float)p_17 / (result + 70.f)) & ((int)v_19 + 54)));
    v_7 = (unsigned long)(- p_17);
    v = (unsigned long long)(((unsigned int)(p_11 * 17952.f) + ! v_13) ^ (unsigned int)(- (
                             (int)p_15 * 492333267)));
  }
  while_0_break: ;
  return result;
}


