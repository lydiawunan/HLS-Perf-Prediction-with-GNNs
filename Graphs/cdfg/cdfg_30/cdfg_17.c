#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 517083822
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p)
{
  unsigned int v_9;
  long long v_7;
  long long v_5;
  unsigned long long v;
  unsigned short result;
  v_9 = 4294909393U;
  v_7 = 53486LL;
  v_5 = -297535391LL;
  v = (unsigned long long)p;
  result = (unsigned short)((long long)((int)p + (int)(~ p)) / ((5738LL / (
                                                                 v_5 + 323LL) - 
                                                                 v_7 * (long long)v_9) + 784LL));
  result = (unsigned short)((18446744073709517944ULL / (18446744073709548796ULL * v + 992ULL)) % (unsigned long long)(
                            (int)result + 182));
  return result;
}


