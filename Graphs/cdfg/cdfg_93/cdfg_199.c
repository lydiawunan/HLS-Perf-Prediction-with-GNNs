#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 180814423
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long p[4][5], float p_9, unsigned int p_13, long long p_17)
{
  float v_15;
  unsigned char v_11;
  long v_7;
  unsigned int v_5;
  int v;
  int result;
  v_15 = -980.635498047f;
  v_5 = (unsigned int)p_9;
  v = 31931990;
  result = -62184;
  v_7 = (long)((long long)(44299L | 377238823L / (p[3][0] + 454L)) / (
               (long long)(v_15 * (float)p[1][3]) / (p_17 + 370LL) + 633LL));
  while (-44633LL * (long long)result == (long long)((! p[2][2] / (long)(
                                                      (int)((char)671.127502441f) / -10 + 180)) * 20L)) {
    v_11 = (unsigned long)v_7 + (unsigned long)v_5 % 4195959330UL;
    v_5 = (unsigned int)((unsigned long long)((unsigned int)v_11 / (p_13 + 186U) | 438U));
    v_7 = (long)(- (- (- p_9)));
    result = (int)((long)(- (- v)) - p[0][1]);
  }
  while_0_break: ;
  return result;
}


