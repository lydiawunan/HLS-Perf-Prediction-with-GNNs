#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 188568996
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(long p, char p_4, int p_6, signed char p_8, unsigned char p_11)
{
  float v_23;
  unsigned char v_21;
  signed char v_19;
  unsigned int v_17;
  unsigned long v_15;
  unsigned int v_13;
  signed char v;
  short result;
  v_23 = (float)p_4;
  v_21 = (unsigned char)p_6;
  v_19 = (signed char)p;
  v_17 = 4294966780U;
  v_15 = (unsigned long)((v_17 % (unsigned int)((int)v_19 % -7 + 685)) % (unsigned int)(
                         (- ((int)p_11 - (int)v_21) << (((long long)(
                                                         -122738851 - (int)p_4) + (
                                                         (long long)v_23 + -669559916LL)) & 31LL)) + 500));
  v = (signed char)((unsigned long)p_8 / (((unsigned long)p_4 & v_15) + 18UL));
  v_13 = (unsigned int)(-541262414L - (long)(~ ((int)((unsigned char)-5.61768338457e+37f) << (
                                                (int)p_11 & 7)) % ((int)(! p_4) + 240)));
  result = (short)((float)((unsigned long)(25726L / (p * (long)p_4 + 228L)) / (unsigned long)(
                           (unsigned int)(p_6 * (int)p_8) / ((3558712990U + (unsigned int)v) + 733U) + 35U)) / (
                   ((float)p_11 + (-1.33175842921e+38f - (float)((unsigned int)p_6 + v_13))) + 482.f));
  return result;
}


