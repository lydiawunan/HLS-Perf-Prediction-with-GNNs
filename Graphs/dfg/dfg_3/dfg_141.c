//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 90242318
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p, unsigned int p_7, double p_9)
{
  unsigned long long v_5;
  char v;
  unsigned char result;
  v_5 = (unsigned long long)p_9;
  v = (char)31;
  v = - v;
  result = (unsigned char)(- p_9);
  result = (unsigned char)(~ (((int)result | (int)result) % (78 / ((int)v + 879) + 665) << (
                              (unsigned long long)((int)p % ((int)v + 595)) % (
                              (v_5 & (unsigned long long)p_7) + 66ULL) & 31ULL)));
  return result;
}


