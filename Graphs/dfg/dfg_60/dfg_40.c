#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 557659772
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p, unsigned long p_4, int p_7, unsigned int p_11[1],
          short p_15)
{
  unsigned char v_13;
  unsigned short v_9;
  long v;
  float result;
  v_13 = (unsigned char)8;
  v_9 = (unsigned short)p_15;
  v_9 = (unsigned short)((((p + (unsigned long)p_11[0]) + (unsigned long)(
                           (int)v_13 - (int)v_9)) % 24932UL) / (unsigned long)(
                         ((unsigned int)(! v_9) - 886801975U) + 342U));
  v = (long)(~ (~ ((94 % ((int)((char)1867004698.21) + 936)) % ((p_7 - (int)v_9) + 486))));
  result = (float)(~ ((p % (p_4 + 909UL)) % 25UL - (unsigned long)(~ (
                      v * 63584L))));
  return result;
}


