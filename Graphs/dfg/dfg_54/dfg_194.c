#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 932580242
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p, float p_9, unsigned char p_11)
{
  float v_7;
  unsigned short v_4;
  signed char v;
  long result;
  v_7 = 652.235595703f;
  result = (long)p_11;
  v_4 = (unsigned short)(- (! 22741));
  v = (signed char)(- ((double)(- p_9) * ((double)v_7 + 850.043392509) - (double)(
                       (float)(- result) + v_7)));
  result = (long)((((float)v - 3.3990854183e+38f) - (float)(((int)v_4 - (int)p) % (
                                                            (int)(- v_7) + 29))) * (float)(~ (- (~ v_4))));
  return result;
}


