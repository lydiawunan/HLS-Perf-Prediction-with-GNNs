#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 136218850
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, long p_11, long long p_15,
           signed char p_17[2][3][2])
{
  long long v_21;
  unsigned short v_19;
  long v_13;
  unsigned long long v_8;
  unsigned char v_6;
  signed char v_4;
  unsigned long v;
  double result;
  v_21 = (long long)p;
  v_19 = (unsigned short)17200;
  v_13 = (long)p_17[1][2][1];
  v_6 = (unsigned char)p;
  v_4 = (signed char)21;
  v = 4294913476UL;
  result = 450.526075958;
  while (! v / (v % 3237819599UL + 452UL) - (unsigned long)(- ((int)p_17[0][2][1] - (int)v_19)) < (unsigned long)(
         463.423736165 / ((double)(~ ((int)((signed char)-1.80331086328e+38f) * (int)p_17[1][0][0])) + 952.))) {
    result = v_21 % -22223LL;
    v_4 = (signed char)(~ (-991336993L + - p_11));
    v = (unsigned long)((((long)v_19 - p_11) + (v_13 + (long)p_17[1][1][1])) - (long)p_17[1][0][0]);
    v_19 = (unsigned short)v;
  }
  while_0_break: ;
  while (28. == result) {
    result = (unsigned long)v_6 + (unsigned long)v_4 * (v + 58UL);
    v_8 = (unsigned long long)(! ((long)((int)result / -454863527) % (
                                  ! v_13 + 593L)));
    v_4 = (signed char)((long long)(~ (! v_13)) + ! (p_15 / ((long long)-4.74936909055e+37f + 202LL)));
    result = (double)((18446744073631278321ULL % (v_8 + 155ULL)) * (unsigned long long)-1.77972221808e+38f & 
                      (p + 18446744073520185769ULL) % (((unsigned long long)p_11 + p) + 821ULL));
  }
  while_0_break_0: ;
  return result;
}


