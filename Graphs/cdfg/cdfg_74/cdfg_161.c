#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 883862964
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p[5][4], unsigned char p_13, float p_15,
                   double p_19[4], unsigned char p_23)
{
  unsigned short v_27;
  signed char v_25;
  float v_21;
  short v_17;
  long v_11;
  unsigned char v_9;
  unsigned long long v_7;
  char v_4;
  unsigned long v;
  unsigned short result;
  v_27 = (unsigned short)p_15;
  v_25 = (signed char)p_23;
  v_11 = -55741L;
  v_9 = (unsigned char)p_19[0];
  if (~ ((long long)v_11 / ((long long)v_11 % (p[0][3] + 312LL) + 754LL)) < (long long)(
      31085 & (int)((short)((float)(8 % ((int)v_27 + 92)) * p_15)))) {
    v_4 = (char)(- ((-26322L % (v_11 + 601L)) * (long)(! p_13)));
    v_7 = (unsigned long long)(54 * (int)v_9);
    v = (unsigned long)((unsigned long long)(- ((long long)v_4 % (p[0][1] + 534LL))) % (
                        - (v_7 / 18446744073040598010ULL) + 202ULL));
  }
  else {
    v_21 = (float)(char)115;
    v_17 = (short)((- p_15 - (float)((int)p_13 * 201)) / ((float)(((int)((unsigned char)p_19[1]) - (int)p_23) << (
                                                                  (p[1][2] + (long long)v_25) & 31LL)) + 422.f));
    v = (unsigned long)(((int)(p_15 + p_15) - (-4009 >> ((int)v_17 & 15))) / (
                        (int)(p_19[1] * (double)v_21 - (-3472303360. + p_19[2])) + 492));
  }
  result = (unsigned short)v;
  return result;
}


