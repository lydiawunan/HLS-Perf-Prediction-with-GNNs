#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 827299689
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(char p[3][2], double p_5, char p_7, long p_11, long p_13)
{
  unsigned int v_23;
  unsigned char v_21;
  int v_19;
  double v_17;
  unsigned char v_15;
  long v_9;
  unsigned short v;
  unsigned int result;
  v_23 = (unsigned int)p_7;
  v_21 = (unsigned char)72;
  v_17 = (double)p_7;
  v_15 = (unsigned char)p_11;
  v = (unsigned short)59482;
  result = 4294932204U;
  if ((long)v_15 != ~ (~ p_11 * (long)v_15)) {
    v_19 = (int)((p_11 + (long)((int)p[2][0] - (int)v)) / (long)((int)p_7 + 304));
    v_15 = (unsigned char)(((int)p[0][0] - 207 * v_19) / 234);
    v_9 = (long)((int)v_17 * -464702891);
  }
  else {
    v_9 = (long)(- (! result * (unsigned int)(~ v_21)));
    v_23 = (unsigned int)((long long)(v_23 | (unsigned int)v_15) + -53714780LL * (long long)v);
    v_9 = (long)((unsigned long)v_21 * ((unsigned long)(51013U & v_23) - (unsigned long)(~ v_9)));
  }
  if (((v_9 / (p_11 + 824L)) / (p_13 / (p_11 + 573L) + 628L)) * (long)v_15 <= (long)(! (
      (int)((char)p_5) - -22))) {
    result = (unsigned int)p[0][1];
    v = (unsigned short)(- (- 4626.81542969f));
    result = 0U;
  }
  else result = (unsigned int)(((p_5 + 438599732.) + (double)((int)p_7 / 105)) + 92.);
  return result;
}


