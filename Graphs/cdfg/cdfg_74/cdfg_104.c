#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 183852552
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, unsigned int p_13[3][5], unsigned int p_15[4][1][3],
         float p_17, unsigned char p_21)
{
  unsigned int v_23;
  long long v_19;
  unsigned short v_10;
  unsigned short v_8;
  unsigned long long v_6;
  double v_4;
  unsigned long v;
  long result;
  v_23 = p_13[0][3];
  v_19 = 993120195LL;
  v_8 = (unsigned short)p_13[0][4];
  result = -3430L;
  v = 4254105944UL;
  if ((unsigned long)(((unsigned int)p_17 >> (p_15[2][0][0] & 31U)) + (
                      p_15[1][0][2] + 4217151016U)) / (unsigned long)(
      result + 307L) > (unsigned long)(v_23 + (unsigned int)p_21)) {
    v_6 = (unsigned long long)(((unsigned long)v_8 % (v + 726UL)) * 658UL);
    v_4 = (double)(! 1675934796UL);
    result = (long)((unsigned long long)v / (((unsigned long long)((long long)v_4 / 772989830LL) - (
                                              v_6 + 18446744073709551554ULL)) + 101ULL));
  }
  else {
    v_10 = v_8;
    v_10 = (unsigned short)((float)(~ v_10) + (-14010.f + p_17) / ((float)(
                                                                   v_19 / (long long)(
                                                                   result + 276L)) + 386.f));
    result = (long)(- (((double)v_10 + p) / ((double)(p_13[0][3] >> (
                                                      p_15[0][0][1] & 31U)) + 24.)));
  }
  return result;
}


