#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 204263114
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(char p, unsigned short p_4, double p_7, char p_9, long p_13)
{
  unsigned long v_11;
  unsigned char v;
  short result;
  v_11 = (unsigned long)p_13;
  result = (short)p_13;
  v = (unsigned char)40;
  v = (unsigned char)((unsigned long)(- ((int)((short)(-57. - p_7)) - (int)(! result))) / (
                      (((unsigned long)((int)v / ((int)p_9 + 50)) - v_11 / (
                                                                    (unsigned long)-485.95916461 + 895UL)) - 
                       (unsigned long)(- p_4) / ((unsigned long)p_13 / (
                                                 v_11 + 540UL) + 89UL)) + 452UL));
  result = (short)((unsigned long long)(((int)p_4 << ((int)v / ((int)((unsigned char)p_7) + 255) & 15)) << (
                                        (int)(~ (! result)) & 31)) & ~ (
                   851583975ULL << ((994665157LL + (long long)p_4) & 63LL)));
  result = (short)(-15 - ! ((int)result % ((int)(- p) + 626)));
  return result;
}


