#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 956722517
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p[4], signed char p_4, signed char p_7[1][5],
                   signed char p_9, long long p_15)
{
  unsigned short v_21;
  float v_19;
  float v_17;
  double v_13;
  signed char v_11;
  double v;
  unsigned short result;
  v_21 = (unsigned short)11774;
  v_19 = (float)p_4;
  v_17 = 848.345336914f;
  v_11 = p_4;
  v_11 = (signed char)((long long)(v_19 * ((float)v_11 + -4620868608.f) - (float)(
                                   ((long long)v_21 - p[3]) % 96566569LL)) << 30LL);
  v = (double)((! (p_15 % -15236LL) - (long long)p_4) + (~ ((long long)p_9 - p[2]) | 
                                                         (long long)p_9 * (
                                                         p[1] / 2600LL)));
  v_13 = (double)(191.f - ((float)p_15 * v_17 - (float)p_4) * 14577.f);
  result = (unsigned short)(((! p[2] - (long long)p_4) - (long long)(
                             v / ((double)p_7[0][2] + 1001.) - (double)(
                             (int)p_9 >> ((int)v_11 & 7)))) - (long long)(
                            ((int)((signed char)-291.903584883) / 60) % (
                            ! (-25498 / ((int)v_13 + 80)) + 834)));
  return result;
}


