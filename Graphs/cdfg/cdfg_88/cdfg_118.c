#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 96212734
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p, char p_5[5][4][2], unsigned char p_15[4][2],
                 long p_27[1][5][3], unsigned char p_29[4][2][1])
{
  unsigned long v_25;
  long long v_23;
  unsigned long v_21;
  unsigned char v_19;
  long long v_17;
  unsigned long long v_13;
  unsigned long long v_11;
  signed char v_9;
  double v_7;
  long long v;
  unsigned int result;
  v_25 = 4294915562UL;
  v_23 = 25213LL;
  v_21 = 3504280984UL;
  v_17 = (long long)p_15[2][0];
  v_13 = (unsigned long long)p_5[4][3][0];
  v_9 = (signed char)5;
  result = 59277U;
  if ((unsigned long long)(28888U + (unsigned int)-6.37832647898e+37f) < 
      (v_13 % (unsigned long long)((int)p_15[2][0] + 248)) % 54327ULL) {
    v_11 = 30526ULL + (unsigned long long)(((unsigned long)result & v_25) - 3941785419UL);
    v_19 = (unsigned char)(~ (~ ((long long)v_21 - v_23)));
    v_9 = (signed char)(~ (((unsigned long long)v_19 + 60464ULL) % (unsigned long long)(
                           (unsigned int)p_5[1][1][1] % 4294903892U + 24U)));
  }
  else {
    v_11 = (unsigned long long)-534.084411621f;
    v_17 = ! (v_17 * (long long)p_29[0][1][0]) % (long long)(v_21 + 870UL);
    result = (unsigned int)(! (- p_27[0][3][0]));
  }
  if ((unsigned long long)((unsigned long)p / 15544UL) / (((unsigned long long)v_17 | 36851ULL) + 527ULL) + (unsigned long long)(~ p) != 18446744073709532022ULL) {
    v = (long long)(! (112ULL * v_11) - 18446744071097469790ULL);
    v_7 = (double)v_9;
    result = (unsigned int)((double)(((long long)p / (v + 1023LL)) % (long long)(
                                     result / (unsigned int)((int)p_5[1][2][1] + 548) + 883U)) + (
                            -103. + v_7));
  }
  else {
    v_13 = (unsigned long long)p_15[2][0];
    result = (unsigned int)(- (! (v_13 + 98ULL)));
  }
  return result;
}


