#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 533840274
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(signed char p, unsigned long long p_7, signed char p_11,
           unsigned int p_13, unsigned int p_15)
{
  double v_9;
  unsigned short v_4;
  unsigned short v;
  double result;
  v_9 = 742.690318877;
  v_4 = (unsigned short)((4294965806UL | (unsigned long)(p_15 * (unsigned int)p - - p_13)) << (
                         (int)p_11 & 31));
  v_9 = (double)((int)p_11 / ((int)((signed char)(- ((double)(~ p_13) - 
                                                     (double)p * v_9))) + 10));
  v = (unsigned short)(- ((double)(! ((unsigned long long)p / (p_7 + 936ULL))) + 
                          - v_9 / 522.));
  result = (double)(~ (! ((int)v / ((int)v_4 + 944)) << ((int)v & 31)));
  return result;
}


