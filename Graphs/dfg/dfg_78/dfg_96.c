#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 646029989
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned int p, double p_4, unsigned long p_6, float p_8[5],
         int p_10)
{
  char result;
  result = (char)(- ((unsigned long long)((4294967230UL / (p_6 + 672UL)) / 37653UL) ^ (
                     (unsigned long long)(p - 162U) - 18446744073619456231ULL)));
  result = (char)((float)((unsigned long)(~ p ^ (unsigned int)((int)((char)p_4) % (
                                                               (int)result + 146))) / (
                          p_6 + 108UL)) * ((p_8[1] / ((float)p_6 + 185.f)) * (float)(- p_10) - (float)(! (
                                           (int)result + 225))));
  return result;
}


