#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 194272822
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p[4][3][1], double p_9, long p_11, float p_13[4],
         unsigned char p_19[5][4][3])
{
  long v_25;
  unsigned int v_23;
  unsigned int v_21;
  long long v_17;
  signed char v_15;
  long long v_7;
  unsigned short v_4;
  short v;
  long result;
  v_25 = 223554645L;
  v_21 = (unsigned int)p_19[3][1][0];
  v_17 = (long long)p_9;
  v_15 = (signed char)p_13[1];
  v_7 = -29740LL;
  v = (short)10547;
  result = p[0][1][0];
  while (v_17 == (long long)((long)((int)(! p_19[1][2][2]) | (int)((unsigned char)p_13[3])))) {
    v_23 = (unsigned int)v_25;
    result = (long)(((unsigned long)(- p[0][2][0]) % (unsigned long)(
                     72U * v_23 + 82U)) * (unsigned long)((unsigned int)6.6652348546e+37 / (
                                                          v_21 + 269U) >> (
                                                          v_21 / 226U & 31U)));
    v_17 = (long long)p[2][1][0];
  }
  while_0_break: ;
  if ((long long)((float)(-54777LL - -3357LL % (long long)(p_11 + 536L)) / (
                  p_13[3] + 1023.f)) == (long long)v_15 % ((long long)v / (
                                                           v_17 + 426LL) + 878LL) + 87LL) {
    v_4 = (unsigned short)(1010111296. - p_9);
    v = (short)(- (6792145424.01 + (double)v_7));
    result = ((long)v / ((long)v_4 / (p[3][0][0] + 887L) + 347L)) / (long)(
             (int)v + 319);
  }
  else result = (long)(~ (- (! -45387LL)));
  return result;
}


