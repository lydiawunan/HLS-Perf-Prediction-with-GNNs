#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 14834238
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(long p[1], unsigned int p_7, unsigned int p_9, unsigned int p_21,
           long long p_23)
{
  unsigned long v_27;
  unsigned short v_25;
  unsigned char v_19;
  unsigned short v_17;
  unsigned int v_15;
  unsigned char v_13;
  double v_11;
  long long v_5;
  unsigned short v;
  double result;
  v_27 = (unsigned long)p_9;
  v_25 = (unsigned short)p_23;
  v_19 = (unsigned char)161;
  v_15 = p_9;
  v_13 = (unsigned char)77;
  v_11 = (double)p[0];
  result = (double)p_23;
  if ((unsigned long)((unsigned int)v_25 * v_15) != - ((4068098551UL - v_27) ^ (unsigned long)p[0])) {
    v_5 = (long long)(v_15 - (unsigned int)(v_11 + 977483976.) / ((v_15 - 4294967276U) + 687U));
    v_11 = (double)v_13;
    v = (unsigned short)(- (- result / (- v_11 + 560.)));
  }
  else {
    v = (unsigned short)((long long)((unsigned int)(-350.989460278 + v_11) / (
                                     p_21 + 364U)) / (! (~ p_23) + 38LL));
    v_17 = (unsigned short)(- (~ (! -385024824L)));
    v_5 = (long long)((int)(~ (! v_17)) >> (- (-60648LL + (long long)v_19) & 15LL));
  }
  result = (double)(((long long)(p[0] * (long)v) / ((v_5 + 65458LL) + 15LL)) * (long long)(
                    (p_7 % 4294967225U) % (p_9 + 174U)));
  return result;
}


