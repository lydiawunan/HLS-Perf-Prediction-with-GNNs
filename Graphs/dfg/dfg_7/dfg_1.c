//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1062759671
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, double p_7, unsigned char p_11[1],
                 unsigned char p_13, short p_15)
{
  unsigned int v_9;
  unsigned short v_5;
  float v;
  unsigned int result;
  v_9 = (unsigned int)(- ((int)((unsigned char)p_7) + (int)p_11[0])) - (unsigned int)p_15;
  v_5 = (unsigned short)v_9;
  v = (float)(~ (- ((int)v_5 ^ -4964) | (int)(- (- p_7))));
  result = (unsigned int)(p - (double)v);
  return result;
}


