#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 245504617
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, char p_7, long p_15, long p_17,
                  long long p_19[2][1])
{
  double v_21;
  int v_13;
  unsigned long v_11;
  float v_9;
  unsigned int v_4;
  unsigned int v;
  unsigned char result;
  v_13 = (int)p_19[0][0];
  v_11 = 47737UL;
  v_4 = 1054376313U;
  v_21 = (double)((unsigned long)(v_4 + (unsigned int)(! v_13)) & ((unsigned long)p_17 * 905561471UL) * (unsigned long)(
                                                                  (unsigned int)p_7 * v_4));
  if (5084LL != ! (~ p_19[0][0] - (long long)(v_21 - 4923.))) {
    v_4 = (unsigned int)(-0);
    v = (unsigned int)(18446744073233600400ULL + (unsigned long long)(
                       v_4 / (unsigned int)((int)(- p) + 761)));
    result = (unsigned char)(~ (~ (v + v_4)));
  }
  else {
    v_9 = (float)(267911598508421624ULL + (unsigned long long)p_17);
    v_11 = (unsigned long)((long)v_13 % (p_15 + 805L) + 30L) - (v_11 + 150UL);
    result = (unsigned char)((float)((int)p_7) + ((v_9 + (float)v_11) - (float)(! p_7)));
  }
  return result;
}


