#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 181816235
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(short p)
{
  float v_17;
  short v_15;
  short v_13;
  unsigned char v_11;
  unsigned short v_9;
  double v_7;
  unsigned long long v_5;
  long long v;
  float result;
  v_17 = -9185371136.f;
  v_15 = p;
  v_13 = (short)1119;
  v_7 = (double)p;
  if ((float)(- ((int)v_13 * (int)v_15) | - ((int)((unsigned short)v_17) % 52837)) > -8380373504.f) {
    v_5 = (unsigned long long)(- v_7);
    result = (float)((unsigned long long)((int)(! p) - 192) - ! v_5);
    v = (long long)result;
  }
  else {
    v_11 = (unsigned char)219;
    v_9 = (unsigned short)(((unsigned long long)-6101349376.f << 28ULL) ^ (unsigned long long)(- (
                           (int)v_11 * (int)p)));
    v = (long long)v_9;
  }
  result = (float)(! (v % 80LL));
  return result;
}


