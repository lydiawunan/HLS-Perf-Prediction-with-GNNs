#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 476394189
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p[4][2][4], long p_4[2][1][4], unsigned int p_11,
         unsigned char p_15, long p_17)
{
  signed char v_13;
  short v_9;
  signed char v_7;
  int v;
  char result;
  v_13 = (signed char)p_17;
  v_9 = (short)p_4[0][0][2];
  v_7 = (signed char)p[0][1][1];
  v = 37769;
  v_7 = (signed char)((unsigned long)v_7 - ((unsigned long)((long)p_15 ^ 
                                                            (long)p[1][0][3] % (
                                                            p_17 + 785L)) + (unsigned long)(! (
                                            p_11 + (unsigned int)v))));
  v_9 = (short)((long long)((~ p_11 << (p_11 % (unsigned int)((int)v_13 + 211) & 31U)) >> (
                            - (p[2][1][2] - (int)v_13) & 31)) % (((long long)v_9 % -18888LL + -2LL) + 443LL));
  v = (int)v_9;
  result = (char)(215L % ((long)p[0][0][3] / ((p_4[1][0][0] * 61269L) % (long)(
                                              v * (int)v_7 + 980) + 874L) + 517L));
  return result;
}


