#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 339469734
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, long long p_4, short p_6, long p_8[2],
                 unsigned char p_11)
{
  unsigned long long v_19;
  unsigned short v_17;
  unsigned long v_15;
  unsigned short v_13;
  int v;
  unsigned int result;
  v_19 = (unsigned long long)p_6;
  v_17 = (unsigned short)30118;
  v_15 = 3775007909UL;
  v_13 = (unsigned short)p_8[1];
  v = 14164;
  result = (unsigned int)p_6;
  while ((unsigned long)result + (unsigned long)(~ p_8[0] * (long)(! v)) != (unsigned long)(
         ((int)p_11 * (int)v_13) * (int)(- p) >> (- (v_15 / (unsigned long)(
                                                     (int)v_17 + 860)) & 31UL))) {
    v_19 *= 18446744073709551589ULL;
    v_15 = (unsigned long)(- ((float)(- result) / ((-9382847488.f + (float)p) + 900.f)));
    v_17 = (unsigned short)(- ((double)((int)p_6 - 46177) - 647.532957889));
    v_13 = (unsigned short)(! (4049827380UL % (unsigned long)(p_8[0] + 445L)) + (
                            (unsigned long)((int)v_13 % ((int)p + 773)) + 
                            (unsigned long)p_8[1] / (unsigned long)(result + 709U)));
  }
  while_0_break: ;
  result = (unsigned int)(((long long)p | (35970LL + p_4)) * ((long long)(~ p_6) - 
                                                              (long long)result % 254578828LL));
  return result;
}


