#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 394089454
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned char p, short p_9[1], unsigned char p_11)
{
  char v_7;
  long v_5;
  unsigned char v;
  double result;
  v_7 = (char)-11;
  result = -961.341708429;
  v = p_11;
  v_5 = (long)(77817043513. / (result + 212.) - (double)(- ((int)p / (
                                                            (int)((unsigned char)result) + 893)) / 64340));
  v = (unsigned char)(- ((((int)v_7 - (int)p_9[0]) * (int)p_9[0]) % (
                         (int)(~ v) + 1001)));
  result = (double)((421481090UL % (unsigned long)((int)v + 337) - (unsigned long)(! p)) - (unsigned long)v_5);
  return result;
}


