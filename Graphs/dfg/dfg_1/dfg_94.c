//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 231956056
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p, long long p_9, double p_11)
{
  unsigned long long v_7;
  short v_4;
  unsigned long long v;
  double result;
  result = 1.25201960933e+38;
  v = (unsigned long long)result;
  v_7 = (unsigned long long)(p_11 - (double)(32998L - (long)(- result))) - 
        4121799310ULL / (v + 505ULL);
  v_4 = (short)(((unsigned long long)(- ((float)v_7 * p)) - (v_7 - ((unsigned long long)p - v_7))) & (unsigned long long)p_9);
  result = (double)((v - 18446744073709551615ULL) - (unsigned long long)(
                    (int)v_4 & (int)((short)((double)(- p) / 50.4815528194))));
  return result;
}


