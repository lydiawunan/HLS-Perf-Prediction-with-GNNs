#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 702492793
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, unsigned int p_4[1][5][1], unsigned long long p_7,
         unsigned long long p_9[3])
{
  int v;
  long result;
  result = 699617914L;
  v = (int)((- p_7 * (! p_9[1] % 18446744073709551572ULL)) * 7ULL);
  result = - (~ ((long)-3.32662154464e+38 / (result + 615L))) - (long)(! v);
  result = (long)((~ (18446744072888000048ULL / (unsigned long long)(
                      result + 268L)) - (unsigned long long)p_4[0][4][0]) ^ (unsigned long long)(- (- p_4[0][4][0])));
  result = (long)((unsigned long)(- (p % 26U)) % (unsigned long)(result + 153L) | 60UL);
  return result;
}


