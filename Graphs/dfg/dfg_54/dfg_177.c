#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 507063767
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p)
{
  int v_11;
  float v_8;
  float v_6;
  unsigned char v_4;
  unsigned char v;
  unsigned long result;
  v_11 = p;
  v_6 = (float)p;
  v_8 = (float)(! v_11);
  v_4 = (unsigned char)((unsigned long long)v_8 - (unsigned long long)p / (
                                                  (34088ULL + (unsigned long long)(
                                                   5825UL % ((unsigned long)v_8 + 505UL))) + 215ULL));
  v = (unsigned char)((int)v_4 % ((int)((unsigned char)v_6) + 299));
  result = (unsigned long)(! v);
  return result;
}


