#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 585041624
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, long p_5[4], unsigned long long p_13)
{
  long long v_15;
  signed char v_11;
  float v_9;
  unsigned char v_7;
  unsigned short v;
  signed char result;
  v_15 = 812045021LL;
  v_7 = (unsigned char)p_5[3];
  v_9 = (float)((long long)(81L % (- (- p_5[1]) + 368L)) % (v_15 + 345LL));
  v_11 = (signed char)(- p_13);
  v = (unsigned short)((int)((signed char)v_9) + (int)v_11);
  result = (signed char)((int)(! v) >> ((long)p / ((896266574L + p_5[2]) * (long)v_7 + 18L) & 15L));
  return result;
}


