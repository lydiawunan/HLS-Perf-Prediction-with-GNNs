#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 209690683
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long p[1][2], signed char p_5[2], short p_9, float p_11,
        float p_17)
{
  short v_15;
  unsigned char v_13;
  signed char v_7;
  unsigned char v;
  int result;
  v_15 = (short)28324;
  v_7 = (signed char)p[0][1];
  v = (unsigned char)51;
  while ((int)(- v_7) == (int)((signed char)(- ((float)p_9 / (- p_11 + 955.f))))) {
    v_13 = (long)v_15 / 128673013L;
    v_13 = v_13;
    v_15 = (short)(! (! -37003LL));
    v_7 = (signed char)(-23834 % ((int)((short)(- (- p_17))) + 995));
  }
  while_0_break: ;
  result = (int)v;
  return result;
}


