#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1058590720
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p[2][2], unsigned char p_5,
                 unsigned long long p_7, long p_15, unsigned char p_17[2])
{
  unsigned short v_13;
  unsigned char v_11;
  unsigned long long v_9;
  char v;
  unsigned int result;
  v_13 = (unsigned short)p_17[0];
  v_11 = (unsigned char)(((long)(((int)p[1][1] * (int)p[0][1]) / ((int)p_5 + 248)) / (
                          21560L * ((long)v_13 - p_15) + 795L)) * (long)(- (
                         (int)p_17[1] + (int)(! p[1][1]))));
  v_9 = (unsigned long long)v_11;
  v = (char)(((unsigned long long)(! (246 + (int)p_5)) - ! (365335781ULL % (
                                                            p_7 + 697ULL))) >> (
             15337ULL / (((unsigned long long)(22227L + (long)-2.42097473377e+38f) ^ v_9) + 1011ULL) & 63ULL));
  result = (unsigned int)((int)((signed char)((double)(((int)v & (int)p[1][0]) << (
                                                       (int)(~ p[0][0]) & 31)) * (
                                              1130875934.17 - (double)(- p[0][0])))) + (int)(! p[0][1]));
  return result;
}


