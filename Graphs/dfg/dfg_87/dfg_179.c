#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 208987005
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, unsigned char p_4[1], unsigned int p_6, double p_8,
         float p_10)
{
  signed char v_19;
  unsigned long long v_17;
  unsigned char v_15;
  long long v_13;
  int v;
  long result;
  v_19 = (signed char)p_4[0];
  v_17 = 18446744073709532975ULL;
  v_15 = (unsigned char)114;
  v = -288136548;
  v_13 = (long long)((unsigned long long)(- (- (~ v_15))) * ((v_17 ^ (unsigned long long)(
                                                              (int)((signed char)-1.36892543779e+38) + (int)v_19)) - (unsigned long long)(! (
                                                             v * v))));
  result = (long)(! ((long long)((unsigned long)p * 4294965942UL) / (
                     ~ ((long long)v & v_13) + 816LL)));
  result = (long)(- (! p >> ((int)(~ p_4[0]) & 31)) / ((unsigned int)(
                                                       (double)((long long)(- result) - 
                                                                27154LL * (long long)p_6) - (
                                                       (double)p_6 * p_8 + (double)(- p_10))) + 191U));
  result = result;
  return result;
}


