#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 158685753
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned int p, float p_11, unsigned int p_17[3][3], long long p_19)
{
  short v_21;
  unsigned int v_15;
  short v_13;
  char v_9;
  float v_6;
  char v_4;
  long long v;
  short result;
  v_21 = (short)p_19;
  v_13 = (short)p_19;
  v_9 = (char)-123;
  v_6 = (float)p_17[2][0];
  result = (short)12591;
  v_15 = (unsigned int)(p_19 * ~ ((long long)(58 * (int)v_21) + (p_19 - (long long)p)));
  v_4 = (char)((unsigned int)((int)v_13 << (((39345ULL - (unsigned long long)v_13) + (unsigned long long)(
                                             (long)v_13 * 46175L)) & 15ULL)) - (
               (unsigned int)(p_11 * 4294905088.f + (float)(v_15 + p_17[2][2])) ^ ! (
               p * (unsigned int)result)));
  v = (long long)(((! p + p) * p) * ((unsigned int)(86 / ((int)v_9 + 496)) * (
                                     (unsigned int)p_11 * p) - (unsigned int)p_11));
  result = (short)(v % (long long)(((unsigned int)((39184 - (int)v_4) / (
                                                   (int)(v_6 * (float)result) + 448)) - (
                                    - p << 11ULL)) + 67U));
  return result;
}


