#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 77688455
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p[2][1][4], long long p_9[5][3][2],
                 float p_11[4][1], long p_15)
{
  float v_13;
  int v_7;
  double v_4;
  float v;
  unsigned int result;
  v_13 = p_11[3][0];
  v_4 = (double)p_15;
  v = 3.21824481756e+38f;
  v_7 = (int)((double)((long)(- (-60.f * v_13)) - p_15) + v_4 / 758.414794922);
  result = (unsigned int)((long long)(((int)p[0][0][1] + v_7) >> 5UL) % (
                          p_9[3][2][0] + 97LL) - (long long)(-2364166 + 
                                                             208 / ((int)((unsigned char)p_11[1][0]) + 873)));
  v_4 = (double)(- result);
  result = (unsigned int)(-1LL >> (((((int)((short)v) - -11065) >> ((int)(- v_4) & 31)) + (int)v) & 63));
  return result;
}


