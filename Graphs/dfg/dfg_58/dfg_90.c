#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 604730851
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(short p[2][2][2], unsigned char p_9)
{
  unsigned long long v_13;
  unsigned short v_11;
  char v_7;
  short v_5;
  int v;
  char result;
  v_13 = 11201ULL;
  v_11 = (unsigned short)p_9;
  v_7 = (char)p_9;
  result = (char)-124;
  v_5 = (short)((unsigned long long)v_11 % (! (~ v_13 << 14ULL) + 286ULL));
  v = (int)(- (! (~ v_7)));
  v_5 = (short)((unsigned long)((long)p[0][1][1] ^ ((long)p[0][1][1] * -41291L ^ (long)(~ p_9))) + (unsigned long)(~ (
                (unsigned int)((int)v_5 | 27056) / 7U)));
  result = (char)(63944 % ((195 - (int)p[0][1][0] / (v + 828)) + 529) - (
                  ~ ((int)v_5 / ((int)v_7 + 365)) - (int)result));
  return result;
}


