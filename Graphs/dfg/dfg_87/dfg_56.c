#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 239223986
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, double p_4, unsigned int p_9)
{
  signed char v_15;
  unsigned long long v_13;
  unsigned int v_11;
  float v_7;
  long long v;
  unsigned int result;
  v_15 = (signed char)-5;
  v_11 = (unsigned int)p_4;
  v_13 = (unsigned long long)(((4294963054UL - (unsigned long)-4687869952.f) | (unsigned long)(! v_15)) / (unsigned long)(
                              - (((unsigned int)v_15 * 268715416U) % 80U) + 814U));
  v_7 = (float)(~ ((unsigned long long)(- (v_11 + 95U)) - - (! v_13)));
  v = (long long)p_9;
  result = (unsigned int)(9167692800.f * (float)((long long)((int)(6651718144.f * (float)p) % (
                                                             (2 & (int)((unsigned char)p_4)) + 406)) - (
                                                 ! v & (long long)v_7)));
  return result;
}


