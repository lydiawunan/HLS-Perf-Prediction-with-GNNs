#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 823870932
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, float p_9, int p_13, unsigned long p_19,
                  unsigned int p_21)
{
  unsigned char v_25;
  long v_23;
  unsigned long v_17;
  double v_15;
  int v_11;
  long v_7;
  double v_5;
  short v;
  unsigned long result;
  v_25 = (unsigned char)p_19;
  v_23 = 924516284L;
  v_17 = (unsigned long)p_21;
  v_11 = 275176311;
  v_7 = (long)p;
  v_5 = -1.42002012605e+38;
  v = (short)p_13;
  result = (unsigned long)p_9;
  while (((unsigned long)p_21 % (v_17 + 298UL) << 8L) * 3657775815UL < 
         (4294937679UL + p_19) % ((unsigned long)((unsigned int)v_11 % 399258845U) / (
                                  (result & (unsigned long)p_21) + 331UL) + 307UL)) {
    v_15 = (int)v_25 / 9540;
    v_7 = (long)(4294943860UL | p_19);
    v_11 = (int)((double)(- (! result)) + - (v_5 * 844.));
    result = (unsigned long)(- (3626139136.f - (float)(v_23 & (long)v_15)));
  }
  while_0_break: ;
  if ((unsigned long)((int)(- (-922.80657959f - (float)v_11)) * - ((int)v / 47454)) != - p_19) {
    v = (short)(v_7 | (long)(- (165004624.f - p_9)));
    v = (short)(- ((double)(~ v) + v_5));
    result = ! (- p & (unsigned long)v);
  }
  else {
    v_15 = (double)3460751104.f;
    v_11 = (int)(~ v_17);
    result = (unsigned long)((double)((float)(- v_11) - 7528578048.f) * (
                             (double)(~ p_13) - (v_15 - -46040.)));
  }
  return result;
}


