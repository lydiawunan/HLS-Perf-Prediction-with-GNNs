#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 750826399
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long p, char p_5)
{
  double v_15;
  float v_13;
  char v_11;
  short v_9;
  long long v_7;
  double v;
  double result;
  v_15 = (double)p_5;
  v_11 = (char)6;
  v_9 = (short)p;
  v_7 = -690109622LL;
  v = 675.961250372;
  result = (double)p_5;
  result = (double)(((long long)(- v_15) + v_7 % 1050297681LL) / (long long)(
                    (int)((char)(- result)) % ((int)p_5 + 126) + 759));
  while ((v / ((double)p + 928.) - -843181322.) + (double)(! (4001411670UL % (unsigned long)(
                                                              (int)p_5 + 708))) < - (
         (double)(- p) + 2.87191103856e+38 / ((double)v_7 + 398.))) {
    v_13 = (int)v_11 - (int)v_9 * 93;
    v = (double)(char)92;
    v_9 = (short)(! (- ((int)p_5 - (int)p_5)));
    v_7 = (long long)((float)((v_7 + 554048686LL) + (long long)p) * (
                      - v_13 + (float)(! p)));
  }
  while_0_break: ;
  return result;
}


