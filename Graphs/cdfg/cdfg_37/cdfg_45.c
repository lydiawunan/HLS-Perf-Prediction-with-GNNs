#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 428585410
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p[3], int p_4[3][1], long p_6[3][4],
                 signed char p_8, float p_10)
{
  int v_21;
  long long v_19;
  char v_17;
  char v_15;
  long v_13;
  short v;
  unsigned int result;
  v_21 = (int)p[2];
  v_19 = (long long)p_10;
  v_17 = (char)p_10;
  v_15 = (char)-101;
  v_13 = -11301L;
  v = (short)p_4[2][0];
  result = (unsigned int)p_4[1][0];
  while ((long)(((int)(- p_10) + (int)p_8 * 78) * - ((int)p[1] % 40)) <= v_13) {
    v_15 = v_19 % 16161LL;
    result = (unsigned int)(- p_10 * (float)(34996LL - (long long)v_15)) / (
             (4062375552U + (unsigned int)p_4[1][0]) + 615U);
    v_17 = (char)(18446744073709551556ULL + (unsigned long long)(- v_21) % (
                                            (unsigned long long)p[0] / 49281ULL + 373ULL));
    v_13 = (long)(- (- (p_10 * (float)v_17)));
  }
  while_0_break: ;
  while ((long)(! v) <= ~ ((155782944L % (v_13 + 270L)) % (long)((int)(~ p[2]) + 30))) {
    result = (unsigned int)(! (~ ((int)v_15 % ((int)v + 387))));
    v_13 = (long)(((unsigned long long)((int)((unsigned char)p_10) % 54) / 576589560ULL) / (unsigned long long)(
                  (int)v_17 + 1016));
    v = (short)(- (714.841125488f * (float)(result ^ result)));
  }
  while_0_break_0: ;
  return result;
}


