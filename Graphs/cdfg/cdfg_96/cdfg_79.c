#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 650983212
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(double p[1][1][5], signed char p_5, short p_11,
                unsigned long long p_13, double p_17)
{
  unsigned long v_21;
  double v_19;
  long long v_15;
  char v_9;
  unsigned short v_7;
  unsigned long v;
  signed char result;
  v_21 = (unsigned long)p_5;
  v_19 = p_17;
  v_9 = (char)p_13;
  v_7 = (unsigned short)23238;
  v = (unsigned long)p_17;
  result = (signed char)p_13;
  v_15 = (long long)p_5;
  if ((((double)result - p_17) + - v_19) / ((double)p_13 + 545.) < - p[0][0][4] * 5539415. - (double)(
                                                                   440ULL * (
                                                                   (unsigned long long)v_21 | p_13))) {
    v_7 = (unsigned short)(! ((int)(- p[0][0][2]) | 1));
    v = (v ^ (unsigned long)((int)p_5 - (int)v_7)) * (unsigned long)(- (
        (int)p_5 * (int)v_9));
    result = (signed char)(69UL * (((unsigned long)p[0][0][1] | v) / 11681UL));
  }
  else {
    v_7 = (unsigned short)(v_15 + (long long)(! (! v_7)));
    result = (signed char)(9759ULL / ((unsigned long long)((int)p_11 - (int)v_7) / (
                                      - p_13 + 354ULL) + 848ULL));
    result = (signed char)(24654 / ((85 + (int)result) / ((int)p_11 + 63) + 519));
  }
  return result;
}


