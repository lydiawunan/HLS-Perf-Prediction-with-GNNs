#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 87193262
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, float p_11, long p_13, double p_21)
{
  int v_23;
  long v_19;
  double v_17;
  char v_15;
  int v_9;
  signed char v_7;
  float v_5;
  float v;
  unsigned short result;
  v_23 = (int)p_11;
  v_15 = (char)-123;
  v_9 = (int)p_13;
  v_7 = p;
  if ((unsigned long)p_13 > (unsigned long)(~ ((unsigned int)((int)p_21 % (
                                                              v_23 + 418)) * 5393U))) {
    v_9 += ~ ((int)v_15 % ((int)v_7 + 755));
    v_7 = (signed char)((long)(! (- v_9)) % (- ((long)p_11 / (p_13 + 249L)) + 725L));
    v_5 = (float)v_7;
  }
  else {
    v_17 = (double)4294951347U;
    v_19 = -1701735750L;
    v_5 = (float)(- ((-16. - v_17) / ((double)((long)p_11 | v_19) + 676.)));
  }
  if (v_5 < 0.f) result = (unsigned short)3.3299864492e+38;
  else {
    v = (float)p;
    result = (unsigned short)(- (- v));
  }
  return result;
}


