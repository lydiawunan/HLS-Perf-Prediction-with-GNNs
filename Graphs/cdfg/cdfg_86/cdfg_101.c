#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 327474197
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p[2][4][1], int p_7[1][3][4], int p_11, char p_13,
                unsigned char p_15)
{
  unsigned short v_17;
  unsigned char v_9;
  double v_5;
  short v;
  signed char result;
  v_17 = (unsigned short)p_13;
  if ((long)p_11 == p[1][2][0] + (long)v_17) {
    v_9 = (unsigned char)p_13;
    v_5 = (double)p[1][3][0];
  }
  else {
    v_9 = (unsigned char)((((long)p_15 & p[1][3][0]) + (long)(~ p_7[0][0][0])) * 90L);
    v_5 = (double)34360LL;
  }
  if ((unsigned long long)(- ((unsigned long)((int)v_9 << (p_11 & 7)) * 48014UL)) != 18446744072848035935ULL) 
    result = (signed char)(! (! 18446744073709548287ULL));
  else {
    v = (short)((0. * (v_5 + 59532.)) / ((double)p_7[0][1][0] + 891.));
    result = (signed char)(! 697002658ULL);
    result = (signed char)(! ((long long)v - -28732LL) | (long long)(- (
                           p[1][1][0] ^ (long)result)));
  }
  return result;
}


