#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 964167342
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p, double p_7, signed char p_11[3],
                 unsigned long long p_13[4][1], unsigned long long p_17)
{
  unsigned int v_25;
  double v_23;
  unsigned long v_21;
  int v_19;
  signed char v_15;
  signed char v_9;
  unsigned short v_5;
  unsigned long long v;
  unsigned int result;
  v_25 = 4294952534U;
  v_21 = 555856592UL;
  v_19 = (int)p_13[1][0];
  v_15 = (signed char)p;
  result = (unsigned int)p_17;
  while ((unsigned long long)(((int)(-20. / (p_7 + 696.)) % (v_19 + 940)) / (
                              (int)p_11[1] + 274)) <= - p_13[3][0]) {
    v_21 = (unsigned long)(18446744073709503801ULL - (unsigned long long)v_21);
    v_23 = (double)(((unsigned long long)v_25 - p_13[0][0]) * (unsigned long long)p) / (
           - (- p_7) + 879.);
    v_19 = (int)(((double)(result & (unsigned int)p_11[0]) - v_23) * (double)(
                 317983954ULL % (unsigned long long)(p + 145U) - (unsigned long long)(~ p)));
  }
  while_0_break: ;
  if ((unsigned long long)(- p_11[0]) * (((unsigned long long)p_7 + p_13[2][0]) / (unsigned long long)(
                                         (int)v_15 + 40)) <= (unsigned long long)(
      (double)(- p_17) - (39649. + (p_7 + (double)p_17)))) {
    v_5 = (unsigned short)p;
    v = (unsigned long long)((-401416742LL * (long long)p ^ (long long)(~ v_5)) * (long long)(
                             ! p % 4294967169U));
    result = (unsigned int)(-3.02156750551e+38 / ((double)(- v) + 243.));
  }
  else {
    v_9 = (signed char)112;
    v = (unsigned long long)v_9;
    result = (unsigned int)(764234762ULL * ((unsigned long long)(p_7 - 862081265.) - 
                                            18446744073709526897ULL * v));
  }
  return result;
}


