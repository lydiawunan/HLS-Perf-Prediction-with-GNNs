#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 62110873
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p, unsigned long p_5, double p_7, long long p_9,
           unsigned int p_11)
{
  long v_25;
  float v_23;
  double v_21;
  signed char v_19;
  int v_17;
  signed char v_15;
  long v_13;
  unsigned char v;
  double result;
  v_25 = 831085733L;
  v_23 = 387.30569458f;
  v_21 = (double)p_11;
  v_19 = (signed char)8;
  v_17 = (int)p_7;
  v_15 = (signed char)48;
  v_13 = 303066365L;
  while (- p_9 * (long long)(! v_15) - (long long)((unsigned long)((unsigned int)v_17 % (
                                                                   p_11 + 610U)) * (
                                                   (unsigned long)v_19 * p_5)) >= (long long)(- (
         (double)((unsigned long)v_21 - 40531UL) - (double)v_23 / (p_7 + 422.)))) {
    v_23 = v_25 / -32203L;
    v_17 = (int)(- (! 4294937542UL));
    v_13 = (long)p_5;
    v_19 = (signed char)(! 4294950875U);
  }
  while_0_break: ;
  if ((unsigned long)(p_11 % ((unsigned int)((p_7 - (double)p_9) * 220.) + 978U)) != (unsigned long)v_13) {
    v = (unsigned char)p_7;
    result = (double)((- p + 0.f) - (float)((unsigned long)v / (- p_5 + 23UL)));
    result = (double)((15885 / ((int)((unsigned short)(- result)) + 816)) * (int)(- result));
  }
  else {
    v = (unsigned char)21;
    result = (double)(! (((int)v + -20259) * -723));
  }
  return result;
}


