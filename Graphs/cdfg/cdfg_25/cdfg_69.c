#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 618817664
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(float p, long long p_15, long p_17)
{
  double v_21;
  unsigned int v_19;
  long long v_13;
  short v_11;
  float v_9;
  unsigned long v_6;
  long long v_4;
  unsigned short v;
  unsigned short result;
  v_21 = 3.02787099716e+38;
  v_19 = (unsigned int)p_15;
  v_13 = (long long)p;
  v_11 = (short)p;
  v_9 = -2.60826716901e+38f;
  v_4 = p_15;
  if ((double)(((v_4 + (long long)p) + (long long)(-10837L - p_17)) % (long long)(
               ! ((long)1.40546774112e+38 | p_17) + 645L)) < v_21) {
    v_4 = v_13;
    v_6 = (unsigned long)(- (- ((int)v_11 / ((int)((short)p) + 612))));
    v = (unsigned short)((float)(~ v_6) * (- p / (- v_9 + 982.f)));
  }
  else {
    v = (unsigned short)v_13;
    v_6 = (unsigned long)((106L + p_17) + 8980L * p_17) - (unsigned long)(~ (
          v_19 / ((unsigned int)8577505774.59 + 959U)));
    v_4 = ~ (((long long)v_6 * p_15) * -344043061LL);
  }
  result = (unsigned short)((long long)v * ! v_4);
  return result;
}


