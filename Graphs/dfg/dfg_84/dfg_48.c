#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 423316265
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p, unsigned long long p_15[2][3],
         unsigned char p_17[2][2], short p_21)
{
  long long v_23;
  short v_19;
  unsigned char v_13;
  int v_11;
  long long v_8;
  float v_6;
  float v_4;
  signed char v;
  long result;
  v_23 = (long long)p_21;
  v_19 = (short)9071;
  v_13 = (unsigned char)p_15[1][0];
  v_11 = (int)p_15[0][1];
  v_8 = -779495263LL;
  v_6 = (float)(((unsigned long long)(v_11 | (int)p) % 1951ULL ^ (unsigned long long)(
                                                                 229440197U * (unsigned int)v_13) * (
                                                                 p_15[0][1] + (unsigned long long)2.6521143655e+38)) - (unsigned long long)(
                ~ ((int)p_17[0][1] * (int)v_19) * ((int)(! v_19) - ((int)p_21 << (
                                                                    v_23 & 15LL)))));
  v_4 = (float)664679864;
  v = (signed char)(- (v_4 * (float)(((long long)v_6 & v_8) << ((int)p & 63))));
  result = (long)v;
  return result;
}


