#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 72389585
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(double p, unsigned char p_5, unsigned int p_7,
              signed char p_13, unsigned int p_21)
{
  unsigned int v_25;
  signed char v_23;
  signed char v_19;
  long long v_17;
  char v_15;
  double v_11;
  unsigned long v_9;
  long v;
  long long result;
  v_25 = 921117842U;
  v_23 = (signed char)p_5;
  v_19 = p_13;
  v_17 = (long long)p_21;
  v_15 = (char)p_13;
  v_11 = -674.736930374;
  v_9 = 3488237524UL;
  v = (long)p;
  result = -848254650LL;
  while (- (- (result / -184LL)) < -9894LL) {
    v_15 = (char)((long long)p_21 - ((long long)((int)v_23 ^ (int)((signed char)495.670440674f)) + (
                                     (long long)v_25 - result)));
    v_11 = (double)0;
    result = (long long)p_5;
  }
  while_0_break: ;
  while ((result / (long long)(v + 154L) - (long long)((int)((unsigned char)p) * (int)p_5)) + (long long)(
         (3730255975U * p_7) % (unsigned int)((int)p_5 + 82)) <= (long long)(~ (- (
         v_9 % (unsigned long)((int)p_5 + 984))))) {
    v_9 = v_11 - 62905263.;
    v_11 = (double)(! (19831UL * ~ v_9));
    v = (long)(40LL / (~ ((long long)v_11 + v_17) + 303LL));
    result = (long long)(- ((int)9.78234553862e+37 / (((int)p_13 >> (
                                                       (int)v_15 & 7)) + 223)));
  }
  while_0_break_0: ;
  return result;
}


