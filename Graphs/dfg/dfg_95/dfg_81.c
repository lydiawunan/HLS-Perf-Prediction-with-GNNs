#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1031961953
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long long p, short p_7)
{
  signed char v_9;
  unsigned char v_5;
  unsigned int v;
  unsigned short result;
  v_9 = (signed char)-60;
  v_5 = (unsigned char)p;
  v = 30811U;
  result = (unsigned short)(((p + 18446744073709551583ULL) * (unsigned long long)(
                             21 & (int)v_5) ^ 0) % (unsigned long long)(
                            ((unsigned int)(~ v_9) + - (v + v)) + 748U));
  v = (unsigned int)p;
  v = (unsigned int)((unsigned long)v - (unsigned long)((-436484407L / (long)(
                                                         12 / ((int)v_5 + 435) + 615)) % (long)(
                                                        (int)(~ (~ p_7)) + 483)));
  result = (unsigned short)(- ((unsigned long long)result * ((unsigned long long)(
                                                             (long long)v * -54462LL) % (
                                                             p + 543ULL))));
  return result;
}


