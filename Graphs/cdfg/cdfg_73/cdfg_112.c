#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 347137907
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p[5][5][1])
{
  double v_14;
  unsigned char v_12;
  unsigned char v_10;
  short v_8;
  unsigned long long v_6;
  unsigned int v_4;
  unsigned long long v;
  unsigned char result;
  v_14 = (double)p[1][2][0];
  v_10 = (unsigned char)60;
  v_8 = p[4][3][0];
  v_6 = (unsigned long long)p[3][2][0];
  v_4 = (unsigned int)p[0][1][0];
  v = 18446744073709504779ULL;
  while (18446744073505107961ULL < (unsigned long long)v_4 - (18446744073401676604ULL / (
                                                              v_6 + 203ULL)) / (unsigned long long)(
                                                             (int)(~ v_8) + 562)) {
    v_12 = (int)v_10 * -61003;
    v_10 = (unsigned char)(((unsigned long long)((double)v_12 / (v_14 + 529.)) - 
                            18446744073202918567ULL % (unsigned long long)(
                            (int)p[4][3][0] + 422)) / 479769732ULL);
    v_8 = (short)v_10;
    v_4 = 0U;
  }
  while_0_break: ;
  result = (unsigned char)v;
  return result;
}


