#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 562568130
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p, char p_11)
{
  unsigned long v_9;
  char v_6;
  float v_4;
  unsigned long v;
  int result;
  v_9 = (unsigned long)p;
  v_4 = (float)p_11;
  v_6 = (char)((p * (unsigned long long)(~ (v_9 + 1049480712UL))) % (unsigned long long)(
               (int)((char)-9079180014.58) % ((int)(~ (- p_11)) + 663) + 857));
  v_4 = (float)((unsigned long)v_4 - 4232953793UL);
  v = (unsigned long)(- ((unsigned long long)((int)((char)(- v_4)) ^ (int)v_6) % (
                         4294933405ULL % ((p - p) + 676ULL) + 734ULL)));
  result = (int)v;
  return result;
}


