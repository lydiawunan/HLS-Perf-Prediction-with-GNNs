#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 459635199
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p, signed char p_5, unsigned long long p_7,
                unsigned long p_11, unsigned long p_19)
{
  long v_21;
  signed char v_17;
  double v_15;
  double v_13;
  long v_9;
  char v;
  signed char result;
  v_17 = (signed char)p_19;
  v_15 = 72.375256336;
  v_13 = (double)p_11;
  v_9 = 354410824L;
  v = (char)4;
  result = (signed char)10;
  while ((double)(- (p_7 | 57453ULL)) - (1.1435725178e+38 + (double)(
                                         (unsigned long)v_9 % (p_11 + 150UL))) != 
         -24679. * - (- v_13)) {
    v_21 = (double)v_17 - (v_15 - 9.);
    v_17 = (signed char)(- v_21);
    v = (char)((p_7 & p_7 / (unsigned long long)(p_19 + 854UL)) / (unsigned long long)(
               p_19 * (unsigned long)(! v_17) + 248UL));
    v_13 = (double)(- p);
  }
  while_0_break: ;
  while (0 < (long long)(- result)) {
    v = (long)v + -588093471L;
    result = (signed char)(! (- ((int)v - (int)v)));
    result = result;
  }
  while_0_break_0: ;
  return result;
}


