#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 187770544
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(float p, char p_9)
{
  double v_7;
  float v_4;
  long v;
  unsigned long result;
  v_4 = (float)p_9;
  v_4 = (float)9774;
  v_7 = (double)((p + (float)(((int)((char)p) / -9) * (int)(-572.104507322 * (double)p_9))) - 0.f);
  v = (long)v_7;
  result = (unsigned long)(! ((v - (long)v_4) / 30103L) % ((long)p + 915L));
  return result;
}


