#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 982715162
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p[3][2][1], float p_7, long long p_9, short p_11[5][4],
        unsigned long p_15)
{
  long long v_13;
  double v_4;
  long long v;
  int result;
  v_13 = 969094588LL;
  result = (int)((-5921869919LL + (v_13 - (long long)p_15) * p_9) * (long long)(
                 ((int)3.38876708359e+33f % (((int)p[2][0][0] + 182) + 975)) * (int)(! (- p[2][0][0]))));
  v_4 = (double)(- (- (-703.881103516f - (float)((int)p_11[0][3] - result))));
  v = (long long)(- (- p_7 + (float)(- (p_9 ^ 35309LL))));
  result = (int)((double)((v << 16) % (v * -63LL + 872LL)) * (- v_4 - (double)(! p[2][1][0])));
  return result;
}


