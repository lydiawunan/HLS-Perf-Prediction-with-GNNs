#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1017809613
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p)
{
  int v_13;
  int v_11;
  unsigned int v_9;
  unsigned char v_7;
  unsigned short v_5;
  long long v;
  short result;
  v_13 = (int)p;
  v_11 = (int)p;
  v_7 = (unsigned char)70;
  v_5 = (unsigned short)13438;
  v = (long long)p;
  result = (short)-20210;
  if (1009166853LL > ~ v) {
    result = (short)(-19 | (int)result);
    v_11 = (int)(4294925975U * (unsigned int)((v_13 & (int)p) & 106));
    v_9 = (unsigned int)(((long long)(-486.192803346 * (double)v_7) ^ 
                          v * (long long)v_5) / (long long)(0 / (long)(
                                                            -8172 / (
                                                            (int)p + 670) + 647) + 364L));
  }
  else {
    result = (short)(~ (- (19295 + (int)v_5)));
    v_7 = (unsigned char)(! (127 * (int)((unsigned char)7.95800065443e+37f)) + (int)(- p));
    v_9 = 2085U;
  }
  while (v / (long long)((int)(! p) + 507) >= (long long)(0 ^ (unsigned long)(
                                                          (int)(! v_5) - (
                                                          (int)p - -39241)))) {
    v_9 = (unsigned long long)v_11 % (((unsigned long long)v_9 + (unsigned long long)v_7 / 18446744072856227746ULL) + 98ULL);
    v_5 = (unsigned short)p;
    v_11 = (int)(! (! 38057LL));
    v = 46LL;
  }
  while_0_break: ;
  return result;
}


