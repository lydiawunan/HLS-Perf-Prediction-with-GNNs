#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 588973638
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p, long long p_19)
{
  unsigned long long v_17;
  char v_15;
  long v_13;
  char v_10;
  char v_8;
  long long v_6;
  signed char v_4;
  int v;
  unsigned long long result;
  v_17 = 1055996809ULL;
  v_15 = (char)34;
  v_13 = (long)p;
  v_8 = (char)p_19;
  v_4 = (signed char)p;
  v = (int)p_19;
  result = (unsigned long long)p_19;
  if (~ ((unsigned long long)(p_19 - (long long)v) - result * result) < (unsigned long long)v_15) {
    v_4 = (signed char)34;
    v = (int)((unsigned long long)((172 / (p + 303)) / ((p - (int)v_15) + 506)) - result);
    v_6 = -726503478LL;
  }
  else {
    v = (int)((long long)(-113 / ((int)(! v_8) + 723)) % ((long long)(
                                                          v - (int)v_4) % (
                                                          ((long long)v_15 + p_19) + 134LL) + 622LL));
    result = v_17;
    v_6 = (long long)(v_13 + (long)(- (~ p)));
  }
  while (9855ULL + ~ (- result) >= 18446744072912822069ULL % (unsigned long long)(
                                   v + 455) - (unsigned long long)v_4) {
    v_13 = (long long)v_8 - v_6 / -104LL;
    v_10 = (char)v_13;
    result = (unsigned long long)(0 / ((0 ^ p) + 594));
    v_4 = (signed char)(4294942964UL % ((4120383987UL * (unsigned long)v_10) % (unsigned long)(
                                        ! v + 814) + 639UL));
  }
  while_0_break: ;
  return result;
}


