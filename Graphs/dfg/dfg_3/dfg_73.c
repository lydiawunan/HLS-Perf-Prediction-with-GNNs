//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 578020497
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, long p_7, long p_9, short p_13)
{
  signed char v_17;
  long v_15;
  unsigned int v_11;
  char v_5;
  long long v;
  long result;
  v_17 = (signed char)p_13;
  v_15 = (long)p_13;
  v_5 = (char)-20;
  v_11 = 17U;
  v = (long long)(- ((int)p_13 - ~ ((int)v_17 * (int)p_13)));
  result = (long)(- ((double)(v - (long long)v_5) / ((double)p_7 * -730.695121133 + 924.)) + (double)(
                  (21168UL % (((unsigned long)p_9 + (unsigned long)v_11) + 71UL)) * (
                  (unsigned long)(p_9 >> ((int)p_13 & 31)) + ((unsigned long)v_15 + 58433UL))));
  result = (long)(35270U % (unsigned int)((int)((char)(- (-440240224.f / (
                                                          (float)result + 823.f)))) % (
                                          (int)p + 143) + 633));
  return result;
}


