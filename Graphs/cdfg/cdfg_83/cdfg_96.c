#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 544159327
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p[4], unsigned int p_4[1][5][3],
                 unsigned long p_6, unsigned short p_9, float p_11)
{
  unsigned short v_17;
  unsigned long long v_15;
  long v_13;
  short v;
  unsigned int result;
  v_17 = (unsigned short)p_4[0][3][1];
  v_15 = (unsigned long long)p_9;
  v_13 = (long)p_9;
  v = (short)10725;
  result = p_4[0][2][0];
  while ((unsigned long)v > - (13UL + p_6)) {
    v_15 *= (unsigned long long)((unsigned long)v_13 - 239128197UL);
    v_17 = (unsigned short)(~ (-90 << ((int)p_9 & 7)) - (int)(- (- v_17)));
    v_13 = (long)(((unsigned int)(- p_11) >> (p_4[0][1][2] & 31U)) * (
                  (unsigned int)((int)p_9 + 38162) - (result - p_4[0][4][1])));
    v = (short)v_13;
  }
  while_0_break: ;
  if (! ((2347UL + p_6) / 84UL) < (unsigned long)(((unsigned int)v ^ 343005956U) % (unsigned int)(
                                                  (int)(! p_9) + 689) & ! (
                                                  (unsigned int)p_11 / (
                                                  p_4[0][3][0] + 694U)))) 
    result = (unsigned int)3.28917977275e+38 % ((unsigned int)(-8443207740.35 * (double)p[0]) * ~ p_4[0][0][1] + 754U);
  else result = 4294967208U;
  return result;
}


