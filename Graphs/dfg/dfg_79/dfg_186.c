#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 873392070
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p[2][2][2], int p_7, unsigned long long p_11[1],
                  float p_17, unsigned long p_19)
{
  unsigned long v_15;
  unsigned long v_13;
  double v_9;
  short v_4;
  unsigned long v;
  unsigned long result;
  v_15 = 161758838UL;
  v_9 = (double)p_19;
  v_4 = (short)18264;
  v_13 = (unsigned long)v_9;
  v_9 = (double)(((208ULL - p_11[0]) * (unsigned long long)(v_13 * v_15)) * (unsigned long long)(
                 (unsigned int)p_17 + 4294956282U) & (unsigned long long)p_19);
  v = - ((unsigned long)v_4 / 3695644446UL - (unsigned long)(p[1][0][0] % (long)(
                                                             p_7 + 257))) * (unsigned long)(! (
      ((unsigned int)v_9 - 841999620U) % (unsigned int)((15 - (int)((unsigned char)674.797483446)) + 330)));
  result = (unsigned long)((float)(! (! v / 4294942224UL)) / 9539202048.f);
  return result;
}


