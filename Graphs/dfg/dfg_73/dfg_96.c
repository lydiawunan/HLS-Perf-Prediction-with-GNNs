#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 970740024
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(char p, unsigned long p_5, short p_9,
                       unsigned int p_13, unsigned char p_15)
{
  unsigned int v_19;
  signed char v_17;
  unsigned short v_11;
  float v_7;
  long v;
  unsigned long long result;
  v_19 = p_13;
  v_17 = (signed char)-54;
  v_11 = (unsigned short)p_5;
  v_7 = -4575401472.f;
  result = (unsigned long long)(((unsigned int)v_11 - ! p_13) / (unsigned int)(
                                ((int)p - (int)p_15) % ((int)v_17 + 251) + 295) - (unsigned int)(
                                v_7 / ((float)(3809U * (p_13 - v_19)) + 905.f)));
  v = (long)(! result);
  result = (unsigned long long)(~ p_9);
  result = (unsigned long long)((float)((unsigned long long)v - (24751ULL - result) % (unsigned long long)(
                                                                (int)(- p) + 715)) - 
                                (float)((unsigned long long)(v * v) - 
                                        18446744073709526218ULL * (unsigned long long)p_5) / (
                                - (- v_7) + 522.f));
  return result;
}


