#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1002270072
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long long p, unsigned short p_4, int p_6,
                  unsigned int p_8, signed char p_13)
{
  unsigned long long v_11;
  double v;
  unsigned char result;
  v_11 = (unsigned long long)p_13 - (p - (unsigned long long)((15917 * (int)p_4) * 526152267));
  v = (double)v_11;
  result = (unsigned char)(~ (1593019948U - p_8) / (unsigned int)((int)(- p_4) + 1023) + 
                           212U / (p_8 / ((unsigned int)(26010. + v) + 528U) + 574U));
  result = (unsigned char)(((24692ULL * ~ p) / (unsigned long long)((
                                                                    20 / (
                                                                    (int)p_4 + 931) - ! p_6) + 251)) % (unsigned long long)(
                           p_8 % (unsigned int)(((int)(! result) + (int)((unsigned char)v)) + 997) + 85U));
  return result;
}


