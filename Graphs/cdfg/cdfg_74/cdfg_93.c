#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 124078891
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p[4][3][1], char p_7, unsigned long p_9,
                  short p_11, long long p_13[1][1][2])
{
  unsigned long v_25;
  unsigned char v_23;
  char v_21;
  signed char v_19;
  double v_17;
  long long v_15;
  double v_4;
  unsigned long long v;
  unsigned char result;
  v_25 = p_9;
  v_23 = (unsigned char)p_9;
  v_21 = (char)p_13[0][0][1];
  v_15 = (long long)p_11;
  v_4 = 890.562794964;
  v = 18446744073490664927ULL;
  result = (unsigned char)p_11;
  if ((int)v_21 < (int)p[3][0][0]) {
    v_19 = (signed char)6685745524.11;
    v_17 = (double)(- (((unsigned long long)p_11 + v) % (unsigned long long)(
                       (int)v_19 / ((int)p_7 + 157) + 53)));
    v_15 = (long long)(-321511595L + (long)(! (18756 % ((int)((unsigned short)v_17) + 424))));
  }
  else {
    v = (unsigned long long)((unsigned long)((int)(- p_11) / (118 % (
                                                              (int)v_23 + 910) + 7)) * (
                             (unsigned long)((int)p[0][1][0] % -98) | 
                             v_25 * 4197149816UL));
    v_19 = (signed char)((unsigned long)-1.64068872311e+38 | ! ((unsigned long)v_21 / 4294927885UL));
    result = (unsigned char)(5799301120.f * (float)(~ p_13[0][0][1] - 
                                                    (long long)v_19 * p_13[0][0][0]));
  }
  if ((unsigned long long)(! ((int)(! p[1][0][0]) - ((int)p[2][0][0] - (int)result))) != 
      ((unsigned long long)(- p_7) - v % (unsigned long long)(p_9 + 475UL)) % (unsigned long long)(
      ((long long)p_11 / (p_13[0][0][1] + 668LL) ^ (v_15 - (long long)p[2][0][0])) + 657LL)) {
    v = (unsigned long long)v_4;
    result = (unsigned char)v;
    result = (unsigned char)(~ ((int)result / ((int)result + 651)));
  }
  else result = (unsigned char)1;
  return result;
}


