#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 147668115
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned long long p, signed char p_5, short p_7, float p_11,
         long p_13)
{
  double v_19;
  unsigned long long v_17;
  char v_15;
  unsigned char v_9;
  unsigned long long v;
  long result;
  v_19 = (double)p_7;
  v_15 = (char)p_7;
  result = -1034293192L;
  v_17 = p;
  v_9 = (unsigned char)(((unsigned long long)(39438 * (int)(~ v_15)) & ! v_17) / (unsigned long long)(
                        ~ (((int)((char)v_19) + (int)v_15) * ((int)v_15 + (int)p_7)) + 494));
  v = ((~ p + (unsigned long long)((int)p_5 - 116)) + (unsigned long long)(
       (int)p_7 + 157 * (int)v_9)) ^ (unsigned long long)((unsigned long)(
                                                          (unsigned int)(
                                                          (int)((signed char)p_11) - 66) / (
                                                          (4294965491U - (unsigned int)-502.64302575) + 896U)) - (unsigned long)(
                                                          result / (p_13 + 773L) & 
                                                          (long)v_15 % (
                                                          p_13 + 771L)));
  result = (long)v;
  return result;
}


