#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 332272382
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p, float p_4, char p_6, double p_8[1][1][3], long p_10)
{
  float v_21;
  unsigned long long v_19;
  double v_17;
  short v_15;
  double v_13;
  unsigned long v;
  int result;
  v_21 = (float)p;
  v_19 = 575304665ULL;
  v_17 = -5.49270721013e+37;
  v_15 = (short)p;
  v = 1006118620UL;
  v_13 = (double)(- (v_21 + 768.733032227f));
  if ((double)((unsigned long)p_10 + (unsigned long)7100223833.64 / (
                                     v + 885UL)) >= ((double)(-57397L - (long)-1.89312415238e+38) - 
                                                     v_13 / ((double)v_15 + 60.)) / (
                                                    - v_17 / ((double)(
                                                              v_19 | (unsigned long long)p_6) + 845.) + 544.)) 
    result = (int)p;
  else result = (int)(((46290LL - (long long)p_4) & (long long)((int)p_6 % -8393)) * (long long)(
                      (long)(-128.28595247 * p_8[0][0][1]) * ~ p_10));
  return result;
}


