#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 928834611
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p, unsigned long p_7, short p_11, long p_13,
        float p_15)
{
  unsigned short v_23;
  int v_21;
  short v_19;
  long long v_17;
  long v_9;
  unsigned int v_4;
  unsigned long v;
  int result;
  v_23 = (unsigned short)63499;
  v_21 = 935899273;
  v_19 = (short)-10385;
  v_17 = -24289LL;
  v_4 = (unsigned int)p_7;
  v = (unsigned long)p;
  result = 101599822;
  while ((long long)((unsigned long)p_13 - - (82UL - v)) == v_17 * ! (
                                                            -813257414LL - (long long)p)) {
    v_17 = (unsigned int)v_21 % ((unsigned int)v_19 / 3769435160U + 69U);
    result = (int)((((unsigned long)p_11 / (p_7 + 736UL)) / (unsigned long)(
                    (int)(- p) + 440)) * (((unsigned long)v_23 * p_7) % 13350UL));
    v_19 = (short)(-48256U);
    v = (unsigned long)(~ p_11) + (unsigned long)p_13 * (p_7 + (unsigned long)p);
  }
  while_0_break: ;
  if ((unsigned long)(! p_11) < ((unsigned long)((p_13 - (long)p_15) / (
                                                 ((long)result + p_13) + 658L)) | ! (! v))) {
    result = ~ (result * (int)p) << ((p_7 % 176400439UL) % (unsigned long)(
                                     (int)(- p) + 412) & 31UL);
    v = (unsigned long)v_4;
    result = (int)((unsigned long long)((unsigned long)(60 * result) & (
                                        (unsigned long)-4463322112.f + v)) + 18446744073512303375ULL);
  }
  else {
    v_9 = (long)(0UL / (- (~ p_7) + 795UL));
    result = (int)(~ (58819UL - (unsigned long)(v_9 | -86L)));
  }
  return result;
}


