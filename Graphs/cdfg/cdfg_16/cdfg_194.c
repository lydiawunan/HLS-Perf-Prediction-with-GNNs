#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 86814723
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p, unsigned int p_7[1][4], unsigned long p_15[1][4],
        long p_17, int p_21[3][5])
{
  double v_19;
  short v_13;
  short v_11;
  float v_9;
  char v_5;
  unsigned long v;
  int result;
  v_19 = 9602805688.31;
  v_13 = (short)p_7[0][2];
  v_11 = (short)p_15[0][3];
  v_9 = (float)p_7[0][1];
  v_5 = (char)-38;
  v = (unsigned long)p_7[0][3];
  result = 513998609;
  while (-17. > ((double)(p_15[0][2] | (unsigned long)v_5) + -12832810076.1) * (double)(
                p_17 | -686L)) {
    v = v_19 * -52511.;
    v_9 = (float)v_11;
    v_19 = (double)(((unsigned long long)(110421606LL + (long long)v_5) & (
                     (unsigned long long)p_21[2][1] + 50346219ULL)) * (unsigned long long)(- (
                    1862L / (p_17 + 652L))));
    v_5 = (char)(! ((unsigned long)(- p_17) / ((89UL - p_15[0][0]) + 286UL)));
  }
  while_0_break: ;
  while (! v < (unsigned long)((int)((char)(- p)) & (int)(- v_5)) - ~ (
               (unsigned long)p_7[0][1] % (v + 732UL))) {
    v = (int)v_11 - (int)((short)((double)v_9 - -7980409561.91));
    result = -7596;
    v_11 = (short)result;
    v_5 = (char)(! (144U - p_7[0][1]) + (unsigned int)((double)v_13 - -308.85010401));
  }
  while_0_break_0: ;
  return result;
}


