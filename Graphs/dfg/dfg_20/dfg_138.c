#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 48656665
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(char p, float p_19, unsigned long long p_21)
{
  unsigned int v_16;
  unsigned short v_14;
  char v_12;
  float v_10;
  unsigned int v_8;
  long v_6;
  unsigned int v_4;
  unsigned long long v;
  long long result;
  v_16 = 4206541004U;
  v_14 = (unsigned short)14849;
  v_12 = (char)16;
  v_10 = -7772691968.f;
  v_8 = 3786556727U;
  v_6 = (long)(65032 >> (((unsigned long long)((unsigned int)((int)v_12 - (int)v_14) % (
                                               v_16 / (unsigned int)(
                                               (int)p + 289) + 642U)) - 
                          (unsigned long long)(- p_19) * (p_21 * 118ULL)) & 31ULL));
  v_4 = (unsigned int)(((unsigned long)v_6 + (unsigned long)v_8) % 1UL);
  v = (unsigned long long)v_4;
  result = (long long)(- (v % (- v + 5ULL)));
  return result;
}


