#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 289676330
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, unsigned short p_5[4][5], unsigned char p_7)
{
  unsigned short v_9;
  char v;
  int result;
  v_9 = (unsigned short)p_7;
  v = (char)-86;
  result = ((int)p | (int)p) & (int)p_7;
  result = (int)((long long)((158 + (int)p_7) + 1480189220) - (long long)result % (
                                                              (-106049995LL * (long long)p_7 + (long long)v_9) + 784LL));
  v = (char)(- (((int)p_5[0][4] + (int)p_7) * (20997 % ((int)v_9 + 113)) - 
                (int)(~ v) * result));
  result = ! (! (((int)v % (result + 672)) % (((int)p - (int)p) + 155)));
  return result;
}


