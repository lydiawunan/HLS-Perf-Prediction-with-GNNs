#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 292752542
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, unsigned int p_5, unsigned char p_11)
{
  signed char v_13;
  char v_9;
  unsigned long long v_7;
  unsigned char v;
  short result;
  v_13 = (signed char)p_11;
  v_9 = (char)p;
  v = (unsigned char)v_13;
  v_7 = (unsigned long long)((unsigned long)((((unsigned int)p_11 & p_5) % (unsigned int)(
                                              (int)(- p) + 228)) * (unsigned int)v_13) / (
                             (4294908141UL ^ (unsigned long)((int)p + 
                                                             (int)v % (
                                                             (int)v_13 + 550))) + 697UL));
  v = (unsigned char)(((unsigned long long)(((unsigned int)p + p_5) & 45U) & (
                       (unsigned long long)v - ~ v_7)) * - ((unsigned long long)(- v_9)));
  result = (short)v;
  return result;
}


