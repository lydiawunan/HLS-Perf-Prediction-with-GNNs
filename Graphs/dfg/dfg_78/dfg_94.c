#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 321929328
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p, long long p_11, unsigned long p_13, float p_15, char p_19)
{
  unsigned int v_17;
  double v_9;
  char v_6;
  unsigned long v_4;
  signed char v;
  short result;
  v_17 = 52592U;
  v_4 = 154061646UL;
  v_9 = (double)(p_13 << (~ ((unsigned int)p_15 - v_17) / (unsigned int)(
                          (int)p_19 + 189) & 31U));
  v_6 = (char)p_11;
  v = (signed char)((unsigned long)((-7899 >> (4294915316UL / (v_4 + 763UL) & 15UL)) % (
                                    (int)(~ v_6) % ((p + p) + 539) + 405)) ^ 
                    3489573258UL / ((unsigned long)v_9 + 242UL));
  result = (short)v;
  return result;
}


