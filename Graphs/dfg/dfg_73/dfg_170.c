#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 311673021
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p)
{
  unsigned long v_13;
  signed char v_11;
  float v_9;
  double v_7;
  signed char v_5;
  unsigned long v;
  unsigned int result;
  v_13 = (unsigned long)p;
  v_11 = (signed char)p;
  v_7 = (double)p;
  v_9 = (float)(! (((unsigned long)v_11 * v_13 + (unsigned long)(-3.35737241188e+38 + v_7)) / (unsigned long)(
                   (int)(! (~ p)) + 855)));
  v_5 = (signed char)(- (v_7 * (double)(- (- v_9))));
  v = (unsigned long)((long long)p & - ((14938LL >> ((int)v_5 & 63)) % 4294913410LL));
  result = (unsigned int)(~ v);
  return result;
}


