#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 177688940
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, unsigned short p_23)
{
  int v_27;
  double v_25;
  long long v_21;
  unsigned int v_18;
  long v_16;
  char v_14;
  unsigned long long v_12;
  unsigned int v_10;
  unsigned long v_8;
  unsigned long long v_6;
  unsigned long long v_4;
  signed char v;
  long long result;
  v_25 = (double)p;
  v_21 = p;
  v_14 = (char)-107;
  v_12 = (unsigned long long)p_23;
  v_10 = 86210259U;
  v_8 = 7805UL;
  v_6 = (unsigned long long)p;
  v_4 = (unsigned long long)p;
  while (~ ((long long)v_14 % (p + 130LL)) >> (p & 63LL) <= -10368LL) {
    v_27 = (unsigned long long)v_25 % 18446744072686663008ULL;
    v_8 = (unsigned long)(! (p / 4294918386LL) % ((0LL - v_21) + 313LL));
    v_6 = (unsigned long long)v_27;
    v_14 = (char)((v_4 / 740675749ULL + ~ v_4) + 18446744072927046407ULL);
  }
  while_0_break: ;
  if ((unsigned long long)p_23 * v_4 <= (unsigned long long)(0 / ((int)(! p_23) / 758 + 31))) {
    v_4 = - (((unsigned long long)v_10 + v_12) - (unsigned long long)(
             -42161LL % (long long)((int)v_14 + 992)));
    v = (signed char)(! (- v_4) - v_6 / (unsigned long long)(v_8 % 3902514547UL + 621UL));
    result = (long long)v;
  }
  else {
    v_18 = (unsigned int)((unsigned long long)((long long)(3434016257UL << (
                                                           p & 31LL)) + 
                                               (long long)v_14 / (v_21 + 388LL)) ^ (
                          (unsigned long long)p_23 + ~ v_6));
    v_16 = (long)(4.91176424285e+58 / ((double)v_18 + 123.));
    result = (long long)((unsigned long long)v_16 * 990190592ULL);
  }
  return result;
}


