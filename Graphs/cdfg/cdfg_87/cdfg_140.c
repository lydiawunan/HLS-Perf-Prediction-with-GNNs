#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 325122643
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, unsigned short p_4, unsigned long p_9,
           unsigned long long p_11, int p_13)
{
  short v_21;
  double v_19;
  double v_17;
  signed char v_15;
  long long v_7;
  unsigned int v;
  double result;
  v_21 = (short)p_11;
  v_19 = -8231836751.62;
  v_15 = (signed char)92;
  v = 4294963740U;
  v_17 = (double)(39ULL / ((p_11 - (unsigned long long)p_4) % 557ULL + 274ULL));
  if ((int)(- (- v_19) - (double)(! p_11)) >= ! (! ((int)p + (int)v_21))) {
    v = 3518481057U;
    result = (double)(((unsigned long long)p / 565030303ULL & (unsigned long long)(- p_4)) % (unsigned long long)(
                      29U * v + 13U));
  }
  else {
    v_7 = (long long)(((double)v_15 - - v_17) - 0.);
    v_7 = (long long)(p_11 + (unsigned long long)(- ((long long)p_13 * v_7)));
    result = (double)((920LL % (v_7 * -40140LL + 501LL)) / (long long)(
                      ((unsigned long)v & p_9 * (unsigned long)p_4) + 179UL));
  }
  return result;
}


