#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 820410396
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, int p_4, unsigned long p_6, short p_11)
{
  float v_15;
  unsigned char v_13;
  int v_9;
  long v;
  short result;
  v_13 = (unsigned char)4;
  v_9 = 430688380;
  v = (long)p_6;
  result = (short)-11200;
  v_15 = (float)(-56216LL * (long long)(! ((int)result + (int)p_11)));
  if ((float)(! (4294927809UL + (unsigned long)v) % (unsigned long)((
                                                                    v_9 / 205) * (
                                                                    (int)p_11 % 43396) + 810)) <= - (
      (float)((unsigned long long)v_13 * 35017ULL) / (v_15 * 802294464.f + 747.f))) 
    result = (short)((unsigned int)p * ((unsigned int)p + (unsigned int)p * 3943464604U));
  else result = (short)(! (- ((unsigned long)p_4 / (p_6 + 821UL))));
  return result;
}


