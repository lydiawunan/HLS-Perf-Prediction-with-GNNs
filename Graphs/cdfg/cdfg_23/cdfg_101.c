#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 985562347
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, long long p_9[4], float p_11, float p_15, short p_17)
{
  double v_21;
  long v_19;
  unsigned char v_13;
  float v_7;
  unsigned char v_4;
  unsigned int v;
  short result;
  v_21 = 8795314139.91;
  v_7 = (float)p_17;
  result = (short)p;
  v_19 = (long)(65083LL * (p_9[2] / ((long long)v_7 + 994LL)) - 3720717133LL);
  if ((double)(- (((int)p + (int)result) / 69)) > 3.41057109457e+37 / (
                                                  v_21 + 667.)) {
    v_4 = (unsigned char)(- (((long long)v_7 - p_9[2]) % ((-570130127LL & (long long)p_11) + 728LL)));
    v = (unsigned int)(! (((int)v_4 + -25425) % (-269391106 * (int)p + 592)));
    result = (short)v;
  }
  else {
    v_7 = (float)((double)((float)v_19 / (- p_11 + 312.f)) - v_21);
    v_13 = (unsigned char)p;
    result = (short)((int)((double)(p_11 * (float)v_13) - -6196460333.13 / (double)(
                                                          p_15 + 114.f)) + 
                     (int)p_17 / ((int)((short)(- v_7)) + 330));
  }
  return result;
}


