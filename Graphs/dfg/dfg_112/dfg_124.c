#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 895995507
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p, unsigned char p_4, float p_6[1], char p_8,
                unsigned int p_11)
{
  float v;
  signed char result;
  v = (float)-171690917LL;
  result = (signed char)(((int)((char)((float)((unsigned long)p | 4294946250UL) + (
                                       (float)p_4 + p_6[0]))) - (int)(~ p_8)) % (
                         (int)((-9771724800.f - - v) / ((float)((unsigned long)p_11 + (unsigned long)p) + 389.f)) + 66));
  result = (signed char)(! (70 * (int)((char)-321.619191848) + (int)-2.36943865743e+38) + (int)(- result));
  return result;
}


