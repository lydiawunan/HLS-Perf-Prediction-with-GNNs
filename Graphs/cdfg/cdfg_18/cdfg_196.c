#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 171816628
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, long long p_11, double p_13,
         unsigned long p_17, long long p_19[5][4])
{
  unsigned long long v_25;
  unsigned int v_23;
  signed char v_21;
  double v_15;
  unsigned char v_9;
  unsigned long long v_7;
  int v_5;
  unsigned short v;
  long result;
  v_25 = (unsigned long long)p_13;
  v_23 = 346695439U;
  v_21 = (signed char)p_11;
  v_9 = (unsigned char)50;
  v_5 = -57779808;
  result = (long)p_17;
  if ((unsigned long long)((int)(~ (! v_21)) * ((int)((char)(p_13 * (double)v_23)) / -7)) < (
      ! (v_25 * (unsigned long long)p_13) | (unsigned long long)(~ (! p_17)))) {
    v_15 = (double)((unsigned long long)result);
    v = (unsigned short)((long long)p_17 / (~ (! p_19[2][3]) + 888LL));
    result = (long)(18446744073709534564ULL * (18446744073613620823ULL - (unsigned long long)(
                                               (double)v_5 + v_15)));
  }
  else {
    v_15 = (double)((p_19[4][2] * (long long)p_17 + (long long)((unsigned long)v_5 - 3918350107UL)) - 
                    - p_19[4][0] / (long long)(p_17 / (p_17 + 182UL) + 892UL));
    v = (unsigned short)p;
    v_9 = (unsigned char)((double)((int)((unsigned char)(- v_15)) * (int)v_9) - (
                          -3381082652.28 - v_15 * -4527929016.54));
  }
  while ((unsigned long long)(~ ((result * -526463163L) * result)) >= - (
         0ULL % (p + 820ULL))) {
    v_7 = (int)v + 23432;
    v_5 = (int)((double)((659758274LL * (long long)v_9) * (13LL % (p_11 + 1008LL))) / (
                - (p_13 - v_15) + 57.));
    v = (unsigned short)(- (p + (unsigned long long)v_5) % (v_7 + 306ULL));
    result = (long)v;
  }
  while_0_break: ;
  return result;
}


