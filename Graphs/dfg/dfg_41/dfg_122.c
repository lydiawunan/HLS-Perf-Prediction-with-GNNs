#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 299233395
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, unsigned char p_5, unsigned short p_11,
                 double p_13[2])
{
  int v_9;
  unsigned long v_7;
  unsigned short v;
  unsigned int result;
  v_9 = (int)p_11;
  v_7 = - ((unsigned long)(- v_9) % ((253227159UL ^ (unsigned long)p_11) + 409UL) + (unsigned long)p_13[0]);
  result = (unsigned int)v_7;
  v = (unsigned short)14528;
  result = (unsigned int)((int)p ^ 121) % (! (~ result) + 305U) + (unsigned int)(- (
           ((float)v * -2782953472.f) * (float)(- p_5)));
  return result;
}


