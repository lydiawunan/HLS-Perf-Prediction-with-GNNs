#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 96664722
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, unsigned int p_5, signed char p_7,
                unsigned long long p_9, short p_11[1][5][3])
{
  unsigned char v_19;
  short v_17;
  signed char v_15;
  double v_13;
  short v;
  signed char result;
  v_19 = (unsigned char)247;
  v_17 = (short)p;
  v_13 = (double)p_11[0][3][0];
  v_15 = (signed char)(58.f * ((float)((int)(! p_7) * ((int)p_11[0][3][0] % (
                                                       (int)((short)v_13) + 4))) * (
                               -905.879333496f * (float)(p_5 << (p_5 & 31U)))));
  v = (short)((unsigned int)(- (- (v_13 / ((double)v_15 + 540.)))) * (
              ((unsigned int)v_17 + p_5 * (unsigned int)v_19) - (unsigned int)p_11[0][4][2]));
  v = (short)(~ (! ((int)p_7 >> (p_9 & 7ULL))) / ((((int)p_11[0][1][2] - 
                                                    (int)v * (int)p_7) + (int)(- p_7)) + 402));
  result = (signed char)(- ((double)p * ((double)((unsigned int)v + p) * (
                                         623.8813203 - (double)p_5))));
  return result;
}


