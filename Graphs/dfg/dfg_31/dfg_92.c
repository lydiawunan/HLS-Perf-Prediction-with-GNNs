#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 779989677
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, unsigned short p_7, unsigned int p_11,
         unsigned char p_13)
{
  char v_15;
  long v_9;
  signed char v_4;
  unsigned int v;
  char result;
  v_15 = (char)p;
  v = 44607U;
  v_9 = (long)p_13;
  v_9 = (long)((unsigned long)(! ((unsigned int)p_13 + p_11) * (unsigned int)(~ (! v_15))) & (unsigned long)v_9);
  v_4 = (signed char)(- ((unsigned long)((-28543 % ((int)p + 26)) * (
                                         (int)p_7 - 60965)) - (unsigned long)(
                                                              v_9 - 63263L) / (unsigned long)(
                                                              ! p_11 + 802U)));
  result = (char)(- ((48325UL - (unsigned long)(v % (v + 1013U))) / (
                     ! (1025113212UL - (unsigned long)v_4) + 903UL)));
  return result;
}


