#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 198246282
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(char p, short p_5, short p_7, unsigned char p_9[2][5],
                       unsigned short p_13)
{
  unsigned int v_25;
  char v_23;
  int v_21;
  long v_19;
  unsigned char v_17;
  unsigned long long v_15;
  unsigned short v_11;
  unsigned long long v;
  unsigned long long result;
  v_25 = 3654130909U;
  v_23 = (char)p_13;
  v_21 = 831576578;
  v_19 = (long)p_5;
  v_17 = (unsigned char)82;
  v_15 = 20288ULL;
  v_11 = (unsigned short)p_7;
  while (v_19 * (19003L - 859599325L % (long)((int)v_11 + 93)) <= (long)(
         ((int)p_9[1][0] * v_21) % ((int)p_9[1][3] + 497))) {
    v_17 = (int)v_23 / 7750;
    v = (unsigned long long)v_25;
    v_19 = (long)(! v_15 / (unsigned long long)((int)p + 482));
    v_21 = (int)(! (~ (! v)));
  }
  while_0_break: ;
  if ((int)((unsigned short)-886.306824844) == (int)(~ v_11)) result = (unsigned long long)(! (- (
                                                              13610 + (int)((unsigned short)2.35339928919e+38))));
  else {
    result = (unsigned long long)(! ((int)v_11 << 13)) + (((unsigned long long)p_13 + v_15) + (unsigned long long)(~ v_17));
    v = ((result / (unsigned long long)((int)p_5 + 567)) % (unsigned long long)(
         ((long)p_7 + 61309L) + 321L)) * (unsigned long long)(621164426L + (long)p_9[1][2]);
    result = (unsigned long long)((float)((9630377984ULL - v) * (unsigned long long)p) * 1.43644527508e+38f);
  }
  return result;
}


