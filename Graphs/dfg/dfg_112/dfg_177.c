#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 151065695
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p, unsigned char p_7[4], int p_9, short p_11, short p_21)
{
  long v_19;
  short v_17;
  short v_15;
  float v_13;
  float v_5;
  unsigned long v;
  char result;
  v_19 = 1331L;
  v_17 = (short)13694;
  v_13 = 2.10379983216e+38f;
  v_15 = (short)(! (- ((long)(! p_21) * (v_19 * v_19))));
  v = (unsigned long)(! ((int)p_7[1] / (((int)p & (int)p_7[3]) + 285) + (int)(- (~ p_7[2]))));
  v_5 = (float)((long)(~ (! ((int)v_15 + (int)v_17))) * v_19);
  result = (char)(((long long)(2546948545UL & (v | (unsigned long)p)) | (
                   (long long)(v_5 / 825.f) - (46743LL - (long long)p_7[1]))) | (long long)(
                  (float)p_9 - (float)(-103 + (int)p_11) * - v_13));
  return result;
}


