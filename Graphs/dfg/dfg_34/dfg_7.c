#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 209258320
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned long p, double p_7, unsigned long p_13)
{
  long long v_17;
  signed char v_15;
  unsigned short v_11;
  int v_9;
  char v_4;
  unsigned short v;
  char result;
  v_17 = (long long)p_7;
  v_15 = (signed char)-8;
  v_11 = (unsigned short)20984;
  v_9 = (int)p;
  v = (unsigned short)27831;
  result = (char)p_13;
  v_4 = (char)(- (v_9 % ((-73 + (int)v_15) + 487)) >> (~ v_17 & 31LL));
  v_9 = (int)((double)v_11 - ((double)(844725108 | ((int)result + (int)v_4)) + 
                              (p_7 / ((double)p_13 + 691.)) / (p_7 / 4919. + 1015.)));
  v_4 = (char)((double)(p / 123UL) - (double)(((int)((unsigned short)p_7) * (int)v) * v_9) * - (- p_7));
  result = (char)((unsigned long)((int)v * ((int)(! v_4) ^ (int)v_4)) - p);
  return result;
}


