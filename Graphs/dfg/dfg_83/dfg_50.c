#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 641713919
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(float p, unsigned short p_5, unsigned int p_7, short p_11)
{
  float v_9;
  float v;
  unsigned short result;
  v_9 = (float)p_11;
  v = (float)((int)((unsigned short)(- (- p))) - (int)(~ (- p_5))) - - (
      (float)(p_7 + 774U) + v_9);
  result = (unsigned short)v;
  return result;
}


