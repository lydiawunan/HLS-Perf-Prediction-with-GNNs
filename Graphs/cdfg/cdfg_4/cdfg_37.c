#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 53017767
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned int p, long long p_4, float p_11, char p_17,
                   signed char p_19[2][3][4])
{
  unsigned long long v_21;
  signed char v_15;
  short v_13;
  unsigned long v_9;
  long v_7;
  short v;
  unsigned short result;
  v_21 = (unsigned long long)p_17;
  v_13 = (short)-21375;
  v_7 = (long)p_17;
  v = (short)p_4;
  result = (unsigned short)5595;
  v_9 = (unsigned long)(~ ((unsigned long long)(50 - (int)p_19[1][1][0]) * (
                           (unsigned long long)result * v_21)));
  while (40346U % (p + 162U) >= 1U) {
    v_15 = v_9 + (unsigned long)((float)v_7 / 3.13173080786e+38f);
    v_9 = (unsigned long)(! (((int)((short)p_11) / ((int)v_13 + 1003)) / (
                             ((int)v_15 ^ (int)p_17) + 368)));
    v_7 = -11106L;
    v = (short)(((long long)((unsigned long)result - 3462263936UL) - 147517604LL) / 691LL);
  }
  while_0_break: ;
  return result;
}


