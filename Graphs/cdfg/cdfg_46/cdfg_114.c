#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 530312492
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned short p, unsigned short p_5, char p_7, long p_15,
           double p_21)
{
  long long v_23;
  long long v_19;
  long long v_17;
  long long v_13;
  long v_11;
  int v_9;
  unsigned int v;
  double result;
  v_23 = -62891LL;
  v_17 = (long long)p;
  v_11 = (long)p_21;
  v_9 = 26996;
  v = (unsigned int)p_15;
  result = (double)p_5;
  if ((! v_23 - 4294958159LL) * 604343989LL == (long long)v_9) {
    v_19 = (long long)((double)(p_15 + (long)p) / (((double)((int)p_7 + (int)((char)221.62887246)) - result) + 751.));
    v_13 = (long long)((unsigned long)((20791. - p_21) * (double)((long long)p_7 - 196384507LL)) * (
                       (unsigned long)(v * (unsigned int)v_9) & (unsigned long)(
                       (long)p_7 ^ v_11)));
    v_9 = (int)((unsigned long)((long)p % (p_15 + 436L) >> ((v_19 << (
                                                             (int)p & 63)) & 31LL)) / 3521243083UL);
  }
  else {
    v_9 = (int)(~ ((long long)(- p_21) + ((long long)p_5 + v_23)));
    v_17 = (long long)(- (~ -943298168L));
    v_13 = (long long)1.31670639669e+37f;
  }
  if ((unsigned long long)((long)((int)p_5 + (int)p_7) / ((long)v_9 % (
                                                          v_11 + 279L) + 378L)) + 
      (23295ULL * (unsigned long long)v_13) % (unsigned long long)((unsigned long)p_15 % 4294959345UL + 866UL) <= (unsigned long long)v_17) 
    result = (double)37963UL;
  else {
    v = (unsigned int)p;
    result = (double)v;
  }
  return result;
}


