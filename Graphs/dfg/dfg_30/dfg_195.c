#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1024830898
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p, int p_5, unsigned short p_7, signed char p_9,
                   long long p_11)
{
  char v;
  unsigned short result;
  v = (char)(p_5 - (int)p_7);
  result = (unsigned short)((long long)((((unsigned int)p_5 - 53221U) ^ (unsigned int)(
                                         -66 ^ (int)p_7)) + ((1059509243U - (unsigned int)p_9) - 38U)) % (
                            ! (~ ((long long)p_7 - p_11)) + 601LL));
  result = (unsigned short)((18446744069280365993ULL | (349859984ULL + (unsigned long long)(
                                                        (int)result + p))) + (unsigned long long)(
                            -48 * (int)(~ (~ v))));
  return result;
}


