#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1030716260
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, double p_13[5][3])
{
  short v_11;
  unsigned short v_9;
  double v_7;
  short v_5;
  char v;
  long result;
  v_11 = (short)p_13[4][1];
  v_9 = (unsigned short)53363;
  v_7 = -2045875310.52;
  v_5 = (short)-32693;
  v = (char)p;
  while (((unsigned long)(~ p) / 47783UL) / (unsigned long)((p - (unsigned int)(
                                                             (int)v / (
                                                             (int)v + 348))) + 19U) >= (unsigned long)(
         - (8787U - (unsigned int)v_5) + (unsigned int)(- (- v_7)))) {
    v_9 = (int)v_9 + -29342;
    v_7 = p_13[0][2];
    v_5 = v_11;
    v = (char)(3402967322. - v_7);
  }
  while_0_break: ;
  result = (long)v * -59359L;
  return result;
}


