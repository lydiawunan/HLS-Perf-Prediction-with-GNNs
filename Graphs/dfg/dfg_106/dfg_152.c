#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 898702353
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long long p, float p_5, short p_7, double p_9,
         unsigned char p_11[5][1][4])
{
  float v_19;
  int v_17;
  unsigned long v_15;
  double v_13;
  unsigned long v;
  char result;
  v_17 = 30934;
  v_15 = (unsigned long)p;
  v = (unsigned long)p_9;
  result = (char)p_7;
  v_19 = (float)(! v);
  v_13 = (double)(- ((float)(- v_17) / (((float)p * v_19 - v_19) + 820.f)));
  v = (unsigned long)((int)((signed char)(((double)p_11[0][0][1] - p_9) / (
                                          v_13 * (double)p_5 + 344.))) / 12) - 
      ((v_15 * (unsigned long)result) / (unsigned long)(- v_17 + 955)) * (unsigned long)(
      (int)((double)p + p_9) + ((int)p_11[4][0][0] + 81));
  result = (char)(~ (((p / (long long)(v + 582UL)) % ((long long)(- p_5) + 672LL)) * (long long)(
                     (248 + (int)p_7) * (int)(208466908. + p_9))));
  return result;
}


