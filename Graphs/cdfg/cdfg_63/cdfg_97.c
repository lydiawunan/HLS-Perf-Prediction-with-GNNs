#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 743487122
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned short p, unsigned long long p_4, char p_6,
                       signed char p_8, signed char p_13)
{
  unsigned long long v_19;
  unsigned int v_17;
  signed char v_15;
  double v_11;
  unsigned long long v;
  unsigned long long result;
  v_19 = (unsigned long long)p_6;
  v_17 = (unsigned int)p;
  v_15 = (signed char)-90;
  v_11 = -5349401223.76;
  v = 18446744072797924524ULL;
  result = (unsigned long long)p;
  while (v_11 >= (double)((int)(~ (! p_8)) >> 5)) {
    v_11 = (double)v_15 - -899463323.274;
    v = (unsigned long long)((~ v_17 - (unsigned int)(! p_8)) >> ((v - (unsigned long long)3.15885035102e+38) * (
                                                                  v_19 * (unsigned long long)p_13) & 31ULL));
    result = (unsigned long long)((double)(p_4 % ((unsigned long long)v_11 + 45ULL)) * -3.00139320205e+38 + 3.18381539874e+38);
    v_11 = (double)((unsigned long long)((int)(- p) % ((int)p_8 + 9)) * (
                    ((unsigned long long)p_6 + p_4) % (unsigned long long)(
                    -37 * (int)p_6 + 588)));
  }
  while_0_break: ;
  while (result < (unsigned long long)p_8) {
    v = v_11 + (double)(v - 18446744073605050701ULL);
    v_11 = (double)(-38741829L);
    result = 18446744073112152684ULL;
  }
  while_0_break_0: ;
  return result;
}


