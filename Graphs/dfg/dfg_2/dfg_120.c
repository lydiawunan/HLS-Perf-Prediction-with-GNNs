//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 535744051
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, unsigned char p_9, long long p_11, int p_15)
{
  unsigned char v_13;
  float v_7;
  long v_5;
  unsigned short v;
  int result;
  v_13 = (unsigned char)157;
  v_5 = (long)(p_11 * (long long)((245 - (int)v_13) / 37491 + p_15));
  v_7 = (float)12721948;
  v = (unsigned short)(! (~ (-24939LL >> (v_5 & 63L)) % ((long long)(- (
                                                         v_7 + (float)p_9)) + 421LL)));
  result = (int)((long)(- (~ ((int)v + (int)p))) / (v_5 + 792L));
  return result;
}


