#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 877898759
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p, unsigned short p_7, double p_9, double p_15,
                  double p_17)
{
  float v_23;
  unsigned short v_21;
  unsigned short v_19;
  unsigned char v_13;
  unsigned long v_11;
  signed char v_4;
  long v;
  unsigned long result;
  v_23 = (float)p_7;
  v_21 = (unsigned short)20048;
  result = (unsigned long)p_17;
  v_11 = (unsigned long)(((float)(result / 37242UL) + - v_23) - v_23);
  if (3422ULL < (unsigned long long)(-2092L / (~ ((long)v_23 - p) + 726L))) {
    v_4 = (signed char)(- ((int)p_7 / ((int)((unsigned short)((double)p_7 / (
                                                              p_9 + 385.))) + 282)));
    v = 27927L;
    result = (unsigned long)((44829L / (v + 409L) - (long)(~ v_4)) + 
                             (v % (p + 766L)) % (p + 987L));
  }
  else {
    v_19 = (unsigned short)((double)(((int)((short)p_17) & 2935) * (int)v_21) * - p_15);
    v_13 = (unsigned char)(749016768.f / (-512.601806641f / ((float)(- v_19) + 348.f) + 514.f));
    result = (v_11 % 363191017UL) * (unsigned long)((int)v_13 % -47450) >> (
             (unsigned long)(p_15 * 60632. + - p_17) & 31UL);
  }
  return result;
}


