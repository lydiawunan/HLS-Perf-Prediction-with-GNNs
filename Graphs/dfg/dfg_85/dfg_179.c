#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 192079357
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(long p, unsigned long p_9, unsigned int p_13,
                unsigned int p_15, int p_19)
{
  unsigned char v_17;
  unsigned int v_11;
  float v_7;
  unsigned int v_5;
  short v;
  signed char result;
  v_17 = (unsigned char)p_15;
  v_5 = p_13;
  v_11 = (unsigned int)p_19;
  v = (short)(((v_11 + p_13) * ~ (p_15 / (unsigned int)((int)v_17 + 630))) * (unsigned int)1.64515694898e+38f);
  v_7 = (float)(! (- (4294939176UL % (unsigned long)(p + 572L))) % 332UL);
  result = (signed char)((unsigned long)((float)((unsigned long)((long)v % (
                                                                 p + 533L)) | (unsigned long)(
                                                 (unsigned int)v - v_5)) + 
                                         (float)(v_5 / 4294967169U) / (
                                         - v_7 + 296.f)) * p_9);
  return result;
}


