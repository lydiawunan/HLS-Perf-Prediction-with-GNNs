#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 217745622
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p, unsigned long long p_11,
                       unsigned short p_13[1], signed char p_15, double p_19)
{
  int v_29;
  double v_27;
  long long v_25;
  unsigned int v_23;
  unsigned long v_21;
  int v_17;
  int v_8;
  unsigned int v_6;
  unsigned int v_4;
  unsigned char v;
  unsigned long long result;
  v_27 = 1.77092992687e+38;
  v_25 = (long long)p_19;
  v_23 = 4294926720U;
  v_21 = p;
  v_17 = -313984193;
  v_8 = (int)p_15;
  v_6 = (unsigned int)p_11;
  v = (unsigned char)121;
  while ((unsigned long long)v_6 <= - ((p_11 & (unsigned long long)p_15) << 20ULL)) {
    v_29 = (unsigned int)v_27 | 4294945918U;
    v_23 = (unsigned int)v_29;
    v_8 = (int)(- ((unsigned long long)(v_21 & (unsigned long)v_17) / (
                   p_11 + 941ULL)));
    v_6 = (unsigned int)(((unsigned long)v_23 + v_21 * 55114UL) - (unsigned long)v_23 * (
                                                                  (unsigned long)v_17 + p));
  }
  while_0_break: ;
  if ((long long)(! (- v_21)) % (! (47516LL % (long long)(v_23 + 694U)) + 909LL) >= ~ (
      331758872LL - ! v_25)) {
    v = (unsigned char)((unsigned long long)((unsigned long)(-70 >> (
                                                             v_6 & 7U)) + 
                                             (unsigned long)v_8 * p) + (
                        (p_11 + (unsigned long long)v) + 18446744073709551546ULL));
    v_4 = 3661047079U;
    result = (unsigned long long)(- ((unsigned long)v % ((59359UL - (unsigned long)v_4) + 100UL)));
  }
  else {
    v_17 = (int)p_19;
    result = (unsigned long long)(-54LL - (long long)(((int)p_13[0] - (int)p_15) >> (
                                                      (v_17 & 60) & 31)));
  }
  return result;
}


