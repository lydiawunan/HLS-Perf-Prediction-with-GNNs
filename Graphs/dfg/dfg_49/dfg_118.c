#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 97509336
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p, unsigned long p_4, unsigned int p_9,
                 double p_15)
{
  unsigned short v_13;
  short v_11;
  unsigned char v_7;
  float v;
  unsigned int result;
  v_13 = p;
  v_7 = (unsigned char)15;
  v_11 = (short)(- (p_15 / 4294968085.));
  v = (float)(- ((unsigned int)(! (! v_7)) / (~ p_9 % (unsigned int)(
                                              (int)v_11 * (int)v_13 + 488) + 434U)));
  result = (unsigned int)v;
  result = (unsigned int)(4294967293UL * ((unsigned long)(! ((int)p % -18452)) % (
                                          2451UL / (p_4 % (unsigned long)(
                                                    result + 49U) + 487UL) + 65UL)));
  return result;
}


