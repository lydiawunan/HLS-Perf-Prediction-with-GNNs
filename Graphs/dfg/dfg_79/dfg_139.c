#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 547595763
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, unsigned int p_4[5], double p_6, int p_9,
                   signed char p_19)
{
  float v_21;
  float v_17;
  short v_15;
  unsigned long v_13;
  signed char v_11;
  long v;
  unsigned short result;
  v_21 = (float)p;
  v_17 = -7442476032.f;
  v_11 = (signed char)p_9;
  v_15 = (short)(- v_17 + - ((float)p_19 / ((v_21 + 9028603904.f) + 641.f)));
  v_13 = (unsigned long)(~ p_9);
  v = (long)((unsigned long)(((double)((int)p_6 - p_9) - -8903821752.76) + 400170080589.) * (
             (unsigned long)((int)v_11 << 3UL) & ! v_13 / (unsigned long)(
                                                 (int)(~ v_15) + 246)));
  result = (unsigned short)((unsigned long)(- ((unsigned int)p + ((unsigned int)p + p_4[0]))) / (unsigned long)(
                            (long)p_6 * v + 443L));
  return result;
}


