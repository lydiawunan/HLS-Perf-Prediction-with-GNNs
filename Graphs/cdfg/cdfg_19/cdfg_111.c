#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 151147837
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p[4][1], signed char p_4, double p_7,
          long p_9[5][5], char p_11)
{
  float v_17;
  unsigned char v_15;
  unsigned long v_13;
  char v;
  float result;
  v_17 = (float)p_11;
  v_15 = (unsigned char)p[3][0];
  v_13 = (unsigned long)p_11;
  v = (char)11;
  if (! ((long long)v_17 % ((long long)p_4 % -19265LL + 714LL)) < (long long)(- (- v))) {
    result = (float)(((364250155UL % (unsigned long)((int)p[2][0] + 106)) / (
                      (unsigned long)(- p_7) + 352UL)) * (unsigned long)(
                     (int)(- v_15) ^ ((int)p_11 - (int)p_4)));
    v = ~ p_11;
    v_13 = (unsigned long)((double)(~ (p_9[4][4] % (long)((int)v + 426))) / (
                           (-5002. + (p_7 + (double)result)) + 893.));
  }
  else {
    v_17 = (float)(! (p_9[0][1] - 52L) + -62248944L * p_9[3][3]);
    v_15 = (unsigned char)(((int)((char)v_17) - (int)(~ p_11)) | (int)p_11 * 15231);
    v = (char)(~ ((int)p_4 - (int)v_15) % -37807);
  }
  if ((unsigned long long)((int)p_4 / ((int)v + 135) ^ (int)p_7) <= (unsigned long long)p_9[3][3] % (
                                                                    (unsigned long long)(
                                                                    (unsigned long)p_11 - v_13) + 202ULL)) 
    result = (float)-252998847L;
  else result = (float)(! p[0][0]);
  return result;
}


