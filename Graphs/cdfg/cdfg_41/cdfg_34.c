#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 80082125
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, unsigned long long p_4, unsigned short p_6)
{
  double v;
  char result;
  v = (double)p;
  if ((double)(- p_6) != v) result = (char)(~ (~ ((unsigned long)p_6 / (
                                                  p + 203UL))));
  else result = (char)18;
  result = (char)(((unsigned long long)(p % (unsigned long)((int)result + 157)) + 
                   18446744073304546962ULL * p_4) * 18446744073237493392ULL);
  return result;
}


