#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 691996384
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p, int p_4, signed char p_7, unsigned short p_9,
                unsigned char p_11[5][4])
{
  long v_17;
  unsigned int v_15;
  float v_13;
  unsigned long v;
  signed char result;
  v_13 = 2.53900192891e+38f;
  v_17 = (long)p_7;
  v = (unsigned long)v_17;
  v_15 = (unsigned int)v_13;
  result = (signed char)(((unsigned long)(p - (long)p_4) % ((v << ((int)p_7 & 31)) + 380UL)) / (unsigned long)(
                         (int)p_9 + 968) - (unsigned long)((float)((int)p_11[4][0] % (
                                                                   -9791 % (
                                                                   (int)((short)v_13) + 240) + 231)) / (
                                                           (- v_13 + (float)(- v_15)) + 51.f)));
  return result;
}


