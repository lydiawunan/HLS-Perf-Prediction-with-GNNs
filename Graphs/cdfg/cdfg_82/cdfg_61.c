#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 82005074
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p[2][3], int p_11, short p_13, short p_19)
{
  char v_23;
  short v_21;
  unsigned long long v_17;
  long long v_15;
  signed char v_8;
  double v_6;
  signed char v_4;
  double v;
  unsigned short result;
  v_23 = (char)36;
  v_21 = p_13;
  v_17 = (unsigned long long)p_19;
  v_15 = -400835286LL;
  v_8 = (signed char)29;
  v_6 = 754139266.323;
  v_4 = (signed char)-26;
  v = (double)p_11;
  while (- (935943052U - (unsigned int)(~ p[1][2])) >= (unsigned int)(- (
         (double)p_19 + 4294913082. * v))) {
    v_6 = (double)((unsigned long long)(! (- v_23)) / (((unsigned long long)(- p_13) + (
                                                        (unsigned long long)v_8 | v_17)) + 924ULL));
    v_8 = (signed char)(- (v_15 << ((int)p_13 & 63)) - (v_15 + (long long)p_13) / (long long)(
                                                       ((int)v_8 | 957830276) + 334));
    v = (double)((unsigned long long)(! (v_15 % (long long)((int)v_21 + 872))) + (
                 (unsigned long long)(! v_8) ^ (unsigned long long)v_15 % 34235ULL));
  }
  while_0_break: ;
  if ((unsigned long long)p_19 >= (((unsigned long long)v_15 + 465061425ULL) % 522ULL) % (
                                  ! ((unsigned long long)v_21 + v_17) + 969ULL)) {
    v_6 = (double)(((unsigned long)((double)p[1][2] / (v_6 + 272.)) / (
                    3562005340UL % (unsigned long)(p_11 + 818) + 436UL)) / (unsigned long)(
                   ~ (- p_11) + 947));
    v = (double)(~ (((int)v_4 - (int)((signed char)v_6)) / ((int)v_8 + 653)));
    result = (unsigned short)v;
  }
  else {
    v_15 = (long long)(v + (double)(~ ((int)p_19 + -95)));
    v = (double)(! ((unsigned long long)(- v_6) + (v_17 + (unsigned long long)2.55191188545e+38f)));
    result = (unsigned short)(- ((long long)((int)p_13 * 520975332) - 
                                 v_15 % ((long long)v + 215LL)));
  }
  return result;
}


