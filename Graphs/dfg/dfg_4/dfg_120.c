//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 305558537
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p, long p_5, unsigned char p_9,
                       unsigned long long p_11, char p_13)
{
  int v_7;
  unsigned long long v;
  unsigned long long result;
  v_7 = (int)(- (! (p % 45U)));
  v_7 = (int)(((unsigned long long)p_9 + p_11 * (unsigned long long)(
                                         p_5 + (long)p_13)) | (unsigned long long)v_7);
  v = (unsigned long long)(! ((unsigned long)p + ((unsigned long)p_5 / (unsigned long)(
                                                  p + 572U) ^ (unsigned long)(! v_7))));
  result = v;
  return result;
}


