#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 960288743
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned char p, float p_9[2][3], long long p_11[1],
                       char p_13[5][5][1], short p_15)
{
  long long v_17;
  unsigned long long v_7;
  unsigned char v_5;
  unsigned char v;
  unsigned long long result;
  v_17 = p_11[0];
  v_7 = (unsigned long long)(! (33LL / (~ (v_17 / 6826LL) + 178LL)));
  v_5 = (unsigned char)(- v_7);
  v = (unsigned char)((unsigned int)(~ (((int)p_13[4][3][0] + (int)p_15) - 172460)) - 
                      ((unsigned int)(~ p_13[4][3][0]) / (3984263243U % (unsigned int)(
                                                          (int)p_13[0][0][0] + 661) + 1019U)) * (unsigned int)(- p_9[1][2]));
  result = (unsigned long long)((long long)((((int)v ^ (int)p) + ((int)v_5 - 207480037)) | (int)(
                                            (float)(18446744073709523154ULL / (
                                                    v_7 + 606ULL)) - - p_9[0][1])) - - (
                                p_11[0] * -14881LL));
  return result;
}


