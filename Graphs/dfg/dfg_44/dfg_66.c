#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 533026139
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p)
{
  int v_8;
  float v_6;
  unsigned char v_4;
  unsigned short v;
  signed char result;
  v_8 = 10544;
  v_6 = 3.10055958384e+38f;
  v = (unsigned short)((float)(~ p) * (- (- v_6) - (float)(45382 << (
                                                           (int)p & 31))));
  v_4 = (unsigned char)(~ ((long long)v_8 % ((-7812275200LL + (34736LL ^ (long long)p)) + 425LL)));
  v_4 = v_4;
  result = (signed char)(- ((int)v + ((int)v_4 ^ 22)) / (! (125 * (int)((char)(- v_6))) + 190));
  return result;
}


