#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1026865460
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p, int p_4, long p_6)
{
  unsigned char v_13;
  signed char v_11;
  unsigned short v_9;
  unsigned short v;
  unsigned int result;
  v_13 = (unsigned char)p_6;
  v_11 = (signed char)-68;
  result = (unsigned int)p_4;
  v_9 = (unsigned short)((int)(~ v_11) + (int)v_13);
  v = (unsigned short)((369896006 - (int)v_9) / -4290);
  result = (unsigned int)((unsigned long)(((unsigned int)(p - p_4) * (
                                           result - 41353U)) / ((unsigned int)(
                                                                (float)(- p_6) + 
                                                                2.95645083254e+38f / (
                                                                (float)v + 672.f)) + 251U)) / (unsigned long)(
                          ~ (p_6 / -95L) * 515371961L + 929L));
  result = (unsigned int)p * result;
  return result;
}


