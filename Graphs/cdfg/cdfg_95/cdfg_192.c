#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 292979409
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p, int p_11, char p_13, double p_15)
{
  unsigned int v_19;
  unsigned long long v_17;
  unsigned long v_9;
  unsigned long long v_6;
  unsigned char v_4;
  unsigned char v;
  int result;
  v_19 = 4248758690U;
  v_17 = 129494209ULL;
  v_9 = 4294946245UL;
  v_6 = 18446744073709503474ULL;
  v = (unsigned char)254;
  if ((- (~ v_17) & (unsigned long long)((4294928713U * v_19) * 78U)) == (unsigned long long)p_13) {
    v_6 = (unsigned long long)p;
    v_4 = (unsigned char)p;
    v = (unsigned char)234;
  }
  else {
    v_9 = (unsigned long)((double)p_13 * (((double)v_9 + p_15) - (double)(~ p_13)));
    result = p_11;
    v_4 = (unsigned char)(158UL % (((unsigned long)((double)p * -3.26821483711e+38) - (
                                    (unsigned long)result - v_9)) + 85UL));
  }
  result = (int)(((unsigned long long)((int)v - (int)((unsigned char)600.240600586f)) % 709602818ULL) * (
                 (unsigned long long)(-28170 / ((int)v_4 + 682)) / (~ v_6 + 29ULL)));
  return result;
}


