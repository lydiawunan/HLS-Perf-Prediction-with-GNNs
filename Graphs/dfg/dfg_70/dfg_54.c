#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 92758354
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p)
{
  unsigned long long v_13;
  unsigned short v_10;
  short v_8;
  double v_6;
  char v_4;
  char v;
  float result;
  v_13 = (unsigned long long)p;
  v_10 = (unsigned short)p;
  v_8 = (short)p;
  v_6 = 379.852403231;
  v = (char)58;
  v = (char)(~ ((int)v_10 / (((int)v >> ((int)p & 7)) + 442) >> (((v_13 - (unsigned long long)p) + (
                                                                  v_13 - (unsigned long long)v_10)) & 31ULL)));
  v_4 = (char)(! (- ((int)((short)(v_6 / ((double)v + 600.))) - (int)(~ v_8))));
  result = (float)(- v_4);
  result = - ((- result + 21446.f) - (float)(~ (! v)));
  return result;
}


