#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1003010387
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, float p_5, unsigned char p_7, unsigned char p_9)
{
  short v;
  unsigned char result;
  result = (unsigned char)166;
  v = (short)(- (~ ((unsigned int)result & 13766U)));
  result = (unsigned char)((int)((float)(((int)v - (int)((short)p)) % (
                                         ((int)((signed char)p) - 95) + 537)) * - p_5) + 
                           (((int)p_7 - (int)p_9) << ((int)(- p) & 31)) % 28);
  return result;
}


