#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 252238717
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, long p_9, unsigned long long p_13,
                   unsigned int p_15[4][4][4])
{
  unsigned short v_17;
  unsigned long long v_11;
  long long v_7;
  char v_4;
  signed char v;
  unsigned short result;
  v_17 = (unsigned short)p;
  v_11 = 18446744073524792862ULL;
  v_7 = (long long)p_15[3][0][0];
  v_4 = (char)p_13;
  v = (signed char)p;
  result = (unsigned short)(- p_15[0][3][1]);
  while ((long long)(~ ((int)v + (int)v_4)) % ((((long long)p - v_7) + (long long)p_9) + 626LL) < 23040LL) {
    result = v_17;
    v_4 = p;
    v_7 = (long long)((- v_11 + (p_13 << (p_15[1][2][0] & 63U))) + (unsigned long long)(
                      4294962728U >> ((int)result & 31)));
  }
  while_0_break: ;
  return result;
}


