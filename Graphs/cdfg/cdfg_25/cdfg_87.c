#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 214258341
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, unsigned char p_5[5][5], short p_9, long p_11[5],
         unsigned char p_13)
{
  char v_21;
  long long v_19;
  unsigned int v_17;
  short v_15;
  unsigned long long v_7;
  int v;
  long result;
  v_21 = (char)92;
  v_19 = -24694LL;
  v_15 = (short)p_11[0];
  v_7 = 87349597ULL;
  if (- (! ((unsigned long long)v_21 & v_7)) != (unsigned long long)(
      p_11[2] * (long)(! ((int)p_5[3][1] % ((int)p_13 + 940))))) {
    v_15 = (short)p_5[4][3];
    v_7 = (unsigned long long)(! (((long long)p_13 % 828379843LL) * (long long)(
                                  (int)v_15 % -10988)));
  }
  else {
    v_17 = (unsigned int)(-43LL / ((v_19 % (long long)((int)v_15 + 1004) - (long long)(
                                    (long)p_9 / 57641L)) + 227LL));
    v_17 = v_17;
    v_7 = (unsigned long long)(v_17 << ((long)p_9 % (p_11[2] / (long)(
                                                     (int)p_9 + 667) + 711L) & 31L));
  }
  if (v_7 != 18446744072748123586ULL / (((unsigned long long)p_11[0] + - v_7) + 146ULL)) {
    result = (long)((! v_7 - 18446744072851827130ULL) / 948367393ULL);
    v = (int)p_5[3][1];
    result = (long)((long long)((long)(- v) / ((result - 83L) + 209L)) + (
                    301851161LL + (long long)p * -1015946258LL));
  }
  else result = (long)((unsigned int)(~ (- p_9)) / (~ p + 820U));
  return result;
}


