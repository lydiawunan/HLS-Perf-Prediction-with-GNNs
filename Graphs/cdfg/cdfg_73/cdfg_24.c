#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 475105733
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned char p, unsigned long long p_9)
{
  unsigned char v_6;
  unsigned long v_4;
  float v;
  unsigned long result;
  v_6 = (unsigned char)p_9;
  v_4 = 23061UL;
  v = (float)(((unsigned long long)((int)((unsigned char)-5.71741260827e+37) % (
                                    (int)p + 288)) + ~ p_9) - (unsigned long long)(
              (unsigned int)((int)p * 6137) % (127710920U / ((unsigned int)-551.049007698 + 971U) + 831U)));
  result = (unsigned long)((int)v << 16) ^ (! v_4 + (unsigned long)(! v_6));
  return result;
}


