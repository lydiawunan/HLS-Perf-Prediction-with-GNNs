#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 13127748
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(signed char p)
{
  char v_15;
  char v_12;
  unsigned long long v_10;
  int v_8;
  signed char v_6;
  double v_4;
  float v;
  char result;
  v_15 = (char)p;
  v_12 = (char)-34;
  v_10 = 18446744073709496785ULL;
  v_6 = (signed char)84;
  v_8 = ((int)v_12 ^ (int)(~ p)) / (~ ((int)v_15 - (int)p / 2) + 668);
  v_4 = (double)(! ((unsigned long long)((unsigned int)((int)v_6 / (v_8 + 606)) + 4294946223U) * ~ (! v_10)));
  v = (float)(- (- (- v_4 / 4294962477.)));
  result = (char)((float)(-97 * (-93 - (int)((signed char)(- v)))) - 2.32585489768e+38f);
  return result;
}


