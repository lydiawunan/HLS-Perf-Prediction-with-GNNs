#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 839602151
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, long p_4, unsigned long long p_7, signed char p_11,
                 int p_17)
{
  unsigned char v_15;
  unsigned int v_13;
  unsigned int v_9;
  short v;
  unsigned int result;
  v_15 = (unsigned char)p_4;
  v_13 = 4294928417U;
  v_9 = 4131546874U;
  v = (short)p_17;
  result = 58U;
  v_13 = (((v_13 - result) + result * (unsigned int)v_15) % (unsigned int)(
          (int)v + 408)) / (unsigned int)(~ (((int)p_11 & -81) * ((int)v / (
                                                                  p_17 + 486))) + 945);
  v = (short)(((unsigned long)((unsigned int)((double)v * -1.07123958607e+38) % (
                               v_9 + 482U)) - - ((unsigned long)p_11 % 20919UL)) / (unsigned long)(
              (unsigned int)(- (-31625 + (int)p)) * ((unsigned int)p_11 - - v_13) + 330U));
  result = (unsigned int)((unsigned long long)((long)p + p_4 / (long)(
                                                         ((int)v + (int)v) + 256)) / (
                          p_7 + 376ULL));
  return result;
}


