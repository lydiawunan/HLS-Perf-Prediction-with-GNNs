#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 531986800
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned int p[1], unsigned long p_5, unsigned short p_7)
{
  float v_17;
  unsigned int v_15;
  short v_13;
  int v_11;
  int v_9;
  signed char v;
  int result;
  v_15 = (unsigned int)p_5;
  v_13 = (short)p[0];
  v_11 = (int)p_5;
  v_9 = 36174;
  v = (signed char)118;
  result = (int)p_7;
  v_17 = (float)(! ((int)p_7 / ((int)p_7 + 169)) ^ - v_11);
  while ((int)((unsigned short)((float)(- (53 << ((int)v & 7))) * ((float)(~ p[0]) * (
                                                                   3006654720.f / (
                                                                   (float)p_5 + 255.f))))) < (int)p_7) {
    v_11 = (int)v_13 - (v_11 + v_9 % 190);
    result = (int)(1034867319U + ((unsigned int)v_17 << (~ v_15 & 31U)));
    v_15 = (unsigned int)p_5;
    v = (signed char)((p[0] + v_15) / 729U & p[0]);
  }
  while_0_break: ;
  return result;
}


