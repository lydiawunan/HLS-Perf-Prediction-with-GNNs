#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 771230176
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, float p_5)
{
  char v_9;
  signed char v_7;
  double v;
  unsigned int result;
  v_9 = (char)23;
  v_7 = (signed char)-59;
  v = (double)((int)((float)(- p) / (- p_5 * (float)(~ v_7) + 847.f)) << (
               - (- ((int)v_9 % -35)) & 31));
  result = (unsigned int)(- ((v + 66.) - 4294957329.));
  return result;
}


