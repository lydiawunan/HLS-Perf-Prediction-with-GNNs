#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 359404379
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p[5][5])
{
  unsigned char v_15;
  long v_13;
  long long v_11;
  char v_8;
  unsigned long v_6;
  unsigned int v_4;
  unsigned char v;
  unsigned long result;
  v_15 = (unsigned char)p[1][3];
  v_13 = (long)p[4][3];
  v_11 = -62715LL;
  v_8 = (char)p[1][0];
  v_4 = (unsigned int)(- p[0][3] + (float)((long)(- ((double)v_11 * -8630298670.74)) + 
                                           (-15L * v_13) * (long)v_15));
  v_6 = (unsigned long)v_8;
  v = (unsigned char)(! ((unsigned long)(- (v_4 + 597U)) % (~ v_6 + 656UL)));
  result = (unsigned long)(! v);
  return result;
}


