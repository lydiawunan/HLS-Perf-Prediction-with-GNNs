#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 398598065
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned long p, long p_19, unsigned long long p_21,
          unsigned short p_23, unsigned short p_25)
{
  unsigned int v_35;
  signed char v_33;
  unsigned long long v_31;
  int v_29;
  unsigned int v_27;
  unsigned long long v_17;
  char v_15;
  unsigned long v_13;
  long long v_10;
  double v_8;
  float v_6;
  double v_4;
  signed char v;
  float result;
  v_35 = (unsigned int)p;
  v_33 = (signed char)p_23;
  v_31 = 18446744073709538949ULL;
  v_29 = (int)p;
  v_27 = (unsigned int)p_21;
  v_15 = (char)116;
  v_10 = 378895022LL;
  v_8 = (double)p_23;
  v = (signed char)p_19;
  if (7781ULL % (unsigned long long)((unsigned int)1.37131521266e+38f % (
                                     (v_35 ^ (unsigned int)v) + 556U) + 841U) == (unsigned long long)(
      (long long)(~ p) | (v_10 & v_10))) {
    v_4 = (double)(! ((unsigned long long)(v_27 & (unsigned int)v_29) & - v_31));
    v_15 = (char)(- (! (p_21 | (unsigned long long)p_25)));
    v_6 = (float)(- p_21 / 18446744073261595156ULL);
  }
  else {
    v_6 = (float)v_29;
    v = (signed char)v_35;
    v_4 = (double)(((long long)p + (long long)v_33 % (v_10 + 291LL)) * (long long)v);
  }
  if ((long long)p_25 != - (v_10 + v_10) - (long long)((long)((int)p_23 + (int)((unsigned short)v_4)) * p_19)) {
    result = (float)(v_10 / (long long)((p & 3558497436UL) + 273UL) & (long long)(
                     4294967196UL * (p * 4294954706UL)));
    v = (signed char)((v_4 / 48774. + (double)((long)v_6 * -33247L)) + 
                      (double)(- result) / (v_8 + 575.));
    result = (float)(! (! v));
  }
  else {
    v_17 = - p_21;
    v_13 = (unsigned long)(((unsigned long long)(3228532968UL - p) + 
                            (unsigned long long)v_15 * v_17) - ((unsigned long long)(
                                                                p ^ (unsigned long)p_19) - 
                                                                p_21 / 16306ULL));
    result = (float)v_13;
  }
  return result;
}


