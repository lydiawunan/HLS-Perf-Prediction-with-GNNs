#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 741914261
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p[2][2][2], int p_4, char p_7[1][2], long p_9, signed char p_13)
{
  long v_19;
  long v_17;
  long v_15;
  long v_11;
  float v;
  long result;
  v_19 = (long)p_7[0][1];
  v_17 = (long)p_7[0][0];
  v_15 = -590736725L;
  v_11 = (long)p_7[0][1];
  v = 470.560089111f;
  result = p[0][0][0];
  while (~ (4153240298ULL + (unsigned long long)(v_11 / 156L)) > (unsigned long long)(- (! (
         result >> ((int)p_7[0][0] & 31))))) {
    v_11 = v_19 - -31L;
    v = (float)((-37585L % (p_9 + 958L) ^ (long)v) - - (v_11 / 39L));
    v_11 = -751362678L;
    result = -21688973L;
  }
  while_0_break: ;
  if (p_9 > (long)((v - (float)v_11) + (float)(76 | (int)p_13)) + v_15 * (
                                                                  v_17 << 16ULL)) 
    result = - p[0][0][0];
  else {
    v = (float)p_7[0][1];
    result = (long)(! p_4 / 63479) / (p[1][0][0] % ((long)v + 647L) + 824L);
  }
  return result;
}


