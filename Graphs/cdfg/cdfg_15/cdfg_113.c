#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 825528674
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p, double p_4, long p_7, long p_11, long p_19)
{
  long v_21;
  unsigned int v_17;
  signed char v_15;
  float v_13;
  signed char v_9;
  unsigned short v;
  float result;
  v_21 = (long)p_4;
  v_17 = (unsigned int)p_4;
  v_15 = (signed char)91;
  v_13 = 5660450816.f;
  v = (unsigned short)44365;
  result = 2.3345004776e+38f;
  v_9 = (signed char)((unsigned long)p_11 * ((p * (unsigned long)p_19) * (
                                             4294938515UL - (unsigned long)-309.868339861)));
  while ((double)(- (p | (unsigned long)p_4) ^ (unsigned long)((long)v - (
                                                               p_7 + (long)v))) > 
         (double)(- ((long)v_9 / (p_11 + 220L))) / 1.2629502041e+38) {
    v_17 %= 4294960729U;
    v_15 = (signed char)((double)((float)((int)v_15 + (int)((signed char)v_13)) / (
                                  - v_13 + 852.f)) + p_4);
    v = (unsigned short)(! ((unsigned long)p_11 * p) / (unsigned long)(
                         0L % (v_21 + 11L) + 942L));
    v_9 = (signed char)((3851708284UL + p) / (unsigned long)(- p_7 + 258L) - (unsigned long)(~ (
                        p_19 + p_19)));
  }
  while_0_break: ;
  return result;
}


