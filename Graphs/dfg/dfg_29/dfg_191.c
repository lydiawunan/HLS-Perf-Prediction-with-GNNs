#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 477406833
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p, signed char p_4, long p_9, char p_15, char p_17)
{
  char v_13;
  float v_11;
  char v_7;
  unsigned long long v;
  char result;
  v_13 = (char)p;
  v_11 = 154.560638428f;
  v_7 = (char)p_9;
  v_7 = (char)((int)9015177216.f * ((((int)((char)v_11) - (int)v_13) + (
                                     (int)v_7 >> ((int)p_15 & 7))) - ~ (
                                    (int)p_17 % ((int)((char)v_11) + 7))));
  v = (unsigned long long)(- ((float)(- v_7) * - ((float)p_9 / (v_11 + 552.f))));
  result = (char)(-421.318294816 / ((double)(- (! (149ULL + v))) + 54.));
  result = (char)(! (~ (p * (int)p_4 | (int)result)));
  return result;
}


