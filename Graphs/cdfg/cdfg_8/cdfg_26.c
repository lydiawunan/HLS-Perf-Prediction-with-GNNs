#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 93857690
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned int p, float p_5[3], signed char p_7[5][5],
          long long p_9[1], int p_11)
{
  long v_23;
  float v_21;
  unsigned char v_19;
  double v_17;
  long v_15;
  float v_13;
  int v;
  float result;
  v_23 = -340409364L;
  v_21 = p_5[2];
  v = 41018;
  if (v_23 < 17L) {
    v_15 = (long)((p_9[0] % (long long)(p + 461U)) * ((long long)1.33368522208e+38 / (
                                                      p_9[0] + 582LL) + (long long)(
                                                      p + 27282U)));
    v_13 = (float)(((unsigned long)(v % 58) + ((unsigned long)p ^ (unsigned long)v_15)) + 442271445UL);
    v = (int)(- (p_9[0] % 17138LL) - (long long)((float)(p_11 & 183) - - v_13));
  }
  else {
    v_19 = (unsigned char)(- (((float)p_7[3][1] / (v_21 + 35.f)) * (float)(
                              12371U | (unsigned int)p_7[2][3])));
    v_17 = (double)(! (! v_19));
    v = (int)((long long)((int)((signed char)(- v_17)) % ((int)(! p_7[2][4]) + 347)) + (
              p_9[0] >> ((p_9[0] ^ (long long)p) & 63LL)));
  }
  result = (float)((unsigned long long)((float)(p * (unsigned int)v) + (
                                        (float)p - p_5[2])) / (((unsigned long long)p_7[0][3] - 1012405620ULL) + 810ULL));
  return result;
}


