#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 776761693
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p[1][2], long long p_11, long p_13[3][1],
         unsigned long long p_17)
{
  unsigned short v_15;
  unsigned short v_9;
  unsigned int v_7;
  unsigned int v_4;
  unsigned int v;
  char result;
  v_15 = (unsigned short)p_13[0][0];
  v_9 = (unsigned short)3796;
  v = (unsigned int)p_13[0][0];
  v_9 = v_9;
  v_7 = (unsigned int)((unsigned long long)((long long)v_9 + ~ (p_11 & (long long)p_13[0][0])) / (
                       ((unsigned long long)(! (p_11 % (long long)((int)v_15 + 936))) - ~ (
                        p_17 * (unsigned long long)p_11)) + 686ULL));
  v_4 = v_7;
  result = (char)((unsigned long)v * (4294904212UL + (unsigned long)(
                                      69U * v_4)) ^ (unsigned long)(~ (- p[0][1])));
  return result;
}


