#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 702452114
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned char p, unsigned char p_5, unsigned long p_7,
         unsigned long long p_9, short p_13)
{
  int v_11;
  unsigned long v;
  char result;
  v_11 = 6952;
  result = (char)((unsigned long long)(939984953 - (v_11 % ((int)p_13 + 300) ^ (int)p_13)) - (
                  18446744073709551589ULL * (62449726ULL + (unsigned long long)-3.26823864734e+38) ^ (unsigned long long)(- v_11)));
  v = (unsigned long)(- 557.374241933);
  v = (unsigned long)(- (! ((unsigned long long)(p_7 + 51472UL) % (p_9 % (unsigned long long)(
                                                                   v + 192UL) + 819ULL))));
  result = (char)((long long)(! (v + (unsigned long)result) | (unsigned long)(
                              (-82 & (int)p) - ((int)p | (int)p_5))) * -642310996LL);
  return result;
}


