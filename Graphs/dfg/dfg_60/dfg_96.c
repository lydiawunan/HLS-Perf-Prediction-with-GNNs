#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 629472364
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, unsigned char p_4, unsigned char p_7,
                  unsigned long p_9, unsigned short p_13)
{
  unsigned short v_11;
  float v;
  unsigned char result;
  v_11 = p_13;
  v = (float)(! v_11);
  result = (unsigned char)(0UL / (unsigned long)((unsigned int)(((int)p_4 ^ -13936) % (
                                                                (int)v + 813)) % (
                                                 (4294940016U * (unsigned int)p_7) / (
                                                 (unsigned int)(v / (
                                                                (float)p_9 + 422.f)) + 64U) + 495U) + 834U));
  return result;
}


