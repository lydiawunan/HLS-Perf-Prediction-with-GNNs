#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 171831933
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, short p_5[4][5][1], long p_7,
                signed char p_9[5][5][1], double p_19)
{
  char v_17;
  long v_15;
  short v_13;
  long v_11;
  float v;
  signed char result;
  v_15 = 65248L;
  v_13 = (short)p;
  v_17 = (char)-97;
  v_11 = (long)((-8153353297.99 + (double)v_15) + (double)((long)((double)v_17 + - p_19) - ! (~ p_7)));
  v = (float)((long)((int)(- (! p)) * (int)((signed char)((double)p_5[2][1][0] * 883.933391281 + (double)p_7))) ^ (
              (long)(! (~ p_9[3][1][0])) - -1543178385L / ((v_11 & (long)v_13) + 1009L)));
  result = (signed char)v;
  return result;
}


