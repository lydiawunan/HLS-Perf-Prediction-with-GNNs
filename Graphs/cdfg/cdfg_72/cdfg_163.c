#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 601819427
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p, short p_4, int p_6, int p_8,
                       short p_15)
{
  unsigned short v_21;
  double v_19;
  long v_17;
  long v_13;
  unsigned long long v_11;
  char v;
  unsigned long long result;
  v_21 = (unsigned short)25222;
  v_19 = (double)p_4;
  v_17 = -60415L;
  v_13 = -86447246L;
  v_11 = (unsigned long long)p_8;
  v = (char)p_15;
  result = (unsigned long long)p_6;
  if ((unsigned long long)(-675098523LL | (long long)(! (- v_17))) < 18446744073709508444ULL) {
    v_11 = (unsigned long long)(-896818545LL % (long long)((int)(! p_15) + 335) >> (
                                result & 63ULL));
    v_13 = (long)((unsigned long)p_15 + (unsigned long)(v_17 + (long)p_15) / (
                                        (unsigned long)p_6 * p + 897UL));
    result = (unsigned long long)(! (~ (127UL / (p + 271UL))));
  }
  else {
    result = (unsigned long long)((int)v_21 / ((int)p_15 + 838));
    v = (char)(((unsigned long long)p_4 * result - 12ULL) * (unsigned long long)(
               - p % (unsigned long)(- p_6 + 694)));
    v_11 = - (v_11 - 18446744073709516430ULL) >> ((unsigned long long)(
                                                  v_19 * (double)(p + (unsigned long)p_8)) & 63ULL);
  }
  if (((unsigned long long)((int)p_4 << (p_6 & 15)) ^ (42938ULL - result)) + 
      (unsigned long long)(p_8 ^ (int)v) * v_11 == (unsigned long long)(- (
      -1352L % (v_13 + 169L)))) result = (unsigned long long)p;
  else result = 50ULL;
  return result;
}


