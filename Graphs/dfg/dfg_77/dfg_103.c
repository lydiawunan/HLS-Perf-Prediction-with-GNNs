#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 387712572
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p, signed char p_9, unsigned int p_13, short p_15)
{
  unsigned long v_19;
  signed char v_17;
  char v_11;
  long v_7;
  char v_5;
  unsigned short v;
  char result;
  v_19 = 44708UL;
  v_17 = (signed char)14;
  v_11 = (char)2;
  v_5 = (char)p_13;
  result = (char)116;
  v_7 = (long)(((unsigned long long)(781224762 & (int)v_5) - ((unsigned long long)v_11 - 18446744073709546838ULL)) / (unsigned long long)(
               (int)p_9 + 391) + (unsigned long long)((p_13 % (unsigned int)(
                                                       (int)p_15 + 1004) - (unsigned int)v_17) >> (
                                                      ! v_19 & 31UL)));
  v = (unsigned short)((- p >> ((int)(~ result) & 31)) / 93L + (((v_7 & p) + 
                                                                 v_7 / (
                                                                 p + 539L)) >> (
                                                                ! (51838ULL / (unsigned long long)(
                                                                   (int)p_9 + 467)) & 31ULL)));
  v_5 = (char)114887611.964;
  result = (char)(- ((float)((long)v * (p + -49703L)) / (- ((float)v_5 / 591545536.f) + 313.f)));
  return result;
}


