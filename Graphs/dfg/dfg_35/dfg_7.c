#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 321134075
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p[5], char p_9, short p_11, unsigned int p_13,
                 char p_21)
{
  unsigned short v_23;
  unsigned long v_19;
  long v_17;
  long v_15;
  unsigned long long v_7;
  unsigned long long v_5;
  unsigned int v;
  unsigned int result;
  v_23 = (unsigned short)p_9;
  v_19 = 4294923258UL;
  v_17 = -20597L;
  v_15 = -501084478L;
  result = p_13;
  v = ((unsigned int)(853.92364502f * (float)result) / (p_13 + 250U) << (
       (long)p_9 & 31L)) * (unsigned int)((int)(809.038696289f / ((float)p_21 + 865.f) - (float)(~ p_9)) % (
                                          ((int)p_9 - ((int)v_23 + 908646992)) + 86));
  v_5 = (unsigned long long)((unsigned long)v_15 * ! (- ((unsigned long)v_17 + v_19)));
  v_7 = (unsigned long long)(! (! (~ p_13)));
  result = (unsigned int)((unsigned long long)(v * (unsigned int)p[2]) / (
                          ~ v_5 % (v_7 + 300ULL) + 533ULL) | (unsigned long long)((long)(
                          (int)(! p_9) - (int)p_11 * (int)p_11)));
  return result;
}


