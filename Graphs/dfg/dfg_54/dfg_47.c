#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 232993175
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p)
{
  char v_10;
  unsigned int v_8;
  unsigned char v_6;
  unsigned int v_4;
  long long v;
  signed char result;
  v_10 = (char)p;
  v_8 = 4044678001U;
  v_6 = (unsigned char)145;
  v = 679753225LL;
  v_4 = (unsigned int)(~ ((unsigned long long)(v / (long long)((int)p + 381)) - 
                          (unsigned long long)v % 48594ULL) + (unsigned long long)(
                       (unsigned int)(! (6 | (int)v_6)) % (v_8 + 557U)));
  v_8 = ~ (~ ((unsigned int)((int)((char)380.373488983) - (int)v_10) * v_8));
  v_4 = 5684U + ! (! v_4 + (unsigned int)-1.50727718131e+38 * v_8);
  result = (signed char)(~ (((unsigned long long)(799049462LL / (v + 538LL)) + 18446744073709489707ULL) - (unsigned long long)(
                            v_4 * 42911U - (unsigned int)(- v_6))));
  return result;
}


