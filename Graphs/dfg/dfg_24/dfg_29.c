#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 684917947
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, unsigned char p_9)
{
  double v_11;
  unsigned long v_7;
  unsigned char v_5;
  signed char v;
  short result;
  v_11 = (double)p;
  v_7 = (unsigned long)p_9;
  v = (signed char)(36UL & ~ (0 / ((unsigned long)((double)p_9 * v_11) + 410UL)));
  v_5 = (unsigned char)v_7;
  v = (signed char)((long long)(-756098754.034 - (double)p) % (((long long)(
                                                                (int)v / 14722) * 36987LL + (long long)(- v_5)) + 184LL));
  result = (short)v;
  return result;
}


