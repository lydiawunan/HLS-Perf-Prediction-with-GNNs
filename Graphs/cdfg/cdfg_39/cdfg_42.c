#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 787501610
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, unsigned char p_13[4][4][3], float p_19)
{
  unsigned long long v_17;
  long long v_15;
  unsigned char v_11;
  long v_9;
  unsigned short v_7;
  unsigned long long v_5;
  int v;
  long result;
  v_17 = (unsigned long long)p_13[0][0][2];
  v_15 = -450788191LL;
  v_11 = p_13[3][1][0];
  v_9 = -644272122L;
  v_5 = (unsigned long long)p_13[1][2][2];
  result = (long)p;
  v_7 = (unsigned short)(- (0 / (long)((int)v_11 + 539)));
  if (((unsigned long long)(-72 * (int)((char)3.33775506249e+38f)) | 
       v_5 % (unsigned long long)((int)v_11 + 522)) + (unsigned long long)(
      (long long)((int)((unsigned char)853.215637207f) - (int)p_13[3][3][0]) ^ -575919344LL) != 
      (unsigned long long)(((long)p_13[0][0][0] % (result + 522L)) * (long)(
                           (int)v_11 << 2)) / (((unsigned long long)v_15 / (
                                                v_17 + 711ULL)) % ((unsigned long long)(
                                                                   (float)p_13[0][2][2] + p_19) + 727ULL) + 365ULL)) 
    result = (long)p;
  else {
    v = (int)(! (~ v_5) + (unsigned long long)((long)(! v_7) - v_9));
    v = ! v & (int)-3027917358.9;
    result = (long)(74 * ((51 + (int)p) + ~ v));
  }
  return result;
}


