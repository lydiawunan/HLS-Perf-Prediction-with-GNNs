#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 664977142
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(void)
{
  signed char v_16;
  short v_14;
  unsigned int v_12;
  float v_10;
  char v_8;
  float v_6;
  int v_4;
  unsigned short v;
  int result;
  v_16 = (signed char)14;
  v_14 = (short)11914;
  v_12 = 3834422496U;
  v_10 = 437.484649658f;
  v_8 = (char)31;
  v_6 = -231.629989624f;
  v_4 = 3822;
  v = (unsigned short)49133;
  result = -42388;
  while ((unsigned long long)((int)v - v_4) % 18446744073424405032ULL - (unsigned long long)(
         (long)(v_4 >> ((int)v_6 & 31)) + 638830835L) < 18446744073709551540ULL) {
    v = (unsigned short)((unsigned long)result % ((4294937232UL / (unsigned long)(
                                                   (int)v_16 + 502)) * 22UL + 427UL));
    v_4 = ~ ((int)(! v_14) * ((int)v_8 * v_4));
    v_6 = (float)((unsigned long)(0 - (int)((unsigned char)v_10) * 45) + - (
                  264273142UL ^ (unsigned long)v_12));
  }
  while_0_break: ;
  result = (int)(- (9604ULL + (unsigned long long)result) - 18446744073709545121ULL);
  return result;
}


