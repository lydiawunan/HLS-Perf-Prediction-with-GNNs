#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 384089997
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, long long p_4, long p_9, long p_11[4][5][2],
                   double p_13[2][3][2])
{
  unsigned short v_17;
  int v_15;
  char v_7;
  char v;
  unsigned short result;
  v_17 = (unsigned short)p_4;
  if (p_11[1][3][0] >= (long)(((p_13[0][2][1] + -1.39060408843e+38) + (double)(
                               (int)v_17 - 643)) / ((-9002589. + (double)p_4 / (
                                                                 p_13[1][1][0] + 239.)) + 679.))) {
    result = (unsigned short)(103 - (int)((unsigned char)795190757.409));
    v = (char)p_13[0][2][1];
  }
  else {
    v_15 = -417377029;
    v = (char)(0U % ((unsigned int)p_13[1][0][0] + 418U));
    result = (unsigned short)(p_4 + (long long)(v_15 / ((int)p + 383) + ~ v_15));
  }
  while (- (((long long)p % (p_4 + 660LL)) * (long long)(25875 * (int)result)) > (long long)result) {
    v = v;
    v_7 = (char)((long)(89 % ((int)(! p) + 785)) % (! (p_11[0][3][1] / -128L) + 746L));
    result = (unsigned short)(((long)v_7 % (p_9 * (long)v_7 + 206L)) * (long)p);
  }
  while_0_break: ;
  return result;
}


