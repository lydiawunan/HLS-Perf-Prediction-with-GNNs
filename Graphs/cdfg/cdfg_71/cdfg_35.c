#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 710665190
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, char p_9, unsigned short p_11, int p_13[5][2][4],
           unsigned short p_15)
{
  double v_21;
  unsigned int v_19;
  unsigned long long v_17;
  long long v_7;
  float v_5;
  unsigned long long v;
  double result;
  v_21 = (double)p_9;
  v_19 = (unsigned int)p_11;
  v_17 = (unsigned long long)p_9;
  v_5 = (float)p_11;
  v = (unsigned long long)p_11;
  result = 3197892095.63;
  if ((~ v_17 - 360429723ULL) % (unsigned long long)((unsigned int)(~ p_15) / (
                                                     ! v_19 + 291U) + 45U) <= (unsigned long long)(
      (long long)(4294953037UL + (unsigned long)((int)((char)v_21) / -93)) * 1983511121540794020LL)) {
    v_7 = -64524LL;
    v_5 = (float)(25033 << (((long long)p + (long long)p_11 * v_7) & 15LL));
    v = (unsigned long long)((float)((int)(! p_9) << ((int)(- p) & 7)) / (
                             v_5 + 293.f));
  }
  else {
    result = (double)v_5;
    v_5 = - (- v_5 - (float)p_13[0][1][0]);
    v_7 = (long long)((int)p_11 + (173 + ((int)p_9 + p_13[1][0][3])));
  }
  while (v - (unsigned long long)p <= 52980ULL) {
    v_7 /= (long long)(v_5 - 1.84467440737e+19f) + 528LL;
    result = (double)(~ (40821 - 101 / ((int)((char)2.2925460195e+38) + 460)));
    v = (unsigned long long)p_9;
    v = v;
  }
  while_0_break: ;
  return result;
}


