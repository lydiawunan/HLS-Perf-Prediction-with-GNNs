#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 676418251
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, int p_4, unsigned short p_9)
{
  unsigned short v_7;
  unsigned int v;
  unsigned short result;
  v_7 = p_9;
  v = 3952648874U;
  result = p_9;
  result = (unsigned short)((unsigned int)(- (~ ((int)p_9 << ((int)result & 15)))) * v);
  v_7 = v_7;
  result = (unsigned short)((unsigned long)(- p % ((int)result + 648)) % (
                            ((unsigned long)p_4 - (unsigned long)(v / (unsigned int)(
                                                                  (int)v_7 + 184)) % 4294923746UL) + 988UL));
  return result;
}


