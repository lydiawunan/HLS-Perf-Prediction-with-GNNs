#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 295576164
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p, char p_4, double p_6[5][2], double p_9[5][1],
                 long p_11[4][3][3])
{
  long v_25;
  long v_23;
  signed char v_21;
  unsigned short v_19;
  long long v_17;
  unsigned long long v_15;
  unsigned long long v_13;
  short v;
  unsigned int result;
  v_25 = p_11[3][1][2];
  v_23 = p_11[0][1][1];
  v_21 = (signed char)p_9[2][0];
  v_19 = (unsigned short)31774;
  v_15 = 998404438ULL;
  if ((unsigned long long)v_25 <= - v_15 - (unsigned long long)(- (33902UL | (unsigned long)p_11[3][2][0]))) {
    v_17 = (long long)(- ((double)((int)v_19 / ((int)p + 50)) / (- p_6[3][0] + 944.)));
    v_13 = (unsigned long long)(~ v_17);
    v_15 = (unsigned long long)(~ 44890LL);
  }
  else {
    v_19 = (unsigned short)(~ (~ (- v_23)));
    v_13 = (unsigned long long)p_6[3][0];
    v_15 = (unsigned long long)(~ ((unsigned int)v_21 / 4171333358U) % (unsigned int)(
                                (int)(- v_19) + 465));
  }
  if (p_6[4][1] / 1370.32898257 != (double)(! ((18446744073709502664ULL - v_13) % (
                                               - v_15 + 109ULL)))) result = (unsigned int)(
                                                                   (int)p + (int)p_4);
  else {
    v = (short)(-106122363UL);
    result = (unsigned int)((long long)(((int)((short)p_6[1][0]) * (int)v) % (
                                        (int)((signed char)p_9[3][0]) % 56 + 70)) / (
                            ! ((long long)p_11[0][2][2] + -568480682LL) + 422LL));
  }
  return result;
}


