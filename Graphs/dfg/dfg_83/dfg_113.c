#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 650007271
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, unsigned int p_5)
{
  signed char v;
  char result;
  v = (signed char)-1.10008847542e+38;
  result = (char)p_5;
  result = (char)(((unsigned long)(! p) / (~ (4099937392UL % (unsigned long)(
                                              (int)v + 68)) + 1013UL)) / (unsigned long)(
                  (int)(- result) + 312));
  return result;
}


