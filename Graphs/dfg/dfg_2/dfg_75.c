//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1026354682
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long long p, unsigned char p_5,
                       unsigned short p_7, int p_9, int p_11)
{
  long v;
  unsigned long long result;
  result = 18446744073709506477ULL;
  v = (long)(~ (- (p_11 - 35358) % (p_11 + 325)));
  result = ~ ((unsigned long long)p_9 / ((unsigned long long)(-653425856LL % (long long)(
                                                              v + 438L)) % (
                                         (result - (unsigned long long)p_11) + 74ULL) + 923ULL));
  result = (unsigned long long)v / ((p + (unsigned long long)p_5 * result) / (unsigned long long)(
                                    ~ ((unsigned int)p_7 / 4294921183U) + 833U) + 986ULL);
  result = result;
  return result;
}


